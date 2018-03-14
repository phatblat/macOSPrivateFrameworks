/*
 * build.gradle.kts
 * macOS Private Frameworks
 */

import at.phatbl.shellexec.ShellCommand
import at.phatbl.shellexec.ShellExec
import java.io.File
import java.nio.file.Files.delete
import javax.inject.Inject

buildscript {
    repositories.jcenter()
    dependencies.classpath("at.phatbl:shellexec:+")
}

plugins.apply(BasePlugin::class.java)

val taskGroup by extra("🍎🕵🏻‍♂️ Private Frameworks")
val destinationFolder = file("PrivateFrameworks")
val privateFrameworksFolder = file("/System/Library/PrivateFrameworks")
val frameworks = privateFrameworksFolder.listFiles().map { folder ->
    if (folder.name.contains(".framework")) {
        return@map folder.name.substringBeforeLast('.')
    } else {
        return@map null
    }
}

tasks {
    val removeBatchFile by creating(Delete::class) { delete("gradlew.bat") }

    "wrapper"(Wrapper::class) {
        gradleVersion = "4.6"
        distributionType = Wrapper.DistributionType.ALL
        finalizedBy(removeBatchFile)
    }

    val createDestinationFolder by creating { doLast { destinationFolder.mkdirs() } }

    "listFrameworks" {
        description = "Lists macOS private frameworks."
        group = taskGroup
        doLast {
            frameworks.forEach { frameworkName ->
                println(frameworkName)
            }
        }
    }

    "dumpHeaders" {
        description = "Extracts headers from all macOS private frameworks."
        group = taskGroup
        frameworks.forEach { frameworkName ->
            dependsOn("dumpHeaders$frameworkName")
        }
    }

    addRule("Pattern: dumpHeaders<FrameworkName>: Dumps the class headers for the given private framework name") {
        val taskName = this
        val taskPrefix = "dumpHeaders"
        if (taskName.startsWith(taskPrefix) && taskName != taskPrefix) {
            tasks.create(taskName, DumpHeadersTask::class.java) {
                frameworkName = taskName.substringAfter(taskPrefix)
                sourceFolder = privateFrameworksFolder
                outputFolder = destinationFolder
            }
        }
    }
}

// Task classes

class Dumper @Inject constructor(
    val sourceFolder: File,
    val outputFolder: File
): Runnable {
    override fun run() {
        val command = "bin/class-dump -Ho $outputFolder $sourceFolder"
        val shellCommand = ShellCommand(sourceFolder, command)
        shellCommand.start()

        if (shellCommand.succeeded) {
            println(shellCommand.stdout)
        } else {
            println(shellCommand.stderr)
        }
    }
}

open class DumpHeadersTask @Inject constructor(
    val worker: WorkerExecutor
): DefaultTask() {
    init {
        description = "Dumps headers for a private framework."
    }

    @Input
    lateinit var frameworkName: String

    // FIXME: @InputDirectory causes errors with symlinks
    // Failed to capture snapshot of input files for task ':dumpHeadersDebugSymbols' property 'sourceFolder' during up-to-date check.
    // > Could not list contents of '/System/Library/PrivateFrameworks/Spotlight.framework/XPCServices'. Couldn't follow symbolic link.
    @Internal
    lateinit var sourceFolder: File

    @OutputDirectory
    lateinit var outputFolder: File

    /** Submit work to worker */
    @TaskAction
    fun dumpHeaders() {
        worker.submit(Dumper::class.java) {
            fun execute(config: WorkerConfiguration) {
                config.isolationMode = IsolationMode.NONE
                config.params("$sourceFolder/$frameworkName.framework", "$outputFolder/$frameworkName")
            }
        }
    }
}
