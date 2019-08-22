// Generated from floor.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::floor {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::floor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::floor {

TEST_F(GeneratedTest, floor) {
    Execute(device, ::generated_tests::floor::get_test_model());
}

TEST_F(DynamicOutputShapeTest, floor) {
    Execute(device, ::generated_tests::floor::get_test_model(), true);
}

TEST_F(ValidationTest, floor) {
    const Model model = createModel(::generated_tests::floor::get_test_model());
    const Request request = createRequest(::generated_tests::floor::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::floor


namespace generated_tests::floor {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::floor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::floor {

TEST_F(GeneratedTest, floor_all_inputs_as_internal) {
    Execute(device, ::generated_tests::floor::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, floor_all_inputs_as_internal) {
    Execute(device, ::generated_tests::floor::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, floor_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::floor::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::floor::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::floor
