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

#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPQueuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeAMQPQueuesRequest::DescribeAMQPQueuesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_nameKeywordHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_sortedByHasBeenSet(false),
    m_filterOneQueueHasBeenSet(false)
{
}

string DescribeAMQPQueuesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_sortedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortedBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_filterOneQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterOneQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterOneQueue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAMQPQueuesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAMQPQueuesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAMQPQueuesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAMQPQueuesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeAMQPQueuesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetVHostId() const
{
    return m_vHostId;
}

void DescribeAMQPQueuesRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetNameKeyword() const
{
    return m_nameKeyword;
}

void DescribeAMQPQueuesRequest::SetNameKeyword(const string& _nameKeyword)
{
    m_nameKeyword = _nameKeyword;
    m_nameKeywordHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::NameKeywordHasBeenSet() const
{
    return m_nameKeywordHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeAMQPQueuesRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetSortedBy() const
{
    return m_sortedBy;
}

void DescribeAMQPQueuesRequest::SetSortedBy(const string& _sortedBy)
{
    m_sortedBy = _sortedBy;
    m_sortedByHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::SortedByHasBeenSet() const
{
    return m_sortedByHasBeenSet;
}

string DescribeAMQPQueuesRequest::GetFilterOneQueue() const
{
    return m_filterOneQueue;
}

void DescribeAMQPQueuesRequest::SetFilterOneQueue(const string& _filterOneQueue)
{
    m_filterOneQueue = _filterOneQueue;
    m_filterOneQueueHasBeenSet = true;
}

bool DescribeAMQPQueuesRequest::FilterOneQueueHasBeenSet() const
{
    return m_filterOneQueueHasBeenSet;
}


