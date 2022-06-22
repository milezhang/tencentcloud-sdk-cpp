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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINPACKAGENEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINPACKAGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * clb-waf 域名扩展套餐
                */
                class DomainPackageNew : public AbstractModel
                {
                public:
                    DomainPackageNew();
                    ~DomainPackageNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceIds 资源ID
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置资源ID
                     * @param ResourceIds 资源ID
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ValidTime 过期时间
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置过期时间
                     * @param ValidTime 过期时间
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取是否自动续费，1：自动续费，0：不自动续费
                     * @return RenewFlag 是否自动续费，1：自动续费，0：不自动续费
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置是否自动续费，1：自动续费，0：不自动续费
                     * @param RenewFlag 是否自动续费，1：自动续费，0：不自动续费
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取套餐购买个数
                     * @return Count 套餐购买个数
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置套餐购买个数
                     * @param Count 套餐购买个数
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取套餐购买地域，clb-waf暂时没有用到
                     * @return Region 套餐购买地域，clb-waf暂时没有用到
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置套餐购买地域，clb-waf暂时没有用到
                     * @param Region 套餐购买地域，clb-waf暂时没有用到
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 是否自动续费，1：自动续费，0：不自动续费
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 套餐购买个数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 套餐购买地域，clb-waf暂时没有用到
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINPACKAGENEW_H_
