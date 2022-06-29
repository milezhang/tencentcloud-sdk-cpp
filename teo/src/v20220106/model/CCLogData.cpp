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

#include <tencentcloud/teo/v20220106/model/CCLogData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CCLogData::CCLogData() :
    m_listHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome CCLogData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCLogData.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (value.HasMember("PageNo") && !value["PageNo"].IsNull())
    {
        if (!value["PageNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLogData.PageNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNo = value["PageNo"].GetInt64();
        m_pageNoHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLogData.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLogData.Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLogData.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCLogData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

}


vector<CCLog> CCLogData::GetList() const
{
    return m_list;
}

void CCLogData::SetList(const vector<CCLog>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool CCLogData::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

int64_t CCLogData::GetPageNo() const
{
    return m_pageNo;
}

void CCLogData::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool CCLogData::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t CCLogData::GetPageSize() const
{
    return m_pageSize;
}

void CCLogData::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool CCLogData::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t CCLogData::GetPages() const
{
    return m_pages;
}

void CCLogData::SetPages(const int64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool CCLogData::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

int64_t CCLogData::GetTotalSize() const
{
    return m_totalSize;
}

void CCLogData::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool CCLogData::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

