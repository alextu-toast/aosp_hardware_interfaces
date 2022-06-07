// FIXME: your file license if you have one

#pragma once

#include <android/hardware/hellotoast/1.0/IHelloToast.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace hellotoast {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct HelloToast : public IHelloToast {
    // Methods from ::android::hardware::hellotoast::V1_0::IHelloToast follow.
    Return<void> justTest(const hidl_string& name, justTest_cb _hidl_cb) override;
    Return<void> justTest1(::android::hardware::hellotoast::V1_0::HelloTest name) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IHelloToast* HIDL_FETCH_IHelloToast(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace hellotoast
}  // namespace hardware
}  // namespace android
