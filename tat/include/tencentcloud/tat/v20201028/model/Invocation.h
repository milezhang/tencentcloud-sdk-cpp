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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/InvocationTaskBasicInfo.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 执行活动详情。
                */
                class Invocation : public AbstractModel
                {
                public:
                    Invocation();
                    ~Invocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行活动ID。
                     * @return InvocationId 执行活动ID。
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置执行活动ID。
                     * @param InvocationId 执行活动ID。
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取命令ID。
                     * @return CommandId 命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param CommandId 命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> PARTIAL_FAILED：命令部分失败
                     * @return InvocationStatus 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> PARTIAL_FAILED：命令部分失败
                     */
                    std::string GetInvocationStatus() const;

                    /**
                     * 设置执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> PARTIAL_FAILED：命令部分失败
                     * @param InvocationStatus 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> PARTIAL_FAILED：命令部分失败
                     */
                    void SetInvocationStatus(const std::string& _invocationStatus);

                    /**
                     * 判断参数 InvocationStatus 是否已赋值
                     * @return InvocationStatus 是否已赋值
                     */
                    bool InvocationStatusHasBeenSet() const;

                    /**
                     * 获取执行任务信息列表。
                     * @return InvocationTaskBasicInfoSet 执行任务信息列表。
                     */
                    std::vector<InvocationTaskBasicInfo> GetInvocationTaskBasicInfoSet() const;

                    /**
                     * 设置执行任务信息列表。
                     * @param InvocationTaskBasicInfoSet 执行任务信息列表。
                     */
                    void SetInvocationTaskBasicInfoSet(const std::vector<InvocationTaskBasicInfo>& _invocationTaskBasicInfoSet);

                    /**
                     * 判断参数 InvocationTaskBasicInfoSet 是否已赋值
                     * @return InvocationTaskBasicInfoSet 是否已赋值
                     */
                    bool InvocationTaskBasicInfoSetHasBeenSet() const;

                    /**
                     * 获取执行活动描述。
                     * @return Description 执行活动描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置执行活动描述。
                     * @param Description 执行活动描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取执行活动开始时间。
                     * @return StartTime 执行活动开始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置执行活动开始时间。
                     * @param StartTime 执行活动开始时间。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取执行活动结束时间。
                     * @return EndTime 执行活动结束时间。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置执行活动结束时间。
                     * @param EndTime 执行活动结束时间。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取执行活动创建时间。
                     * @return CreatedTime 执行活动创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置执行活动创建时间。
                     * @param CreatedTime 执行活动创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取执行活动更新时间。
                     * @return UpdatedTime 执行活动更新时间。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置执行活动更新时间。
                     * @param UpdatedTime 执行活动更新时间。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取自定义参数取值。
                     * @return Parameters 自定义参数取值。
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置自定义参数取值。
                     * @param Parameters 自定义参数取值。
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取自定义参数的默认取值。
                     * @return DefaultParameters 自定义参数的默认取值。
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置自定义参数的默认取值。
                     * @param DefaultParameters 自定义参数的默认取值。
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取执行命令的实例类型，取值范围：CVM、LIGHTHOUSE。
                     * @return InstanceKind 执行命令的实例类型，取值范围：CVM、LIGHTHOUSE。
                     */
                    std::string GetInstanceKind() const;

                    /**
                     * 设置执行命令的实例类型，取值范围：CVM、LIGHTHOUSE。
                     * @param InstanceKind 执行命令的实例类型，取值范围：CVM、LIGHTHOUSE。
                     */
                    void SetInstanceKind(const std::string& _instanceKind);

                    /**
                     * 判断参数 InstanceKind 是否已赋值
                     * @return InstanceKind 是否已赋值
                     */
                    bool InstanceKindHasBeenSet() const;

                    /**
                     * 获取在实例上执行命令时使用的用户名。
                     * @return Username 在实例上执行命令时使用的用户名。
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置在实例上执行命令时使用的用户名。
                     * @param Username 在实例上执行命令时使用的用户名。
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取调用来源。
                     * @return InvocationSource 调用来源。
                     */
                    std::string GetInvocationSource() const;

                    /**
                     * 设置调用来源。
                     * @param InvocationSource 调用来源。
                     */
                    void SetInvocationSource(const std::string& _invocationSource);

                    /**
                     * 判断参数 InvocationSource 是否已赋值
                     * @return InvocationSource 是否已赋值
                     */
                    bool InvocationSourceHasBeenSet() const;

                    /**
                     * 获取base64编码的命令内容
                     * @return CommandContent base64编码的命令内容
                     */
                    std::string GetCommandContent() const;

                    /**
                     * 设置base64编码的命令内容
                     * @param CommandContent base64编码的命令内容
                     */
                    void SetCommandContent(const std::string& _commandContent);

                    /**
                     * 判断参数 CommandContent 是否已赋值
                     * @return CommandContent 是否已赋值
                     */
                    bool CommandContentHasBeenSet() const;

                    /**
                     * 获取命令类型
                     * @return CommandType 命令类型
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型
                     * @param CommandType 命令类型
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取执行命令过期时间， 单位秒
                     * @return Timeout 执行命令过期时间， 单位秒
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置执行命令过期时间， 单位秒
                     * @param Timeout 执行命令过期时间， 单位秒
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取执行命令的工作路径
                     * @return WorkingDirectory 执行命令的工作路径
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置执行命令的工作路径
                     * @param WorkingDirectory 执行命令的工作路径
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取日志上传的cos bucket 地址。
                     * @return OutputCOSBucketUrl 日志上传的cos bucket 地址。
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置日志上传的cos bucket 地址。
                     * @param OutputCOSBucketUrl 日志上传的cos bucket 地址。
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取日志在cos bucket中的目录。
                     * @return OutputCOSKeyPrefix 日志在cos bucket中的目录。
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置日志在cos bucket中的目录。
                     * @param OutputCOSKeyPrefix 日志在cos bucket中的目录。
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * 执行活动ID。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * 命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> PARTIAL_FAILED：命令部分失败
                     */
                    std::string m_invocationStatus;
                    bool m_invocationStatusHasBeenSet;

                    /**
                     * 执行任务信息列表。
                     */
                    std::vector<InvocationTaskBasicInfo> m_invocationTaskBasicInfoSet;
                    bool m_invocationTaskBasicInfoSetHasBeenSet;

                    /**
                     * 执行活动描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 执行活动开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 执行活动结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行活动创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 执行活动更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 自定义参数取值。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 自定义参数的默认取值。
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * 执行命令的实例类型，取值范围：CVM、LIGHTHOUSE。
                     */
                    std::string m_instanceKind;
                    bool m_instanceKindHasBeenSet;

                    /**
                     * 在实例上执行命令时使用的用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 调用来源。
                     */
                    std::string m_invocationSource;
                    bool m_invocationSourceHasBeenSet;

                    /**
                     * base64编码的命令内容
                     */
                    std::string m_commandContent;
                    bool m_commandContentHasBeenSet;

                    /**
                     * 命令类型
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * 执行命令过期时间， 单位秒
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 执行命令的工作路径
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 日志上传的cos bucket 地址。
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * 日志在cos bucket中的目录。
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATION_H_
