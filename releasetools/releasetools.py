# Copyright (C) 2016 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

def FullOTA_InstallEnd(info):
  info.script.Mount("/system")
  info.script.AppendExtra('ifelse(is_substring("T33", getprop("ro.bootloader")), ui_print("Setting Millet Mixer Path"));')
  info.script.AppendExtra('ifelse(is_substring("T33", getprop("ro.bootloader")), run_program("/sbin/sh", "-c", "busybox cp -f /system/etc/mixer_paths_millet.xml /system/etc/mixer_path.xml"));')
  info.script.AppendExtra('ifelse(is_substring("T33", getprop("ro.bootloader")), ui_print("Setting Density to 230"));')
  info.script.AppendExtra('ifelse(is_substring("T33", getprop("ro.bootloader")), run_program("/sbin/sed", "-i", "/lcd/s/[0-9][0-9][0-9]/213/g", "/system/build.prop"));')
  info.script.AppendExtra('ifelse(is_substring("T53", getprop("ro.bootloader")), ui_print("Setting Matisse Mixer Path"));')
  info.script.AppendExtra('ifelse(is_substring("T53", getprop("ro.bootloader")), run_program("/sbin/sh", "-c", "busybox cp -f /system/etc/mixer_paths_matisse.xml /system/etc/mixer_path.xml"));')
  info.script.AppendExtra('ifelse(is_substring("T53", getprop("ro.bootloader")), ui_print("Setting Density to 160"));')
  info.script.AppendExtra('ifelse(is_substring("T53", getprop("ro.bootloader")), run_program("/sbin/sed", "-i", "/lcd/s/[0-9][0-9][0-9]/160/g", "/system/build.prop"));')
  info.script.AppendExtra('ifelse(is_substring("T330", getprop("ro.bootloader")), ui_print("Removing Telephony Stuff"));')
  info.script.AppendExtra('ifelse(is_substring("T330", getprop("ro.bootloader")), package_extract_file("install/unified/wifionly.sh", "/tmp/wifionly.sh"));')
  info.script.AppendExtra('ifelse(is_substring("T330", getprop("ro.bootloader")), run_program("/tmp/wifionly.sh));')
  info.script.AppendExtra('ifelse(is_substring("T530", getprop("ro.bootloader")), ui_print("Removing Telephony Stuff"));')
  info.script.AppendExtra('ifelse(is_substring("T530", getprop("ro.bootloader")), package_extract_file("install/unified/wifionly.sh", "/tmp/wifionly.sh"));')
  info.script.AppendExtra('ifelse(is_substring("T530", getprop("ro.bootloader")), run_program("/tmp/wifionly.sh));')
  info.script.AppendExtra('ifelse(is_substring("T330", getprop("ro.bootloader")), ui_print("Flashing milletwifi boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T330", getprop("ro.bootloader")), package_extract_file("install/unified/boot_milletwifi.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('ifelse(is_substring("T331", getprop("ro.bootloader")), ui_print("Flashing millet3g boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T331", getprop("ro.bootloader")), package_extract_file("install/unified/boot_millet3g.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('ifelse(is_substring("T335", getprop("ro.bootloader")), ui_print("Flashing milletlte boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T335", getprop("ro.bootloader")), package_extract_file("install/unified/boot_milletlte.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('ifelse(is_substring("T530", getprop("ro.bootloader")), ui_print("Flashing matissewifi boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T530", getprop("ro.bootloader")), package_extract_file("install/unified/boot_matissewifi.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('ifelse(is_substring("T531", getprop("ro.bootloader")), ui_print("Flashing matisse3g boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T531", getprop("ro.bootloader")), package_extract_file("install/unified/boot_matisse3g.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('ifelse(is_substring("T535", getprop("ro.bootloader")), ui_print("Flashing matisselte boot.img"));')
  info.script.AppendExtra('ifelse(is_substring("T535", getprop("ro.bootloader")), package_extract_file("install/unified/boot_matisselte.img", "/dev/block/platform/msm_sdcc.1/by-name/boot"));')
  info.script.AppendExtra('set_metadata("/system/bin/qmuxd", "uid", 0, "gid", 2000, "mode", 0755, "capabilities", 0x0, "selabel", "u:object_r:qmuxd_exec:s0");')
  info.script.AppendExtra('set_metadata("/system/bin/radish", "uid", 0, "gid", 2000, "mode", 0755, "capabilities", 0x0, "selabel", "u:object_r:system_file:s0");')
  info.script.Unmount("/system")
