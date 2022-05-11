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

#include <tencentcloud/iotcloud/v20210408/model/CancelDeviceFirmwareTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

CancelDeviceFirmwareTaskRequest::CancelDeviceFirmwareTaskRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string CancelDeviceFirmwareTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelDeviceFirmwareTaskRequest::GetProductId() const
{
    return m_productId;
}

void CancelDeviceFirmwareTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CancelDeviceFirmwareTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CancelDeviceFirmwareTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CancelDeviceFirmwareTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CancelDeviceFirmwareTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CancelDeviceFirmwareTaskRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void CancelDeviceFirmwareTaskRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool CancelDeviceFirmwareTaskRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

uint64_t CancelDeviceFirmwareTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void CancelDeviceFirmwareTaskRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CancelDeviceFirmwareTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


