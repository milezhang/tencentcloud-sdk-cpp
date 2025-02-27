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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYL7RULESEDGEREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYL7RULESEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/L7RuleEntry.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyL7RulesEdge请求参数结构体
                */
                class ModifyL7RulesEdgeRequest : public AbstractModel
                {
                public:
                    ModifyL7RulesEdgeRequest();
                    ~ModifyL7RulesEdgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（edge表示边界防护产品）
                     * @return Business 大禹子产品代号（edge表示边界防护产品）
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（edge表示边界防护产品）
                     * @param Business 大禹子产品代号（edge表示边界防护产品）
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param Id 资源ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Rule 规则
                     */
                    L7RuleEntry GetRule() const;

                    /**
                     * 设置规则
                     * @param Rule 规则
                     */
                    void SetRule(const L7RuleEntry& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（edge表示边界防护产品）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则
                     */
                    L7RuleEntry m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYL7RULESEDGEREQUEST_H_
