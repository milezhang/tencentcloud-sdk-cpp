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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ActionSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 按付费模式汇总消费详情
                */
                class PayModeSummaryOverviewItem : public AbstractModel
                {
                public:
                    PayModeSummaryOverviewItem();
                    ~PayModeSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param PayMode 付费模式
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取付费模式名称
                     * @return PayModeName 付费模式名称
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置付费模式名称
                     * @param PayModeName 付费模式名称
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     */
                    bool PayModeNameHasBeenSet() const;

                    /**
                     * 获取实际花费
                     * @return RealTotalCost 实际花费
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置实际花费
                     * @param RealTotalCost 实际花费
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取费用所占百分比，两位小数
                     * @return RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置费用所占百分比，两位小数
                     * @param RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取按交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型汇总消费详情
                     * @return Detail 按交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型汇总消费详情
                     */
                    std::vector<ActionSummaryOverviewItem> GetDetail() const;

                    /**
                     * 设置按交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型汇总消费详情
                     * @param Detail 按交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型汇总消费详情
                     */
                    void SetDetail(const std::vector<ActionSummaryOverviewItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取现金金额
                     * @return CashPayAmount 现金金额
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金金额
                     * @param CashPayAmount 现金金额
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送金金额
                     * @return IncentivePayAmount 赠送金金额
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金金额
                     * @param IncentivePayAmount 赠送金金额
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取代金券金额
                     * @return VoucherPayAmount 代金券金额
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券金额
                     * @param VoucherPayAmount 代金券金额
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * @return TotalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     * @param TotalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * 付费模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费模式名称
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * 实际花费
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 费用所占百分比，两位小数
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * 按交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型汇总消费详情
                     */
                    std::vector<ActionSummaryOverviewItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 现金金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送金金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 代金券金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_
