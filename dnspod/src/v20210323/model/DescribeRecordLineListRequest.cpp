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

#include <tencentcloud/dnspod/v20210323/model/DescribeRecordLineListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

DescribeRecordLineListRequest::DescribeRecordLineListRequest() :
    m_domainHasBeenSet(false),
    m_domainGradeHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DescribeRecordLineListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainGradeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainGrade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordLineListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeRecordLineListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeRecordLineListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeRecordLineListRequest::GetDomainGrade() const
{
    return m_domainGrade;
}

void DescribeRecordLineListRequest::SetDomainGrade(const string& _domainGrade)
{
    m_domainGrade = _domainGrade;
    m_domainGradeHasBeenSet = true;
}

bool DescribeRecordLineListRequest::DomainGradeHasBeenSet() const
{
    return m_domainGradeHasBeenSet;
}

uint64_t DescribeRecordLineListRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeRecordLineListRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeRecordLineListRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


