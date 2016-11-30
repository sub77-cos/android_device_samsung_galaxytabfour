/*
   Copyright (c) 2016, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <stdio.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm8226.h"

void init_target_properties()
{
    std::string platform = property_get("ro.board.platform");
    if (platform != ANDROID_TARGET)
        return;

    std::string bootloader = property_get("ro.bootloader");

    if (bootloader.find("T330XX") == 0) {
        /* milletwifi */
        property_set("ro.build.fingerprint", "samsung/milletwifixx/milletwifi:5.0.2/LRX22G/T330XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "milletwifixx-user 5.0.2 LRX22G T330XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T330");
        property_set("ro.product.name", "milletwifixx");
        property_set("ro.product.device", "milletwifi");
        property_set("ro.radio.noril", "1");
        property_set("ro.carrier", "wifi-only");
    } else if (bootloader.find("T330NU") == 0) {
        /* milletwifiue */
        property_set("ro.build.fingerprint", "samsung/milletwifixx/milletwifi:5.0.2/LRX22G/T330XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "milletwifixx-user 5.0.2 LRX22G T330XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T330NU");
        property_set("ro.product.name", "milletwifiue");
        property_set("ro.product.device", "milletwifi");
        property_set("ro.radio.noril", "1");
        property_set("ro.carrier", "wifi-only");
    } else if (bootloader.find("T331XX") == 0) {
        /* millet3g */
        property_set("ro.build.fingerprint", "samsung/millet3gxx/millet3g:5.0.2/LRX22G/T331XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "millet3gxx-user 5.0.2 LRX22G T331XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T331XX");
        property_set("ro.product.name", "millet3gxx");
        property_set("ro.product.device", "millet3g");
        property_set("ro.telephony.default_network", "9");
    } else if (bootloader.find("T335XX") == 0) {
        /* milletlte */
        property_set("ro.build.fingerprint", "samsung/milletltexx/milletlte:5.0.2/LRX22G/T335XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "milletltexx-user 5.0.2 LRX22G T335XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T335");
        property_set("ro.product.name", "milletltexx");
        property_set("ro.product.device", "milletlte");
    } else if (bootloader.find("T530") == 0) {
        /* matissewifi */
        property_set("ro.build.fingerprint", "samsung/matissewifixx/matissewifi:5.0.2/LRX22G/T530XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "matissewifixx-user 5.0.2 LRX22G T530XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T530XX");
        property_set("ro.product.name", "matissewifixx");
        property_set("ro.product.device", "matissewifi");
        property_set("ro.radio.noril", "1");
        property_set("ro.carrier", "wifi-only");
    } else if (bootloader.find("T530NU") == 0) {
        /* matissewifiue */
        property_set("ro.build.fingerprint", "samsung/matissewifixx/matissewifi:5.0.2/LRX22G/T530XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "matissewifixx-user 5.0.2 LRX22G T530XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T530NU");
        property_set("ro.product.name", "matissewifiue");
        property_set("ro.product.device", "matissewifi");
        property_set("ro.radio.noril", "1");
        property_set("ro.carrier", "wifi-only");
    } else if (bootloader.find("T531") == 0) {
        /* matisse3g */
        property_set("ro.build.fingerprint", "samsung/matisse3gxx/matisse3g:5.0.2/LRX22G/T531XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "matisse3gxx-user 5.0.2 LRX22G T531XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T531XX");
        property_set("ro.product.name", "matisse3gxx");
        property_set("ro.product.device", "matisse3g");
    } else if (bootloader.find("T535") == 0) {
        /* matisselte */
        property_set("ro.build.fingerprint", "samsung/matisseltexx/matisselte:5.0.2/LRX22G/T535XXU1BOD8:user/release-keys");
        property_set("ro.build.description", "matisseltexx-user 5.0.2 LRX22G T535XXU1BOD8 release-keys");
        property_set("ro.product.model", "SM-T535");
        property_set("ro.product.name", "matisseltexx");
        property_set("ro.product.device", "matisselte");
    } else {
        /* all other variants become international */
        property_set("ro.product.model", "SM-T5XX");
        property_set("ro.product.name", "matisse");
        property_set("ro.product.device", "matisse");
    }

    std::string device = property_get("ro.product.device");
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader.c_str(), device.c_str());
}
