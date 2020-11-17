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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEDATASTRUCT_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEDATASTRUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信模板编辑接口出参
                */
                class ModifySmsTemplateDataStruct : public AbstractModel
                {
                public:
                    ModifySmsTemplateDataStruct();
                    ~ModifySmsTemplateDataStruct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短信模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 短信模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置短信模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateId 短信模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 短信模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEDATASTRUCT_H_
