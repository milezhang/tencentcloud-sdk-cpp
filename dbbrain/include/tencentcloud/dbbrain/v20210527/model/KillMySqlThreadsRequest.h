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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * KillMySqlThreads请求参数结构体
                */
                class KillMySqlThreadsRequest : public AbstractModel
                {
                public:
                    KillMySqlThreadsRequest();
                    ~KillMySqlThreadsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param InstanceId 实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取kill会话任务的阶段，取值包括："Prepare"-准备阶段，"Commit"-提交阶段。
                     * @return Stage kill会话任务的阶段，取值包括："Prepare"-准备阶段，"Commit"-提交阶段。
                     */
                    std::string GetStage() const;

                    /**
                     * 设置kill会话任务的阶段，取值包括："Prepare"-准备阶段，"Commit"-提交阶段。
                     * @param Stage kill会话任务的阶段，取值包括："Prepare"-准备阶段，"Commit"-提交阶段。
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取需要kill的sql会话ID列表，此参数用于Prepare阶段。
                     * @return Threads 需要kill的sql会话ID列表，此参数用于Prepare阶段。
                     */
                    std::vector<int64_t> GetThreads() const;

                    /**
                     * 设置需要kill的sql会话ID列表，此参数用于Prepare阶段。
                     * @param Threads 需要kill的sql会话ID列表，此参数用于Prepare阶段。
                     */
                    void SetThreads(const std::vector<int64_t>& _threads);

                    /**
                     * 判断参数 Threads 是否已赋值
                     * @return Threads 是否已赋值
                     */
                    bool ThreadsHasBeenSet() const;

                    /**
                     * 获取执行ID，此参数用于Commit阶段。
                     * @return SqlExecId 执行ID，此参数用于Commit阶段。
                     */
                    std::string GetSqlExecId() const;

                    /**
                     * 设置执行ID，此参数用于Commit阶段。
                     * @param SqlExecId 执行ID，此参数用于Commit阶段。
                     */
                    void SetSqlExecId(const std::string& _sqlExecId);

                    /**
                     * 判断参数 SqlExecId 是否已赋值
                     * @return SqlExecId 是否已赋值
                     */
                    bool SqlExecIdHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @param Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * kill会话任务的阶段，取值包括："Prepare"-准备阶段，"Commit"-提交阶段。
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 需要kill的sql会话ID列表，此参数用于Prepare阶段。
                     */
                    std::vector<int64_t> m_threads;
                    bool m_threadsHasBeenSet;

                    /**
                     * 执行ID，此参数用于Commit阶段。
                     */
                    std::string m_sqlExecId;
                    bool m_sqlExecIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_
