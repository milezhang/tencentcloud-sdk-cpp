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

#include <tencentcloud/cynosdb/v20190107/model/AddInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AddInstancesRequest::AddInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_readOnlyCountHasBeenSet(false),
    m_instanceGrpIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_dealModeHasBeenSet(false)
{
}

string AddInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_readOnlyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyCount, allocator);
    }

    if (m_instanceGrpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGrpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceGrpId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t AddInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void AddInstancesRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool AddInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t AddInstancesRequest::GetMemory() const
{
    return m_memory;
}

void AddInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool AddInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t AddInstancesRequest::GetReadOnlyCount() const
{
    return m_readOnlyCount;
}

void AddInstancesRequest::SetReadOnlyCount(const int64_t& _readOnlyCount)
{
    m_readOnlyCount = _readOnlyCount;
    m_readOnlyCountHasBeenSet = true;
}

bool AddInstancesRequest::ReadOnlyCountHasBeenSet() const
{
    return m_readOnlyCountHasBeenSet;
}

string AddInstancesRequest::GetInstanceGrpId() const
{
    return m_instanceGrpId;
}

void AddInstancesRequest::SetInstanceGrpId(const string& _instanceGrpId)
{
    m_instanceGrpId = _instanceGrpId;
    m_instanceGrpIdHasBeenSet = true;
}

bool AddInstancesRequest::InstanceGrpIdHasBeenSet() const
{
    return m_instanceGrpIdHasBeenSet;
}

string AddInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void AddInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AddInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AddInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void AddInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool AddInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t AddInstancesRequest::GetPort() const
{
    return m_port;
}

void AddInstancesRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AddInstancesRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AddInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void AddInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AddInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t AddInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void AddInstancesRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool AddInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

string AddInstancesRequest::GetDbType() const
{
    return m_dbType;
}

void AddInstancesRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool AddInstancesRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string AddInstancesRequest::GetOrderSource() const
{
    return m_orderSource;
}

void AddInstancesRequest::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool AddInstancesRequest::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

int64_t AddInstancesRequest::GetDealMode() const
{
    return m_dealMode;
}

void AddInstancesRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool AddInstancesRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}


