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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/RumAreaInfo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTawAreas返回参数结构体
                */
                class DescribeTawAreasResponse : public AbstractModel
                {
                public:
                    DescribeTawAreasResponse();
                    ~DescribeTawAreasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取片区总数
                     * @return TotalCount 片区总数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取片区列表
                     * @return AreaSet 片区列表
                     */
                    std::vector<RumAreaInfo> GetAreaSet() const;

                    /**
                     * 判断参数 AreaSet 是否已赋值
                     * @return AreaSet 是否已赋值
                     */
                    bool AreaSetHasBeenSet() const;

                private:

                    /**
                     * 片区总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 片区列表
                     */
                    std::vector<RumAreaInfo> m_areaSet;
                    bool m_areaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASRESPONSE_H_
