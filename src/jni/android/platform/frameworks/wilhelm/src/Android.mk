LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := sl_entry_stub.c OpenSLES_IID_stub.c sl_iid_stub.c

LOCAL_MODULE := libOpenSLES
LOCAL_MODULE_TAGS := optional
LOCAL_CFLAGS += -x c++ -std=gnu++11 -DLI_API= -DNDEBUG
LOCAL_CFLAGS += -fvisibility=hidden -DSL_API='__attribute__((visibility("default")))'
LOCAL_CPPFLAGS += -fno-exceptions

include $(BUILD_SHARED_LIBRARY)

