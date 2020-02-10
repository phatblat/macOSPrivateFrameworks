/*
 * build.gradle.kts
 * macOS Private Frameworks
 */

/* -------------------------------------------------------------------------- */
// 🛃 Imports
/* -------------------------------------------------------------------------- */

import at.phatbl.shellexec.ShellCommand
import at.phatbl.shellexec.ShellExec
import java.io.File
import java.nio.file.Files.delete
import javax.inject.Inject

/* -------------------------------------------------------------------------- */
// 🔌 Plugins
/* -------------------------------------------------------------------------- */

plugins {
    // Gradle built-in
    base

    // Gradle plugin portal - https://plugins.gradle.org
    id("at.phatbl.clamp") version "1.0.0"
    id("at.phatbl.shellexec") version "1.1.3"
}

/* -------------------------------------------------------------------------- */
// 🐘 Gradle Wrapper
/* -------------------------------------------------------------------------- */

val wrapper = tasks.getByName("wrapper") as Wrapper
wrapper.gradleVersion = "6.1.1"
wrapper.distributionType = Wrapper.DistributionType.ALL

/* -------------------------------------------------------------------------- */
// ☑️ Tasks
/* -------------------------------------------------------------------------- */

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

    val dumpHeadersTest by creating(DumpHeadersTask::class) {
        frameworkName = "LibraryRepair"
        sourceFolder = privateFrameworksFolder
        outputFolder = destinationFolder
    }
}

/* -------------------------------------------------------------------------- */
// 🎓 Task Classes
/* -------------------------------------------------------------------------- */

class Dumper @Inject constructor(
        var sourceFolder: File,
        var outputFolder: File
): Runnable {
    override fun run() {
        val command = "bin/class-dump -Ho $outputFolder $sourceFolder"
        val shellCommand = ShellCommand(File("."), command)
        shellCommand.start()

        if (shellCommand.succeeded) {
            println("Dumped $sourceFolder to $outputFolder " + shellCommand.stdout)
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
            isolationMode = IsolationMode.NONE
            params(
                File(sourceFolder, "$frameworkName.framework"),
                File(outputFolder, frameworkName)
            )
        }
    }
}
