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

#include <tencentcloud/teo/v20220106/model/VanityNameServers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

VanityNameServers::VanityNameServers() :
    m_switchHasBeenSet(false),
    m_serversHasBeenSet(false)
{
}

CoreInternalOutcome VanityNameServers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VanityNameServers.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Servers") && !value["Servers"].IsNull())
    {
        if (!value["Servers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VanityNameServers.Servers` is not array type"));

        const rapidjson::Value &tmpValue = value["Servers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_servers.push_back((*itr).GetString());
        }
        m_serversHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VanityNameServers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_serversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Servers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_servers.begin(); itr != m_servers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VanityNameServers::GetSwitch() const
{
    return m_switch;
}

void VanityNameServers::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool VanityNameServers::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> VanityNameServers::GetServers() const
{
    return m_servers;
}

void VanityNameServers::SetServers(const vector<string>& _servers)
{
    m_servers = _servers;
    m_serversHasBeenSet = true;
}

bool VanityNameServers::ServersHasBeenSet() const
{
    return m_serversHasBeenSet;
}

