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

#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <log/log.h>
#include <log/logger.h>

#include "log_cdefs.h"

LIBLOG_ABI_PUBLIC android_log_context create_android_logger(uint32_t tag) {
    return NULL;
}

LIBLOG_ABI_PUBLIC android_log_context create_android_log_parser(
        const char *msg,
        size_t len) {
    return NULL;
}

LIBLOG_ABI_PUBLIC int android_log_destroy(android_log_context *ctx) {
    return -EBADF;
}

LIBLOG_ABI_PUBLIC int android_log_write_list_begin(android_log_context ctx) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_int32(android_log_context ctx,
                                              int32_t value) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_int64(android_log_context ctx,
                                              int64_t value) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_string8_len(android_log_context ctx,
                                                    const char *value,
                                                    size_t maxlen) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_string8(android_log_context ctx,
                                                const char *value) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_float32(android_log_context ctx,
                                                float value) {
    return -EIO;
}

LIBLOG_ABI_PUBLIC int android_log_write_list_end(android_log_context ctx) {
    return -EIO;
}

/*
 * Logs the list of elements to the event log.
 */
LIBLOG_ABI_PUBLIC int android_log_write_list(android_log_context ctx,
                                             log_id_t id) {
    return -EINVAL;
}

/*
 * Gets the next element. Parsing errors result in an EVENT_TYPE_UNKNOWN type.
 * If there is nothing to process, the complete field is set to non-zero. If
 * an EVENT_TYPE_UNKNOWN type is returned once, and the caller does not check
 * this and continues to call this function, the behavior is undefined
 * (although it won't crash).
 */
static android_log_list_element android_log_read_next_internal(
        android_log_context ctx, int peek) {
    android_log_list_element elem;
    memset(&elem, 0, sizeof(elem));
    elem.type = EVENT_TYPE_UNKNOWN;
    elem.complete = true;
    return elem;
}

LIBLOG_ABI_PUBLIC android_log_list_element android_log_read_next(
        android_log_context ctx) {
    return android_log_read_next_internal(ctx, 0);
}

LIBLOG_ABI_PUBLIC android_log_list_element android_log_peek_next(
        android_log_context ctx) {
    return android_log_read_next_internal(ctx, 1);
}
