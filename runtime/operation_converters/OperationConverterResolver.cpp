/*
 * Copyright (C) 2022 The Android Open Source Project
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

#define LOG_TAG "OperationConverterResolver"

#include "OperationConverterResolver.h"

#include "OperationsUtils.h"

namespace android {
namespace nn {

#define NN_FORWARD_DECLARE_OPERATION_CONVERTER_REGISTRATION_FUNCTION(opType) \
    const IOperationConverter* registerConverter_##opType();

NN_FOR_EACH_OPERATION(NN_FORWARD_DECLARE_OPERATION_CONVERTER_REGISTRATION_FUNCTION)

#undef NN_FORWARD_DECLARE_OPERATION_CONVERTER_REGISTRATION_FUNCTION

NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(AVERAGE_POOL_2D);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(CONCATENATION);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(DEPTH_TO_SPACE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(DEQUANTIZE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(EMBEDDING_LOOKUP);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(FLOOR);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(FULLY_CONNECTED);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(HASHTABLE_LOOKUP);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(L2_NORMALIZATION);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(L2_POOL_2D);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOCAL_RESPONSE_NORMALIZATION);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LSH_PROJECTION);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LSTM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MAX_POOL_2D);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MUL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RELU);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RELU1);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RELU6);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RESHAPE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RESIZE_BILINEAR);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RNN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SOFTMAX);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SPACE_TO_DEPTH);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SVDF);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(TANH);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(BATCH_TO_SPACE_ND);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(DIV);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MEAN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(PAD);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SPACE_TO_BATCH_ND);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SQUEEZE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(STRIDED_SLICE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SUB);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(TRANSPOSE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ABS);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ARGMAX);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ARGMIN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(AXIS_ALIGNED_BBOX_TRANSFORM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(BIDIRECTIONAL_SEQUENCE_LSTM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(BIDIRECTIONAL_SEQUENCE_RNN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(BOX_WITH_NMS_LIMIT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(CAST);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(CHANNEL_SHUFFLE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(DENSIFY);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(DETECTION_POSTPROCESSING);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(EQUAL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(EXP);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(EXPAND_DIMS);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(GATHER);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(GENERATE_PROPOSALS);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(GREATER);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(GREATER_EQUAL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(GROUPED_CONV_2D);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(HEATMAP_MAX_KEYPOINT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(INSTANCE_NORMALIZATION);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LESS);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LESS_EQUAL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOG);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOGICAL_AND);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOGICAL_NOT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOGICAL_OR);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(LOG_SOFTMAX);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MAXIMUM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MINIMUM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(NEG);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(NOT_EQUAL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(PAD_V2);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(POW);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(PRELU);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(QUANTIZE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(QUANTIZED_16BIT_LSTM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RANDOM_MULTINOMIAL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_ALL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_ANY);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_MAX);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_MIN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_PROD);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REDUCE_SUM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ROI_ALIGN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ROI_POOLING);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RSQRT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SELECT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SIN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SLICE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SPLIT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(SQRT);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(TILE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(TOPK_V2);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(TRANSPOSE_CONV_2D);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(UNIDIRECTIONAL_SEQUENCE_LSTM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(UNIDIRECTIONAL_SEQUENCE_RNN);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RESIZE_NEAREST_NEIGHBOR);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(QUANTIZED_LSTM);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(IF);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(WHILE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(ELU);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(HARD_SWISH);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(FILL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(RANK);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(BATCH_MATMUL);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(PACK);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(MIRROR_PAD);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(REVERSE);
NN_OPERATION_CONVERTER_NOT_IMPLEMENTED(OEM_OPERATION);

OperationConverterResolver::OperationConverterResolver() {
#define NN_REGISTER_OPERATION_CONVERTER_TO_RESOLVER(operationType) \
    registerOperationConverter(registerConverter_##operationType(), OperationType::operationType);
    NN_FOR_EACH_OPERATION(NN_REGISTER_OPERATION_CONVERTER_TO_RESOLVER)
#undef NN_REGISTER_OPERATION_CONVERTER_TO_RESOLVER
}

const IOperationConverter* OperationConverterResolver::findOperationConverter(
        OperationType operationType) const {
    int32_t index = static_cast<int32_t>(operationType);
    if (index >= 0 && index < kNumberOfOperationTypes) {
        return mConverters[index];
    }
    return nullptr;
}

void OperationConverterResolver::registerOperationConverter(
        const IOperationConverter* operationConverter, OperationType operationType) {
    if (operationConverter == nullptr) {
        return;
    }

    int32_t index = static_cast<int32_t>(operationType);
    CHECK(mConverters[index] == nullptr);
    mConverters[index] = operationConverter;
}

}  // namespace nn
}  // namespace android