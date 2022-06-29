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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_TAGROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_TAGROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * TagRole请求参数结构体
                */
                class TagRoleRequest : public AbstractModel
                {
                public:
                    TagRoleRequest();
                    ~TagRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签
                     * @return Tags 标签
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置标签
                     * @param Tags 标签
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取角色名，与角色ID至少输入一个
                     * @return RoleName 角色名，与角色ID至少输入一个
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名，与角色ID至少输入一个
                     * @param RoleName 角色名，与角色ID至少输入一个
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取角色ID，与角色名至少输入一个
                     * @return RoleId 角色ID，与角色名至少输入一个
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色ID，与角色名至少输入一个
                     * @param RoleId 角色ID，与角色名至少输入一个
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                private:

                    /**
                     * 标签
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 角色名，与角色ID至少输入一个
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色ID，与角色名至少输入一个
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_TAGROLEREQUEST_H_
