/*
** Copyright 2013-2014, The Android Open Source Project
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

#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <poll.h>
#include <signal.h>
#include <stdbool.h>
#include <stddef.h>
#define NOMINMAX /* for windows to suppress definition of min in stdlib.h */
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <log/log.h>
#include <log/logger.h>

#include "log_cdefs.h"

/* branchless on many architectures. */
#define min(x,y) ((y) ^ (((x) ^ (y)) & -((x) < (y))))

LIBLOG_WEAK int socket_local_client(const char *name, int namespaceId, int type)
{
    errno = ENOSYS;
    return -ENOSYS;
}

/* In the future, we would like to make this list extensible */
static const char *LOG_NAME[LOG_ID_MAX] =
{
    [LOG_ID_MAIN]     = "main",
    [LOG_ID_RADIO]    = "radio",
    [LOG_ID_EVENTS]   = "events",
    [LOG_ID_SYSTEM]   = "system",
    [LOG_ID_CRASH]    = "crash",
    [LOG_ID_SECURITY] = "security",
    [LOG_ID_KERNEL]   = "kernel",
};

LIBLOG_ABI_PUBLIC const char *android_log_id_to_name(log_id_t log_id)
{
    if (log_id >= LOG_ID_MAX) {
        log_id = LOG_ID_MAIN;
    }
    return LOG_NAME[log_id];
}

LIBLOG_ABI_PUBLIC log_id_t android_name_to_log_id(const char *logName)
{
    return -1;   /* should never happen */
}

struct logger_list {
    int mode;
    unsigned int tail;
    log_time start;
    pid_t pid;
    int sock;
};

struct logger {
    struct logger_list *top;
    log_id_t id;
};

/* method for getting the associated sublog id */
LIBLOG_ABI_PUBLIC log_id_t android_logger_get_id(struct logger *logger)
{
    return logger->id;
}

LIBLOG_ABI_PUBLIC int android_logger_clear(struct logger *logger)
{
    return -1;
}

/* returns the total size of the log's ring buffer */
LIBLOG_ABI_PUBLIC long android_logger_get_log_size(struct logger *logger)
{
    return -1;
}

LIBLOG_ABI_PUBLIC int android_logger_set_log_size(struct logger *logger,
                                                  unsigned long size)
{
    return 0;
}

/*
 * returns the readable size of the log's ring buffer (that is, amount of the
 * log consumed)
 */
LIBLOG_ABI_PUBLIC long android_logger_get_log_readable_size(
        struct logger *logger)
{
    return -1;
}

/*
 * returns the logger version
 */
LIBLOG_ABI_PUBLIC int android_logger_get_log_version(
        struct logger *logger __unused)
{
    return 4;
}

/*
 * returns statistics
 */
LIBLOG_ABI_PUBLIC ssize_t android_logger_get_statistics(
        struct logger_list *logger_list,
        char *buf, size_t len)
{
    return 0;
}

LIBLOG_ABI_PUBLIC ssize_t android_logger_get_prune_list(
        struct logger_list *logger_list __unused,
        char *buf, size_t len)
{
    return 0;
}

LIBLOG_ABI_PUBLIC int android_logger_set_prune_list(
        struct logger_list *logger_list __unused,
        char *buf, size_t len)
{
    return 0;
}

LIBLOG_ABI_PUBLIC struct logger_list *android_logger_list_alloc(
        int mode,
        unsigned int tail,
        pid_t pid)
{
    return NULL;
}

LIBLOG_ABI_PUBLIC struct logger_list *android_logger_list_alloc_time(
        int mode,
        log_time start,
        pid_t pid)
{
    return NULL;
}

/* Open the named log and add it to the logger list */
LIBLOG_ABI_PUBLIC struct logger *android_logger_open(
        struct logger_list *logger_list,
        log_id_t id)
{
    return NULL;
}

/* Open the single named log and make it part of a new logger list */
LIBLOG_ABI_PUBLIC struct logger_list *android_logger_list_open(
        log_id_t id,
        int mode,
        unsigned int tail,
        pid_t pid)
{
    return NULL;
}

/* Read from the selected logs */
LIBLOG_ABI_PUBLIC int android_logger_list_read(
        struct logger_list *logger_list,
        struct log_msg *log_msg)
{
    return -1;
}

/* Close all the logs */
LIBLOG_ABI_PUBLIC void android_logger_list_free(
        struct logger_list *logger_list)
{
}
