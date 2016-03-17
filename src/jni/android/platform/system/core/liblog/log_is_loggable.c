/*
** Copyright 2014, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include <ctype.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

#include <android/log.h>

#include "log_cdefs.h"

LIBLOG_ABI_PUBLIC int __android_log_is_loggable(int prio, const char *tag,
                                                int default_prio)
{
    return 0;
}

/*
 * Timestamp state generally remains constant, but can change at any time
 * to handle developer requirements.
 */
LIBLOG_ABI_PUBLIC clockid_t android_log_clockid()
{
    return CLOCK_MONOTONIC;
}

LIBLOG_ABI_PUBLIC int __android_log_security()
{
    return 0;
}
