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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>
#include <tencentcloud/lighthouse/v20200324/model/DataDiskPrice.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceRenewInstances返回参数结构体
                */
                class InquirePriceRenewInstancesResponse : public AbstractModel
                {
                public:
                    InquirePriceRenewInstancesResponse();
                    ~InquirePriceRenewInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取询价信息。
                     * @return Price 询价信息。
                     */
                    Price GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取数据盘价格信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDiskPriceSet 数据盘价格信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDiskPrice> GetDataDiskPriceSet() const;

                    /**
                     * 判断参数 DataDiskPriceSet 是否已赋值
                     * @return DataDiskPriceSet 是否已赋值
                     */
                    bool DataDiskPriceSetHasBeenSet() const;

                private:

                    /**
                     * 询价信息。
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 数据盘价格信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDiskPrice> m_dataDiskPriceSet;
                    bool m_dataDiskPriceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_
