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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRole请求参数结构体
                */
                class ModifyRoleRequest : public AbstractModel
                {
                public:
                    ModifyRoleRequest();
                    ~ModifyRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。
                     * @return RoleName 角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。
                     * @param RoleName 角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取备注说明，长度必须大等于0且小等于128。
                     * @return Remark 备注说明，长度必须大等于0且小等于128。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注说明，长度必须大等于0且小等于128。
                     * @param Remark 备注说明，长度必须大等于0且小等于128。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取必填字段，集群Id
                     * @return ClusterId 必填字段，集群Id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置必填字段，集群Id
                     * @param ClusterId 必填字段，集群Id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 角色名称，不支持中字以及除了短线和下划线外的特殊字符且长度必须大于0且小等于32。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 备注说明，长度必须大等于0且小等于128。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 必填字段，集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_
