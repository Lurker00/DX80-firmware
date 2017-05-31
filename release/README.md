# iBasso DX80 firmware modified by Lurker

**DISCLAIMER:** No changes were made to the basic player functionality and behavior! Expect the same bugs and misbehavior found in the base stock firmware! **No warranty at all: use the modified firmware at your own risk and responsibility!**

**NOTE:** to tell which version is running, go to _Settings_->_Advanced_->_System Info_ and check the _Model number_. The modification version number (L0, L1 etc) is right after the actual model number (DX80).

Firmware images (`update.img`) are compressed with [7-Zip](http://www.7-zip.org/) for it produces significantly smaller archives compared to ZIP.

| File | Description |
| --- | --- |
| [**`DX80FirmwareV1.6.0-L1.zip`**](https://github.com/Lurker00/DX80-firmware/releases/download/v1.6.0/DX80FirmwareV1.6.0-L1.zip) | **based on L0, but with default fonts.** |
| [**`DX80FirmwareV1.6.0-L0.zip`**](https://github.com/Lurker00/DX80-firmware/releases/download/v1.6.0/DX80FirmwareV1.6.0-L0.zip) | **fonts replaced ([1]), CPU at performance mode ([3]), custom built NTFS drivers ([5]), ultimate cleanup ([9]), image size reduced ([10]).** |
| [`DX80FirmwareV1.5.8-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.5.8-L1.7z) | based on L0, but with default fonts. |
| [`DX80FirmwareV1.5.8-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.5.8-L0.7z) | fonts replaced ([1]), CPU at performance mode ([3]), custom built NTFS drivers ([5]), ultimate cleanup ([9]). |
| [`DX80FirmwareV1.5.2-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.5.2-L1.7z) | based on L0, but with default fonts. |
| [`DX80FirmwareV1.5.2-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.5.2-L0.7z) | fonts replaced ([1]), CPU at performance mode ([3]), custom built NTFS drivers ([5]), flash partition table corrected ([7]), ultimate cleanup ([9]). |
| [`DX80FirmwareV1.4.2-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.4.2-L1.7z) | based on L0, but with default fonts. |
| [`DX80FirmwareV1.4.2-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.4.2-L0.7z) | fonts replaced ([1]), CPU at performance mode ([3]), custom built NTFS drivers ([5]), flash partition table corrected ([7]), ultimate cleanup ([9]). |
| [`DX80FirmwareV1.4.0-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.4.0-L1.7z) | based on L0, but with default fonts. |
| [`DX80FirmwareV1.4.0-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.4.0-L0.7z) | fonts replaced ([1]), CPU at performance mode ([3]), custom built NTFS drivers ([5]), flash partition table corrected ([7]), ultimate cleanup ([9]). |
| [`DX80FirmwareV1.3.3-L4.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.3-L4.7z) | based on L3, but with default fonts. |
| [`DX80FirmwareV1.3.3-L3.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.3-L3.7z) | based on L2, with ultimate cleanup ([9]). |
| [`DX80FirmwareV1.3.3-L2.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.3-L2.7z) | based on L0, with even more aggressive cleanup ([6]), flash partition table corrected ([7]), USB device names fixed ([8]).
| [`DX80FirmwareV1.3.3-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.3-L1.7z) | same as L0, but with default fonts. |
| [`DX80FirmwareV1.3.3-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.3-L0.7z) | fonts replaced ([1]), unused services disabled ([2]), CPU at performance mode ([3]), unregistered video codecs ([4]), custom built NTFS drivers ([5]), firmware size and MangoPlayer RAM usage reduced ([6]).
| [`DX80FirmwareV1.3.0-L1.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.0-L1.7z) | same as L0, but with default fonts. |
| [`DX80FirmwareV1.3.0-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.3.0-L0.7z) | fonts replaced ([1]), unused services disabled ([2]), CPU at performance mode ([3]), unregistered video codecs ([4]), custom built NTFS drivers ([5]). |
| [`DX80FirmwareV1.2.1-L0.7z`](https://github.com/Lurker00/DX80-firmware/raw/master/release/DX80FirmwareV1.2.1-L0.7z) | fonts replaced ([1]), unused services disabled ([2]), CPU at performance mode ([3]), unregistered video codecs ([4]), custom built NTFS drivers ([5]). |

[1]: #1-fonts-replaced
[2]: #2-unused-services-disabled
[3]: #3-cpu-is-always-working-at-the-highest-performance
[4]: #4-unregistered-video-codecs
[5]: #5-custom-built-ntfs-drivers
[6]: #6-aggressive-firmware-cleanup
[7]: #7-flash-partition-table-corrected
[8]: #8-usb-device-names-fixed
[9]: #9-ultimate-cleanup
[10]: #10-image-size-reduced

# Detailed description of the changes

## Introduction for those who seeks the sound quality
All firmware versions for iBasso DX80, stock or with my modifications, are bit perfect. It means, with EQ turned off, the *sound data is not affected by the software, and is transferred to the DAC exactly as it is*. Any difference in sound signatures between versions are resulted from different conditions under which the hardware is running.

In DAPs, with limited space and one battery as the power source for both digital and analog circuits, the sound signature also depends on CPU load. So, any changes in the firmware code, even unrelated directly to the sound path, may affect the sound signature.

## 1. Fonts replaced

iBasso uses `Microsoft YaHei` for Latin-based and Chinese characters, and `Nimbus Sans Global Bold` for the rest (Cyrillic, Japanese, Korean, Thai etc). It also uses pre-calculated character width tables, which (confirmed by calculations!) do not correspond to any, or any combination, of those fonts. Regardless of the reason iBasso went this way, the resulting texts look awful for me, and it was the primary reason for the firmware modification.

The two fonts used by iBasso are replaced with one, which is `Roboto Condensed`, with the missing characters merged from `Arial Unicode MS`. Character width tables were calculated from the actual font metrics.

Actually, `MotoyaLMaru W3 mono` is used for Japanese characters, and it also was replaced with my combined font starting from 1.3.3L2.

## 2. Unused services disabled

The full list is:
* `akmd` (driver for AK8975, 3-axis electronic compass IC, which is not present in DX80).
* `debuggerd` (gdb debugger interface, also creates crash logs of native applications).
* `drmserver` (Digital Rights Management service).
* `installd` (required to install Android applications from APK).
* `keystore` (manages cryptographic keys).
* `lmkd` (Low Memory Killer service).
* `mediaserver` (indexes media files, provides access to them for Android applications).
* `netd` (internet servers and services).
* `rild` (controls wireless hardware).
* `servicemanager` (Android applications interface to hardware and resources).
* `surfaceflinger` (provides screen access for Android applications).

It is obvious that none of them have any use in DX80.

**Note:** At the startup, you may see two small logos instead of one big on the screen. It's only cosmetic issue, don't worry!

## 3. CPU is always working at the highest performance

By default, Android uses `interactive` CPU performance governor, meaning, CPU frequency depends on a load and may be changed. Changes in the CPU working frequency during audio playback affect the stability of the power source and temperature, probably, also the stability of the sound stream from CPU to DAC. So, stable CPU speed also means stable power and temperature of other components: DAC, clock generator, op-amps. This firmware forces `performance` governor, i.e. always highest supported frequency.

Keep CPU running at the highest speed (1.2GHz for DX80) does not mean to drain more power: Linux/Android kernel is smart enough to halt a CPU core if it is not actually used. Also, CPU is not the main power consumer: display, flash, RAM, DAC and analog part (including headphone amplifier) in total consume much more.

## 4. Unregistered video codecs

The codec set used by Mango player includes video playback related stuff. The tweak is to remove video codecs from declarations. It slightly optimizes the way the player works.

## 5. Custom built NTFS drivers
Recently I've finished [my port of exFAT and NTFS drivers for Android](https://github.com/Lurker00/Android-fs) and decided to use them in DX80 firmware. They are built from the latest original source code (DX80 uses old versions), and I've made some changes which I found useful for DX80: in particular, NTFS driver does not update "last access" timestamp. It means, there are no writes to the SD card or HDD each time a track is played or a cover is displayed.

**Note:** exFAT driver in DX80 is implemented at the kernel level, and currently I see no a way to replace it with mine. Good news that it does not update "last access" timestamp, so, no reasons to worry about.

##6. Aggressive firmware cleanup

The stock firmware image contains a lot of files that are not actually used. I've removed most of them.

The MangoPlayer sound library uses a proprietary implementation of [OpenMAX](https://en.wikipedia.org/wiki/OpenMAX) engine, that supports sound playback via [OpenSL ES](https://en.wikipedia.org/wiki/OpenSL_ES) interface, which is not used in DX80. I've written a [small stub to replace the system library](../src/jni), which allowed me to remove even more files. After this, MangoPlayer also requires less RAM to work, because OpenGL ES related stuff is not loaded with the player.

In 1.3.3L2, I've removed even more files, and also OpenMAX engine components that I've found not used by MangoPlayer.

## 7. Flash partition table corrected

Starting from the first firmware update (1.1.0), the flash partition table is incorrect: the last partition (`user`) overlaps some other partitions. It is not used, and that's because it does not cause real problems. But I believe better to be on the safe side.

This change is only a parameter to the kernel with the correct value of the partition start offset. It does *not* re-partition the flash. It does not prevent to install an official or any other firmware version after that.

**Note:** The firmware update process may take two steps, with automatic reboot in between, and the second step (actually the firmware update) is always performed in GUI mode, even if you started the firmware update from the recovery console. This happens due to kernel parameters changed.

**Note 2:** Starting from 1.5.8, iBasso has corrected the partition table, and also increased internal storage used for the player data files, decreasing the size of the last, unused, partition (`user`) to the minimum.

## 8. USB Device names fixed

You might noticed that after every factory reset, when you connect DX80 to your computer, it finds new devices and install drivers. This is because pseudo-random serial numbers are used for drives, and these numbers are re-created after every factory reset. Starting from 1.3.3L2, a fixed character sequency used instad. Also, "iBasso" and "DX80" strings are used for the manufacturer and model names, instead of "rockchip" and "rk312x".

**Note:** iBasso has implemented this change starting from firmware 1.4.0.

## 9. Ultimate cleanup

This *finalizes* the process started by "unused services disabled ([2])", "unregistered video codecs ([4])" and "aggressive cleanup ([6])". I mean it, because, starting from 1.3.3L3, `MangoPlayer` is the only running process, apart from the `kernel` and `init`, which are required, obviously! Details:

* System logging is turned off. In particular, it is achived by a [`liblog.so` stub that does nothing](https://github.com/Lurker00/DX80-firmware/blob/master/src/jni).
* SELinux is turned off. Not a permissive mode: SELinux does not even start.
* Default I/O scheduler for block devices is [`noop`](https://en.wikipedia.org/wiki/Noop_scheduler) (was [`cfq`](https://en.wikipedia.org/wiki/CFQ)). For flash memory cards, and, especially, in one process environment, any other scheduler just takes memory and CPU cycles.
* [`KSM` (Kernel Same-page Merging)](https://en.wikipedia.org/wiki/Kernel_same-page_merging) kernel service stopped. With only one process running and plenty of RAM, it just interrupts MangoPlayer two times per second without a real need.

Finally, almost all files that have no use in this particular environment, were deleted from the firmware image. Almost - because I've left some of them, which are useful for tests.

**After this change, I can say that the firmware has been optimized to run MangoPlayer to the extent I can't imagine what else could be done**. I'll certainly do if I'd find more :)

**Note:** The firmware update process may take two steps, with automatic reboot in between, and the second step (actually the firmware update) is always performed in GUI mode, even if you started the firmware update from the recovery console. This happens due to kernel parameters changed, just like with [7].

## 10. Image size reduced

I've removed the firmware parts that were not changed since the very first factory build. It makes download and flashing faster, but these images are not suitable for flashing a device with fully erased memory. If you, by a chance, need to flash an empty device, please first use any stock firmware, then upgrade to such a build.
