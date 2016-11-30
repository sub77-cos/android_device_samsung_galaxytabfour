# Copyright (C) 2016 The Android OpenSource Project
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

# Inherit some common COS stuff.
$(call inherit-product, vendor/cos/common.mk)

# Inherit device configuration
$(call inherit-product, device/samsung/galaxytabfour/full_galaxytabfour.mk)

# Release name
PRODUCT_RELEASE_NAME := SM-T
PRODUCT_DEVICE := galaxytabfour
PRODUCT_NAME := cos_galaxytabfour
