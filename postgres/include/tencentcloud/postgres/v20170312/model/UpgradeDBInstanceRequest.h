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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_

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
                * UpgradeDBInstance请求参数结构体
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取升级后的实例内存大小，单位GB
                     * @return Memory 升级后的实例内存大小，单位GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置升级后的实例内存大小，单位GB
                     * @param Memory 升级后的实例内存大小，单位GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取升级后的实例磁盘大小，单位GB
                     * @return Storage 升级后的实例磁盘大小，单位GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置升级后的实例磁盘大小，单位GB
                     * @param Storage 升级后的实例磁盘大小，单位GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取实例ID，形如postgres-lnp6j617
                     * @return DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-lnp6j617
                     * @param DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券,1是,0否，默认不使用
                     * @return AutoVoucher 是否自动使用代金券,1是,0否，默认不使用
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券,1是,0否，默认不使用
                     * @param AutoVoucher 是否自动使用代金券,1是,0否，默认不使用
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券
                     * @param VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取活动ID
                     * @return ActivityId 活动ID
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动ID
                     * @param ActivityId 活动ID
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取指定实例配置完成变更后的切换时间，默认为 立即切换，入参为 0 ：立即切换 。1：指定时间切换。
                     * @return SwitchTag 指定实例配置完成变更后的切换时间，默认为 立即切换，入参为 0 ：立即切换 。1：指定时间切换。
                     */
                    int64_t GetSwitchTag() const;

                    /**
                     * 设置指定实例配置完成变更后的切换时间，默认为 立即切换，入参为 0 ：立即切换 。1：指定时间切换。
                     * @param SwitchTag 指定实例配置完成变更后的切换时间，默认为 立即切换，入参为 0 ：立即切换 。1：指定时间切换。
                     */
                    void SetSwitchTag(const int64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取切换开始时间
                     * @return SwitchStartTime 切换开始时间
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置切换开始时间
                     * @param SwitchStartTime 切换开始时间
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取切换截止时间
                     * @return SwitchEndTime 切换截止时间
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置切换截止时间
                     * @param SwitchEndTime 切换截止时间
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * 升级后的实例内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 升级后的实例磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例ID，形如postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 是否自动使用代金券,1是,0否，默认不使用
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 活动ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 指定实例配置完成变更后的切换时间，默认为 立即切换，入参为 0 ：立即切换 。1：指定时间切换。
                     */
                    int64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * 切换开始时间
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * 切换截止时间
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEREQUEST_H_
