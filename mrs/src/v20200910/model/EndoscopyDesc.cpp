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

#include <tencentcloud/mrs/v20200910/model/EndoscopyDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EndoscopyDesc::EndoscopyDesc() :
    m_textHasBeenSet(false),
    m_organHasBeenSet(false)
{
}

CoreInternalOutcome EndoscopyDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndoscopyDesc.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Organ") && !value["Organ"].IsNull())
    {
        if (!value["Organ"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndoscopyDesc.Organ` is not array type"));

        const rapidjson::Value &tmpValue = value["Organ"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndoscopyOrgan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_organ.push_back(item);
        }
        m_organHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndoscopyDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_organHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_organ.begin(); itr != m_organ.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EndoscopyDesc::GetText() const
{
    return m_text;
}

void EndoscopyDesc::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool EndoscopyDesc::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<EndoscopyOrgan> EndoscopyDesc::GetOrgan() const
{
    return m_organ;
}

void EndoscopyDesc::SetOrgan(const vector<EndoscopyOrgan>& _organ)
{
    m_organ = _organ;
    m_organHasBeenSet = true;
}

bool EndoscopyDesc::OrganHasBeenSet() const
{
    return m_organHasBeenSet;
}

