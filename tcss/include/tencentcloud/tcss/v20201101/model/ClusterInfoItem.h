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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 集群资产返回的结构体
                */
                class ClusterInfoItem : public AbstractModel
                {
                public:
                    ClusterInfoItem();
                    ~ClusterInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param ClusterId 集群id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param ClusterName 集群名字
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param ClusterVersion 集群版本
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群操作系统
                     * @return ClusterOs 集群操作系统
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群操作系统
                     * @param ClusterOs 集群操作系统
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param ClusterType 集群类型
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群节点数
                     * @return ClusterNodeNum 集群节点数
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置集群节点数
                     * @param ClusterNodeNum 集群节点数
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取集群区域
                     * @return Region 集群区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群区域
                     * @param Region 集群区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取监控组件的状态，为Defender_Uninstall、Defender_Normal、Defender_Error、Defender_Installing
                     * @return DefenderStatus 监控组件的状态，为Defender_Uninstall、Defender_Normal、Defender_Error、Defender_Installing
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 设置监控组件的状态，为Defender_Uninstall、Defender_Normal、Defender_Error、Defender_Installing
                     * @param DefenderStatus 监控组件的状态，为Defender_Uninstall、Defender_Normal、Defender_Error、Defender_Installing
                     */
                    void SetDefenderStatus(const std::string& _defenderStatus);

                    /**
                     * 判断参数 DefenderStatus 是否已赋值
                     * @return DefenderStatus 是否已赋值
                     */
                    bool DefenderStatusHasBeenSet() const;

                    /**
                     * 获取集群状态
                     * @return ClusterStatus 集群状态
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态
                     * @param ClusterStatus 集群状态
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * @return ClusterCheckMode 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * @param ClusterCheckMode 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     */
                    void SetClusterCheckMode(const std::string& _clusterCheckMode);

                    /**
                     * 判断参数 ClusterCheckMode 是否已赋值
                     * @return ClusterCheckMode 是否已赋值
                     */
                    bool ClusterCheckModeHasBeenSet() const;

                    /**
                     * 获取是否自动定期检测
                     * @return ClusterAutoCheck 是否自动定期检测
                     */
                    bool GetClusterAutoCheck() const;

                    /**
                     * 设置是否自动定期检测
                     * @param ClusterAutoCheck 是否自动定期检测
                     */
                    void SetClusterAutoCheck(const bool& _clusterAutoCheck);

                    /**
                     * 判断参数 ClusterAutoCheck 是否已赋值
                     * @return ClusterAutoCheck 是否已赋值
                     */
                    bool ClusterAutoCheckHasBeenSet() const;

                    /**
                     * 获取防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * @return DefenderErrorReason 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     */
                    std::string GetDefenderErrorReason() const;

                    /**
                     * 设置防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * @param DefenderErrorReason 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     */
                    void SetDefenderErrorReason(const std::string& _defenderErrorReason);

                    /**
                     * 判断参数 DefenderErrorReason 是否已赋值
                     * @return DefenderErrorReason 是否已赋值
                     */
                    bool DefenderErrorReasonHasBeenSet() const;

                    /**
                     * 获取防御容器没有ready状态的节点数量
                     * @return UnreadyNodeNum 防御容器没有ready状态的节点数量
                     */
                    uint64_t GetUnreadyNodeNum() const;

                    /**
                     * 设置防御容器没有ready状态的节点数量
                     * @param UnreadyNodeNum 防御容器没有ready状态的节点数量
                     */
                    void SetUnreadyNodeNum(const uint64_t& _unreadyNodeNum);

                    /**
                     * 判断参数 UnreadyNodeNum 是否已赋值
                     * @return UnreadyNodeNum 是否已赋值
                     */
                    bool UnreadyNodeNumHasBeenSet() const;

                    /**
                     * 获取严重风险检查项的数量
                     * @return SeriousRiskCount 严重风险检查项的数量
                     */
                    int64_t GetSeriousRiskCount() const;

                    /**
                     * 设置严重风险检查项的数量
                     * @param SeriousRiskCount 严重风险检查项的数量
                     */
                    void SetSeriousRiskCount(const int64_t& _seriousRiskCount);

                    /**
                     * 判断参数 SeriousRiskCount 是否已赋值
                     * @return SeriousRiskCount 是否已赋值
                     */
                    bool SeriousRiskCountHasBeenSet() const;

                    /**
                     * 获取高风险检查项的数量
                     * @return HighRiskCount 高风险检查项的数量
                     */
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置高风险检查项的数量
                     * @param HighRiskCount 高风险检查项的数量
                     */
                    void SetHighRiskCount(const int64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取中风险检查项的数量
                     * @return MiddleRiskCount 中风险检查项的数量
                     */
                    int64_t GetMiddleRiskCount() const;

                    /**
                     * 设置中风险检查项的数量
                     * @param MiddleRiskCount 中风险检查项的数量
                     */
                    void SetMiddleRiskCount(const int64_t& _middleRiskCount);

                    /**
                     * 判断参数 MiddleRiskCount 是否已赋值
                     * @return MiddleRiskCount 是否已赋值
                     */
                    bool MiddleRiskCountHasBeenSet() const;

                    /**
                     * 获取提示风险检查项的数量
                     * @return HintRiskCount 提示风险检查项的数量
                     */
                    int64_t GetHintRiskCount() const;

                    /**
                     * 设置提示风险检查项的数量
                     * @param HintRiskCount 提示风险检查项的数量
                     */
                    void SetHintRiskCount(const int64_t& _hintRiskCount);

                    /**
                     * 判断参数 HintRiskCount 是否已赋值
                     * @return HintRiskCount 是否已赋值
                     */
                    bool HintRiskCountHasBeenSet() const;

                    /**
                     * 获取检查失败原因
                     * @return CheckFailReason 检查失败原因
                     */
                    std::string GetCheckFailReason() const;

                    /**
                     * 设置检查失败原因
                     * @param CheckFailReason 检查失败原因
                     */
                    void SetCheckFailReason(const std::string& _checkFailReason);

                    /**
                     * 判断参数 CheckFailReason 是否已赋值
                     * @return CheckFailReason 是否已赋值
                     */
                    bool CheckFailReasonHasBeenSet() const;

                    /**
                     * 获取检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * @return CheckStatus 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * @param CheckStatus 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间,检查时间
                     * @return TaskCreateTime 任务创建时间,检查时间
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置任务创建时间,检查时间
                     * @param TaskCreateTime 任务创建时间,检查时间
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群操作系统
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群节点数
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * 集群区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 监控组件的状态，为Defender_Uninstall、Defender_Normal、Defender_Error、Defender_Installing
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * 是否自动定期检测
                     */
                    bool m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                    /**
                     * 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     */
                    std::string m_defenderErrorReason;
                    bool m_defenderErrorReasonHasBeenSet;

                    /**
                     * 防御容器没有ready状态的节点数量
                     */
                    uint64_t m_unreadyNodeNum;
                    bool m_unreadyNodeNumHasBeenSet;

                    /**
                     * 严重风险检查项的数量
                     */
                    int64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * 高风险检查项的数量
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 中风险检查项的数量
                     */
                    int64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * 提示风险检查项的数量
                     */
                    int64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * 检查失败原因
                     */
                    std::string m_checkFailReason;
                    bool m_checkFailReasonHasBeenSet;

                    /**
                     * 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 任务创建时间,检查时间
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
