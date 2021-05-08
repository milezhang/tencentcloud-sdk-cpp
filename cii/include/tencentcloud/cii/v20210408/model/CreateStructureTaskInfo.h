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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKINFO_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 创建结构化任务子任务信息
                */
                class CreateStructureTaskInfo : public AbstractModel
                {
                public:
                    CreateStructureTaskInfo();
                    ~CreateStructureTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * @return FileList 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     * @param FileList 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     */
                    void SetFileList(const std::vector<std::string>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     */
                    bool FileListHasBeenSet() const;

                    /**
                     * 获取客户号
                     * @return CustomerId 客户号
                     */
                    std::string GetCustomerId() const;

                    /**
                     * 设置客户号
                     * @param CustomerId 客户号
                     */
                    void SetCustomerId(const std::string& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return CustomerName 客户姓名
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置客户姓名
                     * @param CustomerName 客户姓名
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * @return ImageList 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     */
                    std::vector<std::string> GetImageList() const;

                    /**
                     * 设置报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     * @param ImageList 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     */
                    void SetImageList(const std::vector<std::string>& _imageList);

                    /**
                     * 判断参数 ImageList 是否已赋值
                     * @return ImageList 是否已赋值
                     */
                    bool ImageListHasBeenSet() const;

                    /**
                     * 获取报告年份
                     * @return Year 报告年份
                     */
                    std::string GetYear() const;

                    /**
                     * 设置报告年份
                     * @param Year 报告年份
                     */
                    void SetYear(const std::string& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     */
                    bool YearHasBeenSet() const;

                private:

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 报告文件上传的地址列表，需按顺序排列。如果使用ImageList参数，置为空数组即可
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * 客户号
                     */
                    std::string m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 报告上传的图片内容数组，图片内容采用base64编码，需按顺序排列
                     */
                    std::vector<std::string> m_imageList;
                    bool m_imageListHasBeenSet;

                    /**
                     * 报告年份
                     */
                    std::string m_year;
                    bool m_yearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKINFO_H_
