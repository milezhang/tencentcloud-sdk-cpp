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

#include <tencentcloud/cvm/v20170312/model/ReservedInstanceTypeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ReservedInstanceTypeItem::ReservedInstanceTypeItem() :
    m_instanceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_fpgaHasBeenSet(false),
    m_storageBlockHasBeenSet(false),
    m_networkCardHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_cpuModelNameHasBeenSet(false),
    m_ppsHasBeenSet(false),
    m_externalsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_pricesHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstanceTypeItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("Fpga") && !value["Fpga"].IsNull())
    {
        if (!value["Fpga"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Fpga` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fpga = value["Fpga"].GetUint64();
        m_fpgaHasBeenSet = true;
    }

    if (value.HasMember("StorageBlock") && !value["StorageBlock"].IsNull())
    {
        if (!value["StorageBlock"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.StorageBlock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageBlock = value["StorageBlock"].GetUint64();
        m_storageBlockHasBeenSet = true;
    }

    if (value.HasMember("NetworkCard") && !value["NetworkCard"].IsNull())
    {
        if (!value["NetworkCard"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.NetworkCard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCard = value["NetworkCard"].GetUint64();
        m_networkCardHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.MaxBandwidth` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetDouble();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("CpuModelName") && !value["CpuModelName"].IsNull())
    {
        if (!value["CpuModelName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.CpuModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuModelName = string(value["CpuModelName"].GetString());
        m_cpuModelNameHasBeenSet = true;
    }

    if (value.HasMember("Pps") && !value["Pps"].IsNull())
    {
        if (!value["Pps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Pps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pps = value["Pps"].GetUint64();
        m_ppsHasBeenSet = true;
    }

    if (value.HasMember("Externals") && !value["Externals"].IsNull())
    {
        if (!value["Externals"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Externals` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externals.Deserialize(value["Externals"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Prices") && !value["Prices"].IsNull())
    {
        if (!value["Prices"].IsArray())
            return CoreInternalOutcome(Error("response `ReservedInstanceTypeItem.Prices` is not array type"));

        const Value &tmpValue = value["Prices"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReservedInstancePriceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prices.push_back(item);
        }
        m_pricesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstanceTypeItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_gpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_fpgaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fpga";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpga, allocator);
    }

    if (m_storageBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageBlock, allocator);
    }

    if (m_networkCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCard, allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuModelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cpuModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_ppsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pps, allocator);
    }

    if (m_externalsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Externals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_externals.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_pricesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Prices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prices.begin(); itr != m_prices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ReservedInstanceTypeItem::GetInstanceType() const
{
    return m_instanceType;
}

void ReservedInstanceTypeItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ReservedInstanceTypeItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetCpu() const
{
    return m_cpu;
}

void ReservedInstanceTypeItem::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ReservedInstanceTypeItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetMemory() const
{
    return m_memory;
}

void ReservedInstanceTypeItem::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ReservedInstanceTypeItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetGpu() const
{
    return m_gpu;
}

void ReservedInstanceTypeItem::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ReservedInstanceTypeItem::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetFpga() const
{
    return m_fpga;
}

void ReservedInstanceTypeItem::SetFpga(const uint64_t& _fpga)
{
    m_fpga = _fpga;
    m_fpgaHasBeenSet = true;
}

bool ReservedInstanceTypeItem::FpgaHasBeenSet() const
{
    return m_fpgaHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetStorageBlock() const
{
    return m_storageBlock;
}

void ReservedInstanceTypeItem::SetStorageBlock(const uint64_t& _storageBlock)
{
    m_storageBlock = _storageBlock;
    m_storageBlockHasBeenSet = true;
}

bool ReservedInstanceTypeItem::StorageBlockHasBeenSet() const
{
    return m_storageBlockHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetNetworkCard() const
{
    return m_networkCard;
}

void ReservedInstanceTypeItem::SetNetworkCard(const uint64_t& _networkCard)
{
    m_networkCard = _networkCard;
    m_networkCardHasBeenSet = true;
}

bool ReservedInstanceTypeItem::NetworkCardHasBeenSet() const
{
    return m_networkCardHasBeenSet;
}

double ReservedInstanceTypeItem::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void ReservedInstanceTypeItem::SetMaxBandwidth(const double& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool ReservedInstanceTypeItem::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

string ReservedInstanceTypeItem::GetFrequency() const
{
    return m_frequency;
}

void ReservedInstanceTypeItem::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool ReservedInstanceTypeItem::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string ReservedInstanceTypeItem::GetCpuModelName() const
{
    return m_cpuModelName;
}

void ReservedInstanceTypeItem::SetCpuModelName(const string& _cpuModelName)
{
    m_cpuModelName = _cpuModelName;
    m_cpuModelNameHasBeenSet = true;
}

bool ReservedInstanceTypeItem::CpuModelNameHasBeenSet() const
{
    return m_cpuModelNameHasBeenSet;
}

uint64_t ReservedInstanceTypeItem::GetPps() const
{
    return m_pps;
}

void ReservedInstanceTypeItem::SetPps(const uint64_t& _pps)
{
    m_pps = _pps;
    m_ppsHasBeenSet = true;
}

bool ReservedInstanceTypeItem::PpsHasBeenSet() const
{
    return m_ppsHasBeenSet;
}

Externals ReservedInstanceTypeItem::GetExternals() const
{
    return m_externals;
}

void ReservedInstanceTypeItem::SetExternals(const Externals& _externals)
{
    m_externals = _externals;
    m_externalsHasBeenSet = true;
}

bool ReservedInstanceTypeItem::ExternalsHasBeenSet() const
{
    return m_externalsHasBeenSet;
}

string ReservedInstanceTypeItem::GetRemark() const
{
    return m_remark;
}

void ReservedInstanceTypeItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ReservedInstanceTypeItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<ReservedInstancePriceItem> ReservedInstanceTypeItem::GetPrices() const
{
    return m_prices;
}

void ReservedInstanceTypeItem::SetPrices(const vector<ReservedInstancePriceItem>& _prices)
{
    m_prices = _prices;
    m_pricesHasBeenSet = true;
}

bool ReservedInstanceTypeItem::PricesHasBeenSet() const
{
    return m_pricesHasBeenSet;
}

