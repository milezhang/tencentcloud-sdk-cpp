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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCERETURNABLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCERETURNABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 实例可退还信息。
                */
                class InstanceReturnable : public AbstractModel
                {
                public:
                    InstanceReturnable();
                    ~InstanceReturnable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param InstanceId 实例 ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例是否可退还。
                     * @return IsReturnable 实例是否可退还。
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置实例是否可退还。
                     * @param IsReturnable 实例是否可退还。
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取实例退还失败错误码。
                     * @return ReturnFailCode 实例退还失败错误码。
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置实例退还失败错误码。
                     * @param ReturnFailCode 实例退还失败错误码。
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取实例退还失败错误信息。
                     * @return ReturnFailMessage 实例退还失败错误信息。
                     */
                    std::string GetReturnFailMessage() const;

                    /**
                     * 设置实例退还失败错误信息。
                     * @param ReturnFailMessage 实例退还失败错误信息。
                     */
                    void SetReturnFailMessage(const std::string& _returnFailMessage);

                    /**
                     * 判断参数 ReturnFailMessage 是否已赋值
                     * @return ReturnFailMessage 是否已赋值
                     */
                    bool ReturnFailMessageHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例是否可退还。
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * 实例退还失败错误码。
                     */
                    int64_t m_returnFailCode;
                    bool m_returnFailCodeHasBeenSet;

                    /**
                     * 实例退还失败错误信息。
                     */
                    std::string m_returnFailMessage;
                    bool m_returnFailMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCERETURNABLE_H_
