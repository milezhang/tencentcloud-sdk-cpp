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

#include <tencentcloud/cii/v20210408/model/DescribeStructCompareDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cii::V20210408::Model;
using namespace rapidjson;
using namespace std;

DescribeStructCompareDataRequest::DescribeStructCompareDataRequest() :
    m_mainTaskIdHasBeenSet(false),
    m_subTaskIdHasBeenSet(false)
{
}

string DescribeStructCompareDataRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mainTaskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MainTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mainTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStructCompareDataRequest::GetMainTaskId() const
{
    return m_mainTaskId;
}

void DescribeStructCompareDataRequest::SetMainTaskId(const string& _mainTaskId)
{
    m_mainTaskId = _mainTaskId;
    m_mainTaskIdHasBeenSet = true;
}

bool DescribeStructCompareDataRequest::MainTaskIdHasBeenSet() const
{
    return m_mainTaskIdHasBeenSet;
}

string DescribeStructCompareDataRequest::GetSubTaskId() const
{
    return m_subTaskId;
}

void DescribeStructCompareDataRequest::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool DescribeStructCompareDataRequest::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}


