/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "android.hardware.power@1.0-service"

#include <android/hardware/power/1.0/IPower.h>
#include <hidl/LegacySupport.h>
#ifdef ARCH_ARM_32
#include <hwbinder/ProcessState.h>
#endif

using android::hardware::power::V1_0::IPower;
using android::hardware::defaultPassthroughServiceImplementation;

int main() {
    #ifdef ARCH_ARM_32
        android::hardware::ProcessState::initWithMmapSize((size_t)16384);
    #endif
    return defaultPassthroughServiceImplementation<IPower>();
}
