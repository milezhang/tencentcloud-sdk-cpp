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

#include <tencentcloud/lighthouse/v20200324/model/PolicyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

PolicyDetail::PolicyDetail() :
    m_userDiscountHasBeenSet(false),
    m_commonDiscountHasBeenSet(false),
    m_finalDiscountHasBeenSet(false)
{
}

CoreInternalOutcome PolicyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserDiscount") && !value["UserDiscount"].IsNull())
    {
        if (!value["UserDiscount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.UserDiscount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userDiscount = value["UserDiscount"].GetInt64();
        m_userDiscountHasBeenSet = true;
    }

    if (value.HasMember("CommonDiscount") && !value["CommonDiscount"].IsNull())
    {
        if (!value["CommonDiscount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.CommonDiscount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonDiscount = value["CommonDiscount"].GetInt64();
        m_commonDiscountHasBeenSet = true;
    }

    if (value.HasMember("FinalDiscount") && !value["FinalDiscount"].IsNull())
    {
        if (!value["FinalDiscount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDetail.FinalDiscount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finalDiscount = value["FinalDiscount"].GetInt64();
        m_finalDiscountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userDiscount, allocator);
    }

    if (m_commonDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonDiscount, allocator);
    }

    if (m_finalDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finalDiscount, allocator);
    }

}


int64_t PolicyDetail::GetUserDiscount() const
{
    return m_userDiscount;
}

void PolicyDetail::SetUserDiscount(const int64_t& _userDiscount)
{
    m_userDiscount = _userDiscount;
    m_userDiscountHasBeenSet = true;
}

bool PolicyDetail::UserDiscountHasBeenSet() const
{
    return m_userDiscountHasBeenSet;
}

int64_t PolicyDetail::GetCommonDiscount() const
{
    return m_commonDiscount;
}

void PolicyDetail::SetCommonDiscount(const int64_t& _commonDiscount)
{
    m_commonDiscount = _commonDiscount;
    m_commonDiscountHasBeenSet = true;
}

bool PolicyDetail::CommonDiscountHasBeenSet() const
{
    return m_commonDiscountHasBeenSet;
}

int64_t PolicyDetail::GetFinalDiscount() const
{
    return m_finalDiscount;
}

void PolicyDetail::SetFinalDiscount(const int64_t& _finalDiscount)
{
    m_finalDiscount = _finalDiscount;
    m_finalDiscountHasBeenSet = true;
}

bool PolicyDetail::FinalDiscountHasBeenSet() const
{
    return m_finalDiscountHasBeenSet;
}

