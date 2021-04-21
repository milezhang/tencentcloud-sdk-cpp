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

#include <tencentcloud/btoe/v20210303/model/CreateImageDepositRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210303::Model;
using namespace rapidjson;
using namespace std;

CreateImageDepositRequest::CreateImageDepositRequest() :
    m_evidenceNameHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_evidenceHashHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_hashTypeHasBeenSet(false),
    m_evidenceDescriptionHasBeenSet(false)
{
}

string CreateImageDepositRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceHash.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_hashTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HashType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hashType, allocator);
    }

    if (m_evidenceDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceDescription.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImageDepositRequest::GetEvidenceName() const
{
    return m_evidenceName;
}

void CreateImageDepositRequest::SetEvidenceName(const string& _evidenceName)
{
    m_evidenceName = _evidenceName;
    m_evidenceNameHasBeenSet = true;
}

bool CreateImageDepositRequest::EvidenceNameHasBeenSet() const
{
    return m_evidenceNameHasBeenSet;
}

string CreateImageDepositRequest::GetFileName() const
{
    return m_fileName;
}

void CreateImageDepositRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateImageDepositRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateImageDepositRequest::GetEvidenceHash() const
{
    return m_evidenceHash;
}

void CreateImageDepositRequest::SetEvidenceHash(const string& _evidenceHash)
{
    m_evidenceHash = _evidenceHash;
    m_evidenceHashHasBeenSet = true;
}

bool CreateImageDepositRequest::EvidenceHashHasBeenSet() const
{
    return m_evidenceHashHasBeenSet;
}

string CreateImageDepositRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateImageDepositRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateImageDepositRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CreateImageDepositRequest::GetFileContent() const
{
    return m_fileContent;
}

void CreateImageDepositRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool CreateImageDepositRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string CreateImageDepositRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateImageDepositRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateImageDepositRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

uint64_t CreateImageDepositRequest::GetHashType() const
{
    return m_hashType;
}

void CreateImageDepositRequest::SetHashType(const uint64_t& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool CreateImageDepositRequest::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

string CreateImageDepositRequest::GetEvidenceDescription() const
{
    return m_evidenceDescription;
}

void CreateImageDepositRequest::SetEvidenceDescription(const string& _evidenceDescription)
{
    m_evidenceDescription = _evidenceDescription;
    m_evidenceDescriptionHasBeenSet = true;
}

bool CreateImageDepositRequest::EvidenceDescriptionHasBeenSet() const
{
    return m_evidenceDescriptionHasBeenSet;
}


