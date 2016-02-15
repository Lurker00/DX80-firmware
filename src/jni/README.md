`libParticleOmxHiFiComponent.so` from iBasso DX80 and DX90 firmware is linked against `libOpenSLES.so`, though MangoPlayer does not utilize this functionality. As a result, when MangoPlayer starts, libOpenSLES.so is loaded into RAM, along with its dependencies, some megabytes in total.

This stub resolves `libParticleOmxHiFiComponent.so` required externals, but does nothing, allowing to make MangoPlayer lighter, and to remove a lot of redundant files from the firmware.

The original source code was taken from the (Android master branch)[https://android.googlesource.com/platform/frameworks/wilhelm/] at February 08, 2016, then it was edited to the minimum required for building the stub.

If you need this piece of work for a reason, please don't forget to mention the place you've taken it from (this one!).
