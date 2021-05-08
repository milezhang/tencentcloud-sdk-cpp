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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATAREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeStructCompareData请求参数结构体
                */
                class DescribeStructCompareDataRequest : public AbstractModel
                {
                public:
                    DescribeStructCompareDataRequest();
                    ~DescribeStructCompareDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主任务号
                     * @return MainTaskId 主任务号
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 设置主任务号
                     * @param MainTaskId 主任务号
                     */
                    void SetMainTaskId(const std::string& _mainTaskId);

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     */
                    bool MainTaskIdHasBeenSet() const;

                    /**
                     * 获取子任务号
                     * @return SubTaskId 子任务号
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 设置子任务号
                     * @param SubTaskId 子任务号
                     */
                    void SetSubTaskId(const std::string& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     */
                    bool SubTaskIdHasBeenSet() const;

                private:

                    /**
                     * 主任务号
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                    /**
                     * 子任务号
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATAREQUEST_H_
