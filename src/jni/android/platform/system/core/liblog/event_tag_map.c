/*
 * Copyright (C) 2007 The Android Open Source Project
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

#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include <log/event_tag_map.h>
#include <log/log.h>

#include "log_cdefs.h"

LIBLOG_ABI_PUBLIC EventTagMap* android_openEventTagMap(const char* fileName)
{
    return NULL;
}

/*
 * Close the map.
 */
LIBLOG_ABI_PUBLIC void android_closeEventTagMap(EventTagMap* map)
{
}

/*
 * Look up an entry in the map.
 *
 * The entries are sorted by tag number, so we can do a binary search.
 */
LIBLOG_ABI_PUBLIC const char* android_lookupEventTag(const EventTagMap* map,
                                                     int tag)
{
    return NULL;
}
