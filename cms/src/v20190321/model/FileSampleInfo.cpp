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

#include <tencentcloud/cms/v20190321/model/FileSampleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

FileSampleInfo::FileSampleInfo() :
    m_codeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_compressFileUrlHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

CoreInternalOutcome FileSampleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.CreatedAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetUint64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.EvilType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetUint64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.Label` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_label = value["Label"].GetUint64();
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CompressFileUrl") && !value["CompressFileUrl"].IsNull())
    {
        if (!value["CompressFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.CompressFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressFileUrl = string(value["CompressFileUrl"].GetString());
        m_compressFileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSampleInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSampleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_label, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_compressFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t FileSampleInfo::GetCode() const
{
    return m_code;
}

void FileSampleInfo::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool FileSampleInfo::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t FileSampleInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void FileSampleInfo::SetCreatedAt(const uint64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool FileSampleInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t FileSampleInfo::GetEvilType() const
{
    return m_evilType;
}

void FileSampleInfo::SetEvilType(const uint64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool FileSampleInfo::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

string FileSampleInfo::GetFileMd5() const
{
    return m_fileMd5;
}

void FileSampleInfo::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool FileSampleInfo::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string FileSampleInfo::GetFileName() const
{
    return m_fileName;
}

void FileSampleInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileSampleInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileSampleInfo::GetFileType() const
{
    return m_fileType;
}

void FileSampleInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileSampleInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string FileSampleInfo::GetId() const
{
    return m_id;
}

void FileSampleInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FileSampleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t FileSampleInfo::GetLabel() const
{
    return m_label;
}

void FileSampleInfo::SetLabel(const uint64_t& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool FileSampleInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t FileSampleInfo::GetStatus() const
{
    return m_status;
}

void FileSampleInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileSampleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FileSampleInfo::GetCompressFileUrl() const
{
    return m_compressFileUrl;
}

void FileSampleInfo::SetCompressFileUrl(const string& _compressFileUrl)
{
    m_compressFileUrl = _compressFileUrl;
    m_compressFileUrlHasBeenSet = true;
}

bool FileSampleInfo::CompressFileUrlHasBeenSet() const
{
    return m_compressFileUrlHasBeenSet;
}

string FileSampleInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void FileSampleInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool FileSampleInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

