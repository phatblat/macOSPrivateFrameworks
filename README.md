# 🍎🕵🏻‍♂️ macOS Private Frameworks

This repo contains headers extracted from private frameworks that are included in various macOS releases.
These have been generated using [class-dump](http://stevenygard.com/projects/class-dump/), which appears
to no longer be actively maintained.

## ⚠️ Caveat Emptor

The contents of this repo serve only as intellectual entertainment and should not be used as a point of reference.
As stated in section 3.3.1 of the [Apple Developer Program License Agreement](https://developer.apple.com/terms/)
your applications should not use these undocumented APIs.

> 3.3.1 Applications may only use Documented APIs in the manner prescribed by Apple and
must not use or call any private APIs. Further, macOS Applications submitted to Apple for
distribution on the App Store may use only Documented APIs included in the default installation
of macOS or as bundled with Xcode and the Mac SDK; deprecated technologies (such as Java)
may not be used.

The headers contained in this repo do not serve as documentation because there is no guarantee
that they are correct. One can only guess what the API do based on the object and method names.
Furthermore, using private APIs in a production app is a terrible idea because they could change
at any time, breaking your app!

## 🔀 Branches

In order to facilitate diffing headers for different macOS versions, branches will be maintained for major releases.
These branches will be rebased onto each other in order to build up a historical view. Patch level releases will be tagged.

- [`master`](https://github.com/phatblat/macOSPrivateFrameworks/tree/master) - "Catalina"
- [`10.14`](https://github.com/phatblat/macOSPrivateFrameworks/tree/10.14) - "Mojave"
- [`10.13`](https://github.com/phatblat/macOSPrivateFrameworks/tree/10.13) - "High Sierra"
- `10.12` - 🚧 "Sierra"
- `10.11` - 🚧 "El Capitan"
- `10.10` - 🚧 "Yosemite"
- `10.9` - 🚧 "Mavericks"

## 📜 Scripts

The class dump command can be found in [`build.gradle.kts`](https://github.com/phatblat/macOSPrivateFrameworks/blob/master/build.gradle.kts#L113).

### 🤳🏼 Usage

`./gradlew taskName`

- `listFrameworks` - Lists all frameworks found at `/System/Library/PrivateFrameworks`
- `dumpHeaders` - Extracts headers from all private frameworks on the current macOS system into the local project `PrivateFrameworks` folder (takes several minutes to run on ~500 frameworks).
- `dumpHeaders<FrameworkName>` - Extracts headers for a single framework. This is a task rule and will fail if `FrameworkName` does not exist. (example: `./gradlew dumpHeadersCoreUI`)

## 📄 License

This repo is licensed under the MIT License. See the [LICENSE](LICENSE.md) file for rights and limitations.
