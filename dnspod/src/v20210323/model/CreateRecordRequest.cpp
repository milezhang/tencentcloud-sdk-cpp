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

#include <tencentcloud/dnspod/v20210323/model/CreateRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

CreateRecordRequest::CreateRecordRequest() :
    m_domainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordLineIdHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string CreateRecordRequest::ToJsonString() const
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

    if (m_recordTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }

    if (m_mXHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mX, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }

    if (m_weightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRecordRequest::GetDomain() const
{
    return m_domain;
}

void CreateRecordRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateRecordRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateRecordRequest::GetRecordType() const
{
    return m_recordType;
}

void CreateRecordRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CreateRecordRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateRecordRequest::GetRecordLine() const
{
    return m_recordLine;
}

void CreateRecordRequest::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool CreateRecordRequest::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string CreateRecordRequest::GetValue() const
{
    return m_value;
}

void CreateRecordRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CreateRecordRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t CreateRecordRequest::GetDomainId() const
{
    return m_domainId;
}

void CreateRecordRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool CreateRecordRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string CreateRecordRequest::GetSubDomain() const
{
    return m_subDomain;
}

void CreateRecordRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool CreateRecordRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string CreateRecordRequest::GetRecordLineId() const
{
    return m_recordLineId;
}

void CreateRecordRequest::SetRecordLineId(const string& _recordLineId)
{
    m_recordLineId = _recordLineId;
    m_recordLineIdHasBeenSet = true;
}

bool CreateRecordRequest::RecordLineIdHasBeenSet() const
{
    return m_recordLineIdHasBeenSet;
}

uint64_t CreateRecordRequest::GetMX() const
{
    return m_mX;
}

void CreateRecordRequest::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool CreateRecordRequest::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

uint64_t CreateRecordRequest::GetTTL() const
{
    return m_tTL;
}

void CreateRecordRequest::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool CreateRecordRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t CreateRecordRequest::GetWeight() const
{
    return m_weight;
}

void CreateRecordRequest::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CreateRecordRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string CreateRecordRequest::GetStatus() const
{
    return m_status;
}

void CreateRecordRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateRecordRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


