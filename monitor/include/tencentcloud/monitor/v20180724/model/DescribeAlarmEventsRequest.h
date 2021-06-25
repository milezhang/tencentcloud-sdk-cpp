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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmEvents请求参数结构体
                */
                class DescribeAlarmEventsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmEventsRequest();
                    ~DescribeAlarmEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定值 monitor
                     * @return Module 模块名，固定值 monitor
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定值 monitor
                     * @param Module 模块名，固定值 monitor
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * @return Namespace 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     * @param Namespace 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取监控类型，如 MT_QCE。如果不填默认为 MT_QCE。
                     * @return MonitorType 监控类型，如 MT_QCE。如果不填默认为 MT_QCE。
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型，如 MT_QCE。如果不填默认为 MT_QCE。
                     * @param MonitorType 监控类型，如 MT_QCE。如果不填默认为 MT_QCE。
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略类型，由 DescribeAllNamespaces 获得，例如 cvm_device
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 监控类型，如 MT_QCE。如果不填默认为 MT_QCE。
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSREQUEST_H_
