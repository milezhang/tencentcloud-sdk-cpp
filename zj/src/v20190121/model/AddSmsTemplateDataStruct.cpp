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

#include <tencentcloud/zj/v20190121/model/AddSmsTemplateDataStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

AddSmsTemplateDataStruct::AddSmsTemplateDataStruct() :
    m_templateIdHasBeenSet(false)
{
}

CoreInternalOutcome AddSmsTemplateDataStruct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddSmsTemplateDataStruct.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddSmsTemplateDataStruct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

}


uint64_t AddSmsTemplateDataStruct::GetTemplateId() const
{
    return m_templateId;
}

void AddSmsTemplateDataStruct::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AddSmsTemplateDataStruct::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

