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

#include <tencentcloud/teo/v20220106/model/DdosPacketFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DdosPacketFilter::DdosPacketFilter() :
    m_switchHasBeenSet(false),
    m_packetFilterHasBeenSet(false)
{
}

CoreInternalOutcome DdosPacketFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosPacketFilter.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("PacketFilter") && !value["PacketFilter"].IsNull())
    {
        if (!value["PacketFilter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DdosPacketFilter.PacketFilter` is not array type"));

        const rapidjson::Value &tmpValue = value["PacketFilter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSFeaturesFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packetFilter.push_back(item);
        }
        m_packetFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdosPacketFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_packetFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packetFilter.begin(); itr != m_packetFilter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DdosPacketFilter::GetSwitch() const
{
    return m_switch;
}

void DdosPacketFilter::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DdosPacketFilter::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<DDoSFeaturesFilter> DdosPacketFilter::GetPacketFilter() const
{
    return m_packetFilter;
}

void DdosPacketFilter::SetPacketFilter(const vector<DDoSFeaturesFilter>& _packetFilter)
{
    m_packetFilter = _packetFilter;
    m_packetFilterHasBeenSet = true;
}

bool DdosPacketFilter::PacketFilterHasBeenSet() const
{
    return m_packetFilterHasBeenSet;
}

