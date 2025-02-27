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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * StartFlow请求参数结构体
                */
                class StartFlowRequest : public AbstractModel
                {
                public:
                    StartFlowRequest();
                    ~StartFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息
                     * @return Operator 用户信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息
                     * @param Operator 用户信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取流程编号
                     * @return FlowId 流程编号
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程编号
                     * @param FlowId 流程编号
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param Agent 应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取客户端Token，保持接口幂等性
                     * @return ClientToken 客户端Token，保持接口幂等性
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，保持接口幂等性
                     * @param ClientToken 客户端Token，保持接口幂等性
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 客户端Token，保持接口幂等性
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_
