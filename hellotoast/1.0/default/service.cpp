#define LOG_TAG "android.hardware.hellotoast@1.0-service"
#include <log/log.h>

#include <android/hardware/hellotoast/1.0/IHelloToast.h>

#include <hidl/LegacySupport.h>
#include "HelloToast.h"

// Generated HIDL files
using android::hardware::hellotoast::V1_0::IHelloToast;
using android::hardware::hellotoast::V1_0::implementation::HelloToast;
using android::sp;

#if 0
using android::hardware::defaultPassthroughServiceImplementation;
#endif

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

int main() {
#if 0
    return defaultPassthroughServiceImplementation<IHelloToast>();
#else
    // This function must be called before you join to ensure the proper
    // number of threads are created. The threadpool will never exceed
    // size one because of this call.
    ALOGD("toast: start service: hellotoast");
    sp<IHelloToast> service = new HelloToast();
    configureRpcThreadpool(1, true /*callerWillJoin*/);
    if(android::OK !=  service->registerAsService())
        return 1; // or handle error

    // Adds this thread to the threadpool, resulting in one total
    // thread in the threadpool. We could also do other things, but
    // would have to specify 'false' to willJoin in configureRpcThreadpool
    joinRpcThreadpool();
    return 1; // joinRpcThreadpool should never return
#endif
}
