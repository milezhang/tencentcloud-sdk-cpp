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

#include <tencentcloud/dcdb/v20180411/model/BriefNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

BriefNodeInfo::BriefNodeInfo() :
    m_nodeIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_shardIdHasBeenSet(false)
{
}

CoreInternalOutcome BriefNodeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BriefNodeInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Error("response `BriefNodeInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BriefNodeInfo.ShardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = string(value["ShardId"].GetString());
        m_shardIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BriefNodeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardId.c_str(), allocator).Move(), allocator);
    }

}


string BriefNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void BriefNodeInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool BriefNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string BriefNodeInfo::GetRole() const
{
    return m_role;
}

void BriefNodeInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool BriefNodeInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string BriefNodeInfo::GetShardId() const
{
    return m_shardId;
}

void BriefNodeInfo::SetShardId(const string& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool BriefNodeInfo::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

