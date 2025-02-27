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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_ENHANCETADEGREEREQUEST_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_ENHANCETADEGREEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/InputTaBspData.h>
#include <tencentcloud/taf/v20200210/model/InputBusinessEncryptData.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * EnhanceTaDegree请求参数结构体
                */
                class EnhanceTaDegreeRequest : public AbstractModel
                {
                public:
                    EnhanceTaDegreeRequest();
                    ~EnhanceTaDegreeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务数据
                     * @return BspData 业务数据
                     */
                    InputTaBspData GetBspData() const;

                    /**
                     * 设置业务数据
                     * @param BspData 业务数据
                     */
                    void SetBspData(const InputTaBspData& _bspData);

                    /**
                     * 判断参数 BspData 是否已赋值
                     * @return BspData 是否已赋值
                     */
                    bool BspDataHasBeenSet() const;

                    /**
                     * 获取业务加密数据
                     * @return BusinessEncryptData 业务加密数据
                     */
                    InputBusinessEncryptData GetBusinessEncryptData() const;

                    /**
                     * 设置业务加密数据
                     * @param BusinessEncryptData 业务加密数据
                     */
                    void SetBusinessEncryptData(const InputBusinessEncryptData& _businessEncryptData);

                    /**
                     * 判断参数 BusinessEncryptData 是否已赋值
                     * @return BusinessEncryptData 是否已赋值
                     */
                    bool BusinessEncryptDataHasBeenSet() const;

                private:

                    /**
                     * 业务数据
                     */
                    InputTaBspData m_bspData;
                    bool m_bspDataHasBeenSet;

                    /**
                     * 业务加密数据
                     */
                    InputBusinessEncryptData m_businessEncryptData;
                    bool m_businessEncryptDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_ENHANCETADEGREEREQUEST_H_
