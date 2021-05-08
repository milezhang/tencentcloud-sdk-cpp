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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_CREATERESOURCEREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_CREATERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * CreateResource请求参数结构体
                */
                class CreateResourceRequest : public AbstractModel
                {
                public:
                    CreateResourceRequest();
                    ~CreateResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间 Id
                     * @return NamespaceId 命名空间 Id
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间 Id
                     * @param NamespaceId 命名空间 Id
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param ResourceType 资源类型
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源 Id
                     * @return ResourceId 资源 Id
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 Id
                     * @param ResourceId 资源 Id
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return SourceChannel 来源
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源
                     * @param SourceChannel 来源
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * 命名空间 Id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源 Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 来源
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_CREATERESOURCEREQUEST_H_
