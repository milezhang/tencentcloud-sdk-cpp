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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBackupPlan请求参数结构体
                */
                class ModifyBackupPlanRequest : public AbstractModel
                {
                public:
                    ModifyBackupPlanRequest();
                    ~ModifyBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param DBInstanceId 实例ID
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例最早开始备份时间
                     * @return MinBackupStartTime 实例最早开始备份时间
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置实例最早开始备份时间
                     * @param MinBackupStartTime 实例最早开始备份时间
                     */
                    void SetMinBackupStartTime(const std::string& _minBackupStartTime);

                    /**
                     * 判断参数 MinBackupStartTime 是否已赋值
                     * @return MinBackupStartTime 是否已赋值
                     */
                    bool MinBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取实例最晚开始备份时间
                     * @return MaxBackupStartTime 实例最晚开始备份时间
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置实例最晚开始备份时间
                     * @param MaxBackupStartTime 实例最晚开始备份时间
                     */
                    void SetMaxBackupStartTime(const std::string& _maxBackupStartTime);

                    /**
                     * 判断参数 MaxBackupStartTime 是否已赋值
                     * @return MaxBackupStartTime 是否已赋值
                     */
                    bool MaxBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取实例备份保留时长，取值范围为3-7，单位是天
                     * @return BaseBackupRetentionPeriod 实例备份保留时长，取值范围为3-7，单位是天
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置实例备份保留时长，取值范围为3-7，单位是天
                     * @param BaseBackupRetentionPeriod 实例备份保留时长，取值范围为3-7，单位是天
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取实例备份周期，按照星期维度，格式为小写星期英文单词
                     * @return BackupPeriod 实例备份周期，按照星期维度，格式为小写星期英文单词
                     */
                    std::vector<std::string> GetBackupPeriod() const;

                    /**
                     * 设置实例备份周期，按照星期维度，格式为小写星期英文单词
                     * @param BackupPeriod 实例备份周期，按照星期维度，格式为小写星期英文单词
                     */
                    void SetBackupPeriod(const std::vector<std::string>& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     */
                    bool BackupPeriodHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例最早开始备份时间
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * 实例最晚开始备份时间
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * 实例备份保留时长，取值范围为3-7，单位是天
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * 实例备份周期，按照星期维度，格式为小写星期英文单词
                     */
                    std::vector<std::string> m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
