/*
 * Copyright (C) 2007-2014 The Android Open Source Project
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
#if (FAKE_LOG_DEVICE == 0)
#include <endian.h>
#endif
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#include <log/event_tag_map.h>
#include <log/logd.h>
#include <log/logger.h>
#include <log/log_read.h>

#include "log_cdefs.h"


char __aeabi_unwind_cpp_pr0[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code
char __aeabi_unwind_cpp_pr1[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code
char __aeabi_unwind_cpp_pr2[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code

LIBLOG_ABI_PUBLIC int __android_log_dev_available()
{
    return 0;
}

static int __write_to_log_daemon(log_id_t log_id, struct iovec *vec, size_t nr)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_write(int prio, const char *tag,
                                          const char *msg)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_buf_write(int bufID, int prio,
                                              const char *tag, const char *msg)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_vprint(int prio, const char *tag,
                                           const char *fmt, va_list ap)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_print(int prio, const char *tag,
                                          const char *fmt, ...)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_buf_print(int bufID, int prio,
                                              const char *tag,
                                              const char *fmt, ...)
{
    return 0;
}

LIBLOG_ABI_PUBLIC void __android_log_assert(
        const char *cond,
        const char *tag,
        const char *fmt, ...)
{
    abort(); /* abort so we have a chance to debug the situation */
    /* NOTREACHED */
}

LIBLOG_ABI_PUBLIC int __android_log_bwrite(int32_t tag,
                                           const void *payload, size_t len)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int __android_log_security_bwrite(int32_t tag,
                                                    const void *payload,
                                                    size_t len)
{
    return 0;
}

/*
 * Like __android_log_bwrite, but takes the type as well.  Doesn't work
 * for the general case where we're generating lists of stuff, but very
 * handy if we just want to dump an integer into the log.
 */
LIBLOG_ABI_PUBLIC int __android_log_btwrite(int32_t tag, char type,
                                            const void *payload, size_t len)
{
    return 0;
}

/*
 * Like __android_log_bwrite, but used for writing strings to the
 * event log.
 */
LIBLOG_ABI_PUBLIC int __android_log_bswrite(int32_t tag, const char *payload)
{
    return 0;
}

/*
 * Like __android_log_security_bwrite, but used for writing strings to the
 * security log.
 */
LIBLOG_ABI_PUBLIC int __android_log_security_bswrite(int32_t tag,
                                                     const char *payload)
{
    return 0;
}
