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
