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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQNAMESPACEREQUEST_H_

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
                * CreateRocketMQNamespace请求参数结构体
                */
                class CreateRocketMQNamespaceRequest : public AbstractModel
                {
                public:
                    CreateRocketMQNamespaceRequest();
                    ~CreateRocketMQNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return NamespaceId 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param NamespaceId 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取未消费消息的保留时间，以毫秒为单位，60秒-15天
                     * @return Ttl 未消费消息的保留时间，以毫秒为单位，60秒-15天
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置未消费消息的保留时间，以毫秒为单位，60秒-15天
                     * @param Ttl 未消费消息的保留时间，以毫秒为单位，60秒-15天
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取消息持久化后保留的时间，以毫秒为单位
                     * @return RetentionTime 消息持久化后保留的时间，以毫秒为单位
                     */
                    uint64_t GetRetentionTime() const;

                    /**
                     * 设置消息持久化后保留的时间，以毫秒为单位
                     * @param RetentionTime 消息持久化后保留的时间，以毫秒为单位
                     */
                    void SetRetentionTime(const uint64_t& _retentionTime);

                    /**
                     * 判断参数 RetentionTime 是否已赋值
                     * @return RetentionTime 是否已赋值
                     */
                    bool RetentionTimeHasBeenSet() const;

                    /**
                     * 获取说明，最大128个字符
                     * @return Remark 说明，最大128个字符
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，最大128个字符
                     * @param Remark 说明，最大128个字符
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 未消费消息的保留时间，以毫秒为单位，60秒-15天
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 消息持久化后保留的时间，以毫秒为单位
                     */
                    uint64_t m_retentionTime;
                    bool m_retentionTimeHasBeenSet;

                    /**
                     * 说明，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQNAMESPACEREQUEST_H_
