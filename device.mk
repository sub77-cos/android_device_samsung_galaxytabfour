# Copyright (C) 2015 The CyanogenMod Project
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

# Audio configuration
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/audio/audio_platform_info.xml:system/etc/audio_platform_info.xml \
    $(DEVICE_PATH)/audio/audio_policy.conf:system/etc/audio_policy.conf \
    $(DEVICE_PATH)/audio/mixer_paths.xml:system/etc/mixer_paths.xml

# GApps
GAPPS_VARIANT := micro

# GPS
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/gps/gps.conf:system/etc/gps.conf

# Input device
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/idc/sec_e-pen.idc:system/usr/idc/sec_e-pen.idc \
    $(DEVICE_PATH)/idc/sec_touchscreen.idc:system/usr/idc/sec_touchscreen.idc \
    $(DEVICE_PATH)/idc/Synaptics_HID_TouchPad.idc:system/usr/idc/Synaptics_HID_TouchPad.idc \
    $(DEVICE_PATH)/idc/Synaptics_RMI4_TouchPad_Sensor.idc:system/usr/idc/Synaptics_RMI4_TouchPad_Sensor.idc

# Keylayouts
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/keylayout/sec_touchscreen.kl:system/usr/keylayout/sec_touchscreen.kl \
    $(DEVICE_PATH)/keylayout/atmel_mxt_ts.kl:system/usr/keylayout/atmel_mxt_ts.kl

# Lights
PRODUCT_PACKAGES += \
    lights.msm8226

# Media
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/configs/media_profiles.xml:system/etc/media_profiles.xml

# Overlay
DEVICE_PACKAGE_OVERLAYS += $(DEVICE_PATH)/overlay
PRODUCT_CHARACTERISTICS := tablet

# Permissions
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/tablet_core_hardware.xml:system/etc/permissions/tablet_core_hardware.xml

# Ramdisk
PRODUCT_PACKAGES += \
    fstab.qcom \
    init.target.rc

# System properties
-include $(DEVICE_PATH)/system_prop.mk

# Thermal
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/configs/thermal-engine-8226.conf:system/etc/thermal-engine-8226.conf

# Unified Stuff
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/unified/boot_matissewifi.img:install/unified/boot_matissewifi.img \
    $(DEVICE_PATH)/unified/wifionly.sh:install/unified/wifionly.sh

# Vendor & common device inherits
$(call inherit-product, vendor/google/build/opengapps-packages.mk)
$(call inherit-product, device/samsung/msm8226-common/msm8226.mk)
$(call inherit-product, vendor/samsung/galaxytabfour/galaxytabfour-vendor.mk)
