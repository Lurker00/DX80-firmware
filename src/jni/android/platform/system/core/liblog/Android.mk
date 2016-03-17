#
# Copyright (C) 2008-2014 The Android Open Source Project
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
#
LOCAL_PATH := $(my-dir)
include $(CLEAR_VARS)

liblog_cflags := -DLIBLOG_LOG_TAG=1005

liblog_sources := logd_write.c log_event_list.c log_event_write.c
liblog_target_sources := $(liblog_sources) event_tag_map.c
liblog_target_sources += log_is_loggable.c logprint.c log_read.c

include $(CLEAR_VARS)
LOCAL_MODULE := liblog
LOCAL_SRC_FILES := $(liblog_target_sources)
LOCAL_CFLAGS := -Werror -fvisibility=hidden -fno-stack-protector $(liblog_cflags) -I$(LOCAL_PATH)/../include
LOCAL_CFLAGS += -fno-exceptions
LOCAL_CPPFLAGS += -fno-exceptions

# TODO: This is to work around b/24465209. Remove after root cause is fixed
LOCAL_LDFLAGS_arm := -Wl,--hash-style=both

LOCAL_SANITIZE := never
LOCAL_CXX_STL := none

include $(BUILD_SHARED_LIBRARY)
