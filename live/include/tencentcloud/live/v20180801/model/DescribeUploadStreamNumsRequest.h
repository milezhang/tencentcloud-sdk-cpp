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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeUploadStreamNums请求参数结构体
                */
                class DescribeUploadStreamNumsRequest : public AbstractModel
                {
                public:
                    DescribeUploadStreamNumsRequest();
                    ~DescribeUploadStreamNumsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     * @return StartTime 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     * @param StartTime 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，格式为yyyy-mm-dd HH:MM:SS，起始和结束时间跨度不支持超过31天。支持最近31天的数据查询
                     * @return EndTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS，起始和结束时间跨度不支持超过31天。支持最近31天的数据查询
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，格式为yyyy-mm-dd HH:MM:SS，起始和结束时间跨度不支持超过31天。支持最近31天的数据查询
                     * @param EndTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS，起始和结束时间跨度不支持超过31天。支持最近31天的数据查询
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取直播域名，若不填，表示总体数据。
                     * @return Domains 直播域名，若不填，表示总体数据。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置直播域名，若不填，表示总体数据。
                     * @param Domains 直播域名，若不填，表示总体数据。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * @return Granularity 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * @param Granularity 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，格式为yyyy-mm-dd HH:MM:SS。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，格式为yyyy-mm-dd HH:MM:SS，起始和结束时间跨度不支持超过31天。支持最近31天的数据查询
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 直播域名，若不填，表示总体数据。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_
