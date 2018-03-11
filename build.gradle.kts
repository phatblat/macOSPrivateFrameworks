/*
 * build.gradle.kts
 * macOS Private Frameworks
 */

import at.phatbl.shellexec.ShellExec

buildscript {
    repositories.jcenter()
    dependencies.classpath("at.phatbl:shellexec:+")
}

val taskGroup = "🍎🕵🏻‍♂️ Private Frameworks"
val privateFrameworksFolder = file("/System/Library/PrivateFrameworks")
val destinationFolder = file("PrivateFrameworks")

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
            privateFrameworksFolder.listFiles().forEach { folder ->
                if (folder.name.contains(".framework")) {
                    val filename = folder.name.substringBeforeLast('.')
                    println(filename)
                }
            }
        }
    }

    "classDump"(ShellExec::class) {
        description = "Dumps headers for a private framework."
        group = taskGroup
        dependsOn(createDestinationFolder)

        val framework = "DebugSymbols"
        inputs.properties(mapOf(framework to "framework"))

        /*
         * class-dump
         *  -H             generate header files
         *  -o <dir>       output directory used for -H
         */
        command = "bin/class-dump -Ho $destinationFolder/$framework $privateFrameworksFolder/$framework.framework"
    }
}
