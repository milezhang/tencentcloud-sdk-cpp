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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEUSERSAMLCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEUSERSAMLCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateUserSAMLConfig请求参数结构体
                */
                class CreateUserSAMLConfigRequest : public AbstractModel
                {
                public:
                    CreateUserSAMLConfigRequest();
                    ~CreateUserSAMLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML元数据文档，需要base64 encode
                     * @return SAMLMetadataDocument SAML元数据文档，需要base64 encode
                     */
                    std::string GetSAMLMetadataDocument() const;

                    /**
                     * 设置SAML元数据文档，需要base64 encode
                     * @param SAMLMetadataDocument SAML元数据文档，需要base64 encode
                     */
                    void SetSAMLMetadataDocument(const std::string& _sAMLMetadataDocument);

                    /**
                     * 判断参数 SAMLMetadataDocument 是否已赋值
                     * @return SAMLMetadataDocument 是否已赋值
                     */
                    bool SAMLMetadataDocumentHasBeenSet() const;

                private:

                    /**
                     * SAML元数据文档，需要base64 encode
                     */
                    std::string m_sAMLMetadataDocument;
                    bool m_sAMLMetadataDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEUSERSAMLCONFIGREQUEST_H_
