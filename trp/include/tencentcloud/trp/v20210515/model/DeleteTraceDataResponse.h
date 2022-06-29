/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DELETETRACEDATARESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DELETETRACEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DeleteTraceData返回参数结构体
                */
                class DeleteTraceDataResponse : public AbstractModel
                {
                public:
                    DeleteTraceDataResponse();
                    ~DeleteTraceDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取溯源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceId 溯源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTraceId() const;

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * 溯源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DELETETRACEDATARESPONSE_H_
