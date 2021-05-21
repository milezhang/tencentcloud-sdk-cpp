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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINLOCKRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINLOCKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LockInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyDomainLock返回参数结构体
                */
                class ModifyDomainLockResponse : public AbstractModel
                {
                public:
                    ModifyDomainLockResponse();
                    ~ModifyDomainLockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取域名锁定信息
                     * @return LockInfo 域名锁定信息
                     */
                    LockInfo GetLockInfo() const;

                    /**
                     * 判断参数 LockInfo 是否已赋值
                     * @return LockInfo 是否已赋值
                     */
                    bool LockInfoHasBeenSet() const;

                private:

                    /**
                     * 域名锁定信息
                     */
                    LockInfo m_lockInfo;
                    bool m_lockInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINLOCKRESPONSE_H_
