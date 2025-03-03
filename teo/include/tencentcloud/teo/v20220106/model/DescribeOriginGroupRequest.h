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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeOriginGroup请求参数结构体
                */
                class DescribeOriginGroupRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupRequest();
                    ~DescribeOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数Offset
                     * @return Offset 分页参数Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数Offset
                     * @param Offset 分页参数Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数Limit
                     * @return Limit 分页参数Limit
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数Limit
                     * @param Limit 分页参数Limit
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     */
                    std::vector<OriginFilter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param Filters 过滤参数
                     */
                    void SetFilters(const std::vector<OriginFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取站点ID
不填写获取所有站点源站组
                     * @return ZoneId 站点ID
不填写获取所有站点源站组
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
不填写获取所有站点源站组
                     * @param ZoneId 站点ID
不填写获取所有站点源站组
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 分页参数Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<OriginFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 站点ID
不填写获取所有站点源站组
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
