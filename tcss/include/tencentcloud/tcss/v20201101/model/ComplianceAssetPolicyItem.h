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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYITEM_H_

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
                * 表示一条检测项的信息。
                */
                class ComplianceAssetPolicyItem : public AbstractModel
                {
                public:
                    ComplianceAssetPolicyItem();
                    ~ComplianceAssetPolicyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取为客户分配的唯一的检测项的ID。
                     * @return CustomerPolicyItemId 为客户分配的唯一的检测项的ID。
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置为客户分配的唯一的检测项的ID。
                     * @param CustomerPolicyItemId 为客户分配的唯一的检测项的ID。
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取检测项的原始ID
                     * @return BasePolicyItemId 检测项的原始ID
                     */
                    uint64_t GetBasePolicyItemId() const;

                    /**
                     * 设置检测项的原始ID
                     * @param BasePolicyItemId 检测项的原始ID
                     */
                    void SetBasePolicyItemId(const uint64_t& _basePolicyItemId);

                    /**
                     * 判断参数 BasePolicyItemId 是否已赋值
                     * @return BasePolicyItemId 是否已赋值
                     */
                    bool BasePolicyItemIdHasBeenSet() const;

                    /**
                     * 获取检测项的名称。
                     * @return Name 检测项的名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置检测项的名称。
                     * @param Name 检测项的名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取检测项所属的类型的名称
                     * @return Category 检测项所属的类型的名称
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置检测项所属的类型的名称
                     * @param Category 检测项所属的类型的名称
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取所属的合规标准的ID
                     * @return BenchmarkStandardId 所属的合规标准的ID
                     */
                    uint64_t GetBenchmarkStandardId() const;

                    /**
                     * 设置所属的合规标准的ID
                     * @param BenchmarkStandardId 所属的合规标准的ID
                     */
                    void SetBenchmarkStandardId(const uint64_t& _benchmarkStandardId);

                    /**
                     * 判断参数 BenchmarkStandardId 是否已赋值
                     * @return BenchmarkStandardId 是否已赋值
                     */
                    bool BenchmarkStandardIdHasBeenSet() const;

                    /**
                     * 获取所属的合规标准的名称
                     * @return BenchmarkStandardName 所属的合规标准的名称
                     */
                    std::string GetBenchmarkStandardName() const;

                    /**
                     * 设置所属的合规标准的名称
                     * @param BenchmarkStandardName 所属的合规标准的名称
                     */
                    void SetBenchmarkStandardName(const std::string& _benchmarkStandardName);

                    /**
                     * 判断参数 BenchmarkStandardName 是否已赋值
                     * @return BenchmarkStandardName 是否已赋值
                     */
                    bool BenchmarkStandardNameHasBeenSet() const;

                    /**
                     * 获取威胁等级
                     * @return RiskLevel 威胁等级
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置威胁等级
                     * @param RiskLevel 威胁等级
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取检测状态
CHECK_INIT, 待检测
CHECK_RUNNING, 检测中
CHECK_FINISHED, 检测完成
CHECK_FAILED, 检测失败
                     * @return CheckStatus 检测状态
CHECK_INIT, 待检测
CHECK_RUNNING, 检测中
CHECK_FINISHED, 检测完成
CHECK_FAILED, 检测失败
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检测状态
CHECK_INIT, 待检测
CHECK_RUNNING, 检测中
CHECK_FINISHED, 检测完成
CHECK_FAILED, 检测失败
                     * @param CheckStatus 检测状态
CHECK_INIT, 待检测
CHECK_RUNNING, 检测中
CHECK_FINISHED, 检测完成
CHECK_FAILED, 检测失败
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取检测结果
RESULT_PASSED: 通过
RESULT_FAILED: 未通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckResult 检测结果
RESULT_PASSED: 通过
RESULT_FAILED: 未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置检测结果
RESULT_PASSED: 通过
RESULT_FAILED: 未通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckResult 检测结果
RESULT_PASSED: 通过
RESULT_FAILED: 未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhitelistId 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetWhitelistId() const;

                    /**
                     * 设置检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WhitelistId 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWhitelistId(const uint64_t& _whitelistId);

                    /**
                     * 判断参数 WhitelistId 是否已赋值
                     * @return WhitelistId 是否已赋值
                     */
                    bool WhitelistIdHasBeenSet() const;

                    /**
                     * 获取处理建议。
                     * @return FixSuggestion 处理建议。
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置处理建议。
                     * @param FixSuggestion 处理建议。
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     */
                    bool FixSuggestionHasBeenSet() const;

                    /**
                     * 获取最近检测的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastCheckTime 最近检测的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近检测的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastCheckTime 最近检测的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     */
                    bool LastCheckTimeHasBeenSet() const;

                private:

                    /**
                     * 为客户分配的唯一的检测项的ID。
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 检测项的原始ID
                     */
                    uint64_t m_basePolicyItemId;
                    bool m_basePolicyItemIdHasBeenSet;

                    /**
                     * 检测项的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检测项所属的类型的名称
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 所属的合规标准的ID
                     */
                    uint64_t m_benchmarkStandardId;
                    bool m_benchmarkStandardIdHasBeenSet;

                    /**
                     * 所属的合规标准的名称
                     */
                    std::string m_benchmarkStandardName;
                    bool m_benchmarkStandardNameHasBeenSet;

                    /**
                     * 威胁等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 检测状态
CHECK_INIT, 待检测
CHECK_RUNNING, 检测中
CHECK_FINISHED, 检测完成
CHECK_FAILED, 检测失败
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 检测结果
RESULT_PASSED: 通过
RESULT_FAILED: 未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_whitelistId;
                    bool m_whitelistIdHasBeenSet;

                    /**
                     * 处理建议。
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                    /**
                     * 最近检测的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYITEM_H_
