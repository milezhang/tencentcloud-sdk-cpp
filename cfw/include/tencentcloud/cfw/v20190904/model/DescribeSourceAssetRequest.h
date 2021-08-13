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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeSourceAsset请求参数结构体
                */
                class DescribeSourceAssetRequest : public AbstractModel
                {
                public:
                    DescribeSourceAssetRequest();
                    ~DescribeSourceAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模糊查询
                     * @return FuzzySearch 模糊查询
                     */
                    std::string GetFuzzySearch() const;

                    /**
                     * 设置模糊查询
                     * @param FuzzySearch 模糊查询
                     */
                    void SetFuzzySearch(const std::string& _fuzzySearch);

                    /**
                     * 判断参数 FuzzySearch 是否已赋值
                     * @return FuzzySearch 是否已赋值
                     */
                    bool FuzzySearchHasBeenSet() const;

                    /**
                     * 获取资产类型 1公网 2内网
                     * @return InsType 资产类型 1公网 2内网
                     */
                    std::string GetInsType() const;

                    /**
                     * 设置资产类型 1公网 2内网
                     * @param InsType 资产类型 1公网 2内网
                     */
                    void SetInsType(const std::string& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取是否未分组 1是
                     * @return ChooseType 是否未分组 1是
                     */
                    std::string GetChooseType() const;

                    /**
                     * 设置是否未分组 1是
                     * @param ChooseType 是否未分组 1是
                     */
                    void SetChooseType(const std::string& _chooseType);

                    /**
                     * 判断参数 ChooseType 是否已赋值
                     * @return ChooseType 是否已赋值
                     */
                    bool ChooseTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Zone 地域
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域
                     * @param Zone 地域
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param Limit 页大小
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 模糊查询
                     */
                    std::string m_fuzzySearch;
                    bool m_fuzzySearchHasBeenSet;

                    /**
                     * 资产类型 1公网 2内网
                     */
                    std::string m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * 是否未分组 1是
                     */
                    std::string m_chooseType;
                    bool m_chooseTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_
