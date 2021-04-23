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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETCOSURLREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETCOSURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetCOSURL请求参数结构体
                */
                class GetCOSURLRequest : public AbstractModel
                {
                public:
                    GetCOSURLRequest();
                    ~GetCOSURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param ProductID 产品ID
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取固件版本
                     * @return FirmwareVersion 固件版本
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件版本
                     * @param FirmwareVersion 固件版本
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return FileSize 文件大小
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param FileSize 文件大小
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 固件版本
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 文件大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETCOSURLREQUEST_H_
