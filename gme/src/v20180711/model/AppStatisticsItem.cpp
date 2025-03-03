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

#include <tencentcloud/gme/v20180711/model/AppStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

AppStatisticsItem::AppStatisticsItem() :
    m_realtimeSpeechStatisticsItemHasBeenSet(false),
    m_voiceMessageStatisticsItemHasBeenSet(false),
    m_voiceFilterStatisticsItemHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome AppStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealtimeSpeechStatisticsItem") && !value["RealtimeSpeechStatisticsItem"].IsNull())
    {
        if (!value["RealtimeSpeechStatisticsItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatisticsItem.RealtimeSpeechStatisticsItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realtimeSpeechStatisticsItem.Deserialize(value["RealtimeSpeechStatisticsItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realtimeSpeechStatisticsItemHasBeenSet = true;
    }

    if (value.HasMember("VoiceMessageStatisticsItem") && !value["VoiceMessageStatisticsItem"].IsNull())
    {
        if (!value["VoiceMessageStatisticsItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatisticsItem.VoiceMessageStatisticsItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceMessageStatisticsItem.Deserialize(value["VoiceMessageStatisticsItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceMessageStatisticsItemHasBeenSet = true;
    }

    if (value.HasMember("VoiceFilterStatisticsItem") && !value["VoiceFilterStatisticsItem"].IsNull())
    {
        if (!value["VoiceFilterStatisticsItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatisticsItem.VoiceFilterStatisticsItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceFilterStatisticsItem.Deserialize(value["VoiceFilterStatisticsItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceFilterStatisticsItemHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatisticsItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realtimeSpeechStatisticsItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealtimeSpeechStatisticsItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realtimeSpeechStatisticsItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceMessageStatisticsItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceMessageStatisticsItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceMessageStatisticsItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceFilterStatisticsItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFilterStatisticsItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceFilterStatisticsItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


RealTimeSpeechStatisticsItem AppStatisticsItem::GetRealtimeSpeechStatisticsItem() const
{
    return m_realtimeSpeechStatisticsItem;
}

void AppStatisticsItem::SetRealtimeSpeechStatisticsItem(const RealTimeSpeechStatisticsItem& _realtimeSpeechStatisticsItem)
{
    m_realtimeSpeechStatisticsItem = _realtimeSpeechStatisticsItem;
    m_realtimeSpeechStatisticsItemHasBeenSet = true;
}

bool AppStatisticsItem::RealtimeSpeechStatisticsItemHasBeenSet() const
{
    return m_realtimeSpeechStatisticsItemHasBeenSet;
}

VoiceMessageStatisticsItem AppStatisticsItem::GetVoiceMessageStatisticsItem() const
{
    return m_voiceMessageStatisticsItem;
}

void AppStatisticsItem::SetVoiceMessageStatisticsItem(const VoiceMessageStatisticsItem& _voiceMessageStatisticsItem)
{
    m_voiceMessageStatisticsItem = _voiceMessageStatisticsItem;
    m_voiceMessageStatisticsItemHasBeenSet = true;
}

bool AppStatisticsItem::VoiceMessageStatisticsItemHasBeenSet() const
{
    return m_voiceMessageStatisticsItemHasBeenSet;
}

VoiceFilterStatisticsItem AppStatisticsItem::GetVoiceFilterStatisticsItem() const
{
    return m_voiceFilterStatisticsItem;
}

void AppStatisticsItem::SetVoiceFilterStatisticsItem(const VoiceFilterStatisticsItem& _voiceFilterStatisticsItem)
{
    m_voiceFilterStatisticsItem = _voiceFilterStatisticsItem;
    m_voiceFilterStatisticsItemHasBeenSet = true;
}

bool AppStatisticsItem::VoiceFilterStatisticsItemHasBeenSet() const
{
    return m_voiceFilterStatisticsItemHasBeenSet;
}

string AppStatisticsItem::GetDate() const
{
    return m_date;
}

void AppStatisticsItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AppStatisticsItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

