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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_

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
                * CloneDBInstance返回参数结构体
                */
                class CloneDBInstanceResponse : public AbstractModel
                {
                public:
                    CloneDBInstanceResponse();
                    ~CloneDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealName 订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取订单流水号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillId 订单流水号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBillId() const;

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     */
                    bool BillIdHasBeenSet() const;

                private:

                    /**
                     * 订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 订单流水号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_
