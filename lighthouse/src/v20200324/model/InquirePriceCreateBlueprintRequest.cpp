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

#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateBlueprintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace rapidjson;
using namespace std;

InquirePriceCreateBlueprintRequest::InquirePriceCreateBlueprintRequest() :
    m_blueprintCountHasBeenSet(false)
{
}

string InquirePriceCreateBlueprintRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_blueprintCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlueprintCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blueprintCount, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t InquirePriceCreateBlueprintRequest::GetBlueprintCount() const
{
    return m_blueprintCount;
}

void InquirePriceCreateBlueprintRequest::SetBlueprintCount(const int64_t& _blueprintCount)
{
    m_blueprintCount = _blueprintCount;
    m_blueprintCountHasBeenSet = true;
}

bool InquirePriceCreateBlueprintRequest::BlueprintCountHasBeenSet() const
{
    return m_blueprintCountHasBeenSet;
}


