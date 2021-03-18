// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include "test/unit_test/layer_test/test_unary_layer.h"

namespace TNN_NS {

class TanLayerTest : public UnaryLayerTest {
public:
    TanLayerTest() : UnaryLayerTest(LAYER_TAN) {}
};

INSTANTIATE_TEST_SUITE_P(LayerTest, TanLayerTest,
                         ::testing::Combine(BASIC_BATCH_CHANNEL_SIZE,
                                            testing::Values(2, 3, 4, 5, 6),
                                            testing::Values(DATA_TYPE_FLOAT)));

TEST_P(TanLayerTest, UnaryLayerTest) {
    RunUnaryTest("Tan");
}

}  // namespace TNN_NS
