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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_

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
                * 容器安全端口信息列表
                */
                class PortInfo : public AbstractModel
                {
                public:
                    PortInfo();
                    ~PortInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取对外ip
                     * @return PublicIP 对外ip
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置对外ip
                     * @param PublicIP 对外ip
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取主机端口
                     * @return PublicPort 主机端口
                     */
                    uint64_t GetPublicPort() const;

                    /**
                     * 设置主机端口
                     * @param PublicPort 主机端口
                     */
                    void SetPublicPort(const uint64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取容器端口
                     * @return ContainerPort 容器端口
                     */
                    uint64_t GetContainerPort() const;

                    /**
                     * 设置容器端口
                     * @param ContainerPort 容器端口
                     */
                    void SetContainerPort(const uint64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取容器Pid
                     * @return ContainerPID 容器Pid
                     */
                    uint64_t GetContainerPID() const;

                    /**
                     * 设置容器Pid
                     * @param ContainerPID 容器Pid
                     */
                    void SetContainerPID(const uint64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param ContainerName 容器名
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取主机id
                     * @return HostID 主机id
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机id
                     * @param HostID 主机id
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip
                     * @param HostIP 主机ip
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param ProcessName 进程名称
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取容器内监听地址
                     * @return ListenContainer 容器内监听地址
                     */
                    std::string GetListenContainer() const;

                    /**
                     * 设置容器内监听地址
                     * @param ListenContainer 容器内监听地址
                     */
                    void SetListenContainer(const std::string& _listenContainer);

                    /**
                     * 判断参数 ListenContainer 是否已赋值
                     * @return ListenContainer 是否已赋值
                     */
                    bool ListenContainerHasBeenSet() const;

                    /**
                     * 获取容器外监听地址
                     * @return ListenHost 容器外监听地址
                     */
                    std::string GetListenHost() const;

                    /**
                     * 设置容器外监听地址
                     * @param ListenHost 容器外监听地址
                     */
                    void SetListenHost(const std::string& _listenHost);

                    /**
                     * 判断参数 ListenHost 是否已赋值
                     * @return ListenHost 是否已赋值
                     */
                    bool ListenHostHasBeenSet() const;

                    /**
                     * 获取运行账号
                     * @return RunAs 运行账号
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置运行账号
                     * @param RunAs 运行账号
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param HostName 主机名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外网ip
                     * @param PublicIp 外网ip
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对外ip
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 主机端口
                     */
                    uint64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * 容器端口
                     */
                    uint64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 容器Pid
                     */
                    uint64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 容器内监听地址
                     */
                    std::string m_listenContainer;
                    bool m_listenContainerHasBeenSet;

                    /**
                     * 容器外监听地址
                     */
                    std::string m_listenHost;
                    bool m_listenHostHasBeenSet;

                    /**
                     * 运行账号
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PORTINFO_H_
