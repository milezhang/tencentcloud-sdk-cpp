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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SignQrCode.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateMultiFlowSignQRCode返回参数结构体
                */
                class CreateMultiFlowSignQRCodeResponse : public AbstractModel
                {
                public:
                    CreateMultiFlowSignQRCodeResponse();
                    ~CreateMultiFlowSignQRCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签署二维码对象
                     * @return QrCode 签署二维码对象
                     */
                    SignQrCode GetQrCode() const;

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     */
                    bool QrCodeHasBeenSet() const;

                private:

                    /**
                     * 签署二维码对象
                     */
                    SignQrCode m_qrCode;
                    bool m_qrCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODERESPONSE_H_
