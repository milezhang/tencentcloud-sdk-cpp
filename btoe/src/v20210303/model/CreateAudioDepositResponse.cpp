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

#include <tencentcloud/btoe/v20210303/model/CreateAudioDepositResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Btoe::V20210303::Model;
using namespace rapidjson;
using namespace std;

CreateAudioDepositResponse::CreateAudioDepositResponse() :
    m_businessIdHasBeenSet(false),
    m_evidenceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateAudioDepositResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BusinessId") && !rsp["BusinessId"].IsNull())
    {
        if (!rsp["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(rsp["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceId") && !rsp["EvidenceId"].IsNull())
    {
        if (!rsp["EvidenceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EvidenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceId = string(rsp["EvidenceId"].GetString());
        m_evidenceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateAudioDepositResponse::GetBusinessId() const
{
    return m_businessId;
}

bool CreateAudioDepositResponse::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CreateAudioDepositResponse::GetEvidenceId() const
{
    return m_evidenceId;
}

bool CreateAudioDepositResponse::EvidenceIdHasBeenSet() const
{
    return m_evidenceIdHasBeenSet;
}


