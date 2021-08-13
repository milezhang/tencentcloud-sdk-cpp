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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 双向下发的企业安全组规则
                */
                class SecurityGroupBothWayInfo : public AbstractModel
                {
                public:
                    SecurityGroupBothWayInfo();
                    ~SecurityGroupBothWayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderIndex 执行顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置执行顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrderIndex 执行顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceId 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置访问源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceId 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取访问源类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 访问源类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置访问源类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceType 访问源类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetId 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetId 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取访问目的类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetType 访问目的类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置访问目的类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetType 访问目的类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPort() const;

                    /**
                     * 设置目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取策略, 1：阻断，2：放行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Strategy 策略, 1：阻断，2：放行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置策略, 1：阻断，2：放行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Strategy 策略, 1：阻断，2：放行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStrategy(const uint64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 方向，0：出站，1：入站，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Direction 方向，0：出站，1：入站，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取是否开关开启，0：未开启，1：开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 是否开关开启，0：未开启，1：开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否开关开启，0：未开启，1：开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 是否开关开启，0：未开启，1：开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否是正常规则，0：正常，1：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNew 是否是正常规则，0：正常，1：异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsNew() const;

                    /**
                     * 设置是否是正常规则，0：正常，1：异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsNew 是否是正常规则，0：正常，1：异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsNew(const uint64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取单/双向下发，0:单向下发，1：双向下发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BothWay 单/双向下发，0:单向下发，1：双向下发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBothWay() const;

                    /**
                     * 设置单/双向下发，0:单向下发，1：双向下发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BothWay 单/双向下发，0:单向下发，1：双向下发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBothWay(const uint64_t& _bothWay);

                    /**
                     * 判断参数 BothWay 是否已赋值
                     * @return BothWay 是否已赋值
                     */
                    bool BothWayHasBeenSet() const;

                    /**
                     * 获取私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceName 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取公网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp 公网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicIp 公网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 内网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrivateIp 内网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取掩码地址，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cidr 掩码地址，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置掩码地址，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cidr 掩码地址，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取端口协议类型参数模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTemplateId 端口协议类型参数模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置端口协议类型参数模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceTemplateId 端口协议类型参数模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 执行顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 访问源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 访问源类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 访问目的类型，默认为0，1: VPC, 2: SUBNET, 3: CVM, 4: CLB, 5: ENI, 6: CDB, 100:资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 策略, 1：阻断，2：放行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 是否开关开启，0：未开启，1：开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否是正常规则，0：正常，1：异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 单/双向下发，0:单向下发，1：双向下发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bothWay;
                    bool m_bothWayHasBeenSet;

                    /**
                     * 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 公网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网IP，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 掩码地址，多个以英文逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * 端口协议类型参数模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_
