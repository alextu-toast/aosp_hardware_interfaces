#define LOG_TAG "HelloToastImpl"
#include <log/log.h>
#include "HelloToast.h"

namespace android {
namespace hardware {
namespace hellotoast {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::hellotoast::V1_0::IHelloToast follow.
Return<void> HelloToast::justTest(const hidl_string& name, justTest_cb _hidl_cb) {
    ALOGD("justTest, name = %s", name.c_str());
    // mapping to IHelloToast.hal: justTest(string name) generates (string result, HelloTest value);
    // return the 2 values: string result, HelloTest value
    _hidl_cb(name, HelloTest::V_TEST2);
    return Void();
}

Return<void> HelloToast::justTest1(::android::hardware::hellotoast::V1_0::HelloTest name) {
    ALOGD("justTest1, name = %hhu", name);
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IHelloToast* HIDL_FETCH_IHelloToast(const char* /* name */) {
    //return new HelloToast();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace hellotoast
}  // namespace hardware
}  // namespace android
