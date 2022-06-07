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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYSECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/SecurityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifySecurityPolicy请求参数结构体
                */
                class ModifySecurityPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityPolicyRequest();
                    ~ModifySecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一级域名
                     * @return ZoneId 一级域名
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置一级域名
                     * @param ZoneId 一级域名
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取二级域名/应用名
                     * @return Entity 二级域名/应用名
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置二级域名/应用名
                     * @param Entity 二级域名/应用名
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取安全配置
                     * @return Config 安全配置
                     */
                    SecurityConfig GetConfig() const;

                    /**
                     * 设置安全配置
                     * @param Config 安全配置
                     */
                    void SetConfig(const SecurityConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 一级域名
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 二级域名/应用名
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 安全配置
                     */
                    SecurityConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
