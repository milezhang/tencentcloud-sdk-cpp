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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/KeyValuePair.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeTasks请求参数结构体
                */
                class DescribeProbeTasksRequest : public AbstractModel
                {
                public:
                    DescribeProbeTasksRequest();
                    ~DescribeProbeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID  列表
                     * @return TaskIDs 任务 ID  列表
                     */
                    std::vector<std::string> GetTaskIDs() const;

                    /**
                     * 设置任务 ID  列表
                     * @param TaskIDs 任务 ID  列表
                     */
                    void SetTaskIDs(const std::vector<std::string>& _taskIDs);

                    /**
                     * 判断参数 TaskIDs 是否已赋值
                     * @return TaskIDs 是否已赋值
                     */
                    bool TaskIDsHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return TaskName 任务名
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param TaskName 任务名
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取拨测目标
                     * @return TargetAddress 拨测目标
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置拨测目标
                     * @param TargetAddress 拨测目标
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取任务状态列表
                     * @return TaskStatus 任务状态列表
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置任务状态列表
                     * @param TaskStatus 任务状态列表
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param Offset 偏移量，默认为0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100
                     * @return Limit 返回数量，默认为20，最大值为100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100
                     * @param Limit 返回数量，默认为20，最大值为100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @return PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @param PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @return OrderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    int64_t GetOrderState() const;

                    /**
                     * 设置订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @param OrderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    void SetOrderState(const int64_t& _orderState);

                    /**
                     * 判断参数 OrderState 是否已赋值
                     * @return OrderState 是否已赋值
                     */
                    bool OrderStateHasBeenSet() const;

                    /**
                     * 获取拨测类型
                     * @return TaskType 拨测类型
                     */
                    std::vector<int64_t> GetTaskType() const;

                    /**
                     * 设置拨测类型
                     * @param TaskType 拨测类型
                     */
                    void SetTaskType(const std::vector<int64_t>& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return TaskCategory 节点类型
                     */
                    std::vector<int64_t> GetTaskCategory() const;

                    /**
                     * 设置节点类型
                     * @param TaskCategory 节点类型
                     */
                    void SetTaskCategory(const std::vector<int64_t>& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取排序的列
                     * @return OrderBy 排序的列
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序的列
                     * @param OrderBy 排序的列
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取是否正序
                     * @return Ascend 是否正序
                     */
                    bool GetAscend() const;

                    /**
                     * 设置是否正序
                     * @param Ascend 是否正序
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取资源标签值
                     * @return TagFilters 资源标签值
                     */
                    std::vector<KeyValuePair> GetTagFilters() const;

                    /**
                     * 设置资源标签值
                     * @param TagFilters 资源标签值
                     */
                    void SetTagFilters(const std::vector<KeyValuePair>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 任务 ID  列表
                     */
                    std::vector<std::string> m_taskIDs;
                    bool m_taskIDsHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 拨测目标
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * 任务状态列表
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    int64_t m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * 拨测类型
                     */
                    std::vector<int64_t> m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::vector<int64_t> m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * 排序的列
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否正序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * 资源标签值
                     */
                    std::vector<KeyValuePair> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_
