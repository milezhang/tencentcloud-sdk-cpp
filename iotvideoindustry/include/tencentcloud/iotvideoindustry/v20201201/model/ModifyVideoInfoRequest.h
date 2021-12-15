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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYVIDEOINFOREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYVIDEOINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyVideoInfo请求参数结构体
                */
                class ModifyVideoInfoRequest : public AbstractModel
                {
                public:
                    ModifyVideoInfoRequest();
                    ~ModifyVideoInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频ID列表长度限制100内
                     * @return InitIDs 视频ID列表长度限制100内
                     */
                    std::vector<int64_t> GetInitIDs() const;

                    /**
                     * 设置视频ID列表长度限制100内
                     * @param InitIDs 视频ID列表长度限制100内
                     */
                    void SetInitIDs(const std::vector<int64_t>& _initIDs);

                    /**
                     * 判断参数 InitIDs 是否已赋值
                     * @return InitIDs 是否已赋值
                     */
                    bool InitIDsHasBeenSet() const;

                    /**
                     * 获取过期时间 时间戳 -1: 永不过期 0: 无效值
                     * @return ExpireTime 过期时间 时间戳 -1: 永不过期 0: 无效值
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间 时间戳 -1: 永不过期 0: 无效值
                     * @param ExpireTime 过期时间 时间戳 -1: 永不过期 0: 无效值
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频ID列表长度限制100内
                     */
                    std::vector<int64_t> m_initIDs;
                    bool m_initIDsHasBeenSet;

                    /**
                     * 过期时间 时间戳 -1: 永不过期 0: 无效值
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYVIDEOINFOREQUEST_H_
