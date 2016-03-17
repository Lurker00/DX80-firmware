/*
**
** Copyright 2006-2014, The Android Open Source Project
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

#define _GNU_SOURCE /* for asprintf */

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <log/logd.h>
#include <log/logprint.h>

#include "log_cdefs.h"

typedef struct FilterInfo_t {
    char *mTag;
    android_LogPriority mPri;
    struct FilterInfo_t *p_next;
} FilterInfo;

struct AndroidLogFormat_t {
    android_LogPriority global_pri;
    FilterInfo *filters;
    AndroidLogPrintFormat format;
    bool colored_output;
    bool usec_time_output;
    bool printable_output;
    bool year_output;
    bool zone_output;
    bool epoch_output;
    bool monotonic_output;
    bool uid_output;
};

/*
 * Note: also accepts 0-9 priorities
 * returns ANDROID_LOG_UNKNOWN if the character is unrecognized
 */
static android_LogPriority filterCharToPri (char c)
{
    return ANDROID_LOG_UNKNOWN;
}

/**
 * returns 1 if this log line should be printed based on its priority
 * and tag, and 0 if it should not
 */
LIBLOG_ABI_PUBLIC int android_log_shouldPrintLine (
        AndroidLogFormat *p_format,
        const char *tag,
        android_LogPriority pri)
{
    return 0;
}

LIBLOG_ABI_PUBLIC AndroidLogFormat *android_log_format_new()
{
    return NULL;
}

LIBLOG_ABI_PUBLIC void android_log_format_free(AndroidLogFormat *p_format)
{
}

LIBLOG_ABI_PUBLIC int android_log_setPrintFormat(
        AndroidLogFormat *p_format,
        AndroidLogPrintFormat format)
{
    return 1;
}

/**
 * Returns FORMAT_OFF on invalid string
 */
LIBLOG_ABI_PUBLIC AndroidLogPrintFormat android_log_formatFromString(
        const char * formatString)
{
    return FORMAT_OFF;
}

/**
 * filterExpression: a single filter expression
 * eg "AT:d"
 *
 * returns 0 on success and -1 on invalid expression
 *
 * Assumes single threaded execution
 */

LIBLOG_ABI_PUBLIC int android_log_addFilterRule(
        AndroidLogFormat *p_format,
        const char *filterExpression)
{
    return -1;
}

/**
 * filterString: a comma/whitespace-separated set of filter expressions
 *
 * eg "AT:d *:i"
 *
 * returns 0 on success and -1 on invalid expression
 *
 * Assumes single threaded execution
 *
 */

LIBLOG_ABI_PUBLIC int android_log_addFilterString(
        AndroidLogFormat *p_format,
        const char *filterString)
{
    return -1;
}

/**
 * Splits a wire-format buffer into an AndroidLogEntry
 * entry allocated by caller. Pointers will point directly into buf
 *
 * Returns 0 on success and -1 on invalid wire format (entry will be
 * in unspecified state)
 */
LIBLOG_ABI_PUBLIC int android_log_processLogBuffer(
        struct logger_entry *buf,
        AndroidLogEntry *entry)
{
    return -1;
}

/**
 * Convert a binary log entry to ASCII form.
 *
 * For convenience we mimic the processLogBuffer API.  There is no
 * pre-defined output length for the binary data, since we're free to format
 * it however we choose, which means we can't really use a fixed-size buffer
 * here.
 */
LIBLOG_ABI_PUBLIC int android_log_processBinaryLogBuffer(
        struct logger_entry *buf,
        AndroidLogEntry *entry,
        const EventTagMap *map,
        char *messageBuf, int messageBufLen)
{
    return -1;
}

/**
 * Formats a log message into a buffer
 *
 * Uses defaultBuffer if it can, otherwise malloc()'s a new buffer
 * If return value != defaultBuffer, caller must call free()
 * Returns NULL on malloc error
 */

LIBLOG_ABI_PUBLIC char *android_log_formatLogLine (
        AndroidLogFormat *p_format,
        char *defaultBuffer,
        size_t defaultBufferSize,
        const AndroidLogEntry *entry,
        size_t *p_outLength)
{
    return 0;
}

/**
 * Either print or do not print log line, based on filter
 *
 * Returns count bytes written
 */

LIBLOG_ABI_PUBLIC int android_log_printLogLine(
        AndroidLogFormat *p_format,
        int fd,
        const AndroidLogEntry *entry)
{
    return 0;
}
