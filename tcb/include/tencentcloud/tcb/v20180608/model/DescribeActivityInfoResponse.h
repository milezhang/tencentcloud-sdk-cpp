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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFORESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ActivityInfoItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeActivityInfo返回参数结构体
                */
                class DescribeActivityInfoResponse : public AbstractModel
                {
                public:
                    DescribeActivityInfoResponse();
                    ~DescribeActivityInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取活动详情
                     * @return ActivityInfoList 活动详情
                     */
                    std::vector<ActivityInfoItem> GetActivityInfoList() const;

                    /**
                     * 判断参数 ActivityInfoList 是否已赋值
                     * @return ActivityInfoList 是否已赋值
                     */
                    bool ActivityInfoListHasBeenSet() const;

                private:

                    /**
                     * 活动详情
                     */
                    std::vector<ActivityInfoItem> m_activityInfoList;
                    bool m_activityInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFORESPONSE_H_
