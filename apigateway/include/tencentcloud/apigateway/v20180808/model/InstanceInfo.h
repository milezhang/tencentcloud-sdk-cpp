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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 独享实例信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独享实例唯一id
                     * @return InstanceId 独享实例唯一id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享实例唯一id
                     * @param InstanceId 独享实例唯一id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取独享实例name
                     * @return InstanceName 独享实例name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置独享实例name
                     * @param InstanceName 独享实例name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取独享实例描述
                     * @return InstanceDescription 独享实例描述
                     */
                    std::string GetInstanceDescription() const;

                    /**
                     * 设置独享实例描述
                     * @param InstanceDescription 独享实例描述
                     */
                    void SetInstanceDescription(const std::string& _instanceDescription);

                    /**
                     * 判断参数 InstanceDescription 是否已赋值
                     * @return InstanceDescription 是否已赋值
                     */
                    bool InstanceDescriptionHasBeenSet() const;

                    /**
                     * 获取独享实例计费类型
                     * @return InstanceChargeType 独享实例计费类型
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置独享实例计费类型
                     * @param InstanceChargeType 独享实例计费类型
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取独享实例类型
                     * @return InstanceType 独享实例类型
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置独享实例类型
                     * @param InstanceType 独享实例类型
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取独享实例状态
                     * @return InstanceState 独享实例状态
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置独享实例状态
                     * @param InstanceState 独享实例状态
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取独享实例创建时间
                     * @return CreatedTime 独享实例创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置独享实例创建时间
                     * @param CreatedTime 独享实例创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealName 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DealName 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取资源ID同唯一id
                     * @return ResourceId 资源ID同唯一id
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID同唯一id
                     * @param ResourceId 资源ID同唯一id
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 独享实例唯一id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 独享实例name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 独享实例描述
                     */
                    std::string m_instanceDescription;
                    bool m_instanceDescriptionHasBeenSet;

                    /**
                     * 独享实例计费类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 独享实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 独享实例状态
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 独享实例创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 资源ID同唯一id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEINFO_H_
