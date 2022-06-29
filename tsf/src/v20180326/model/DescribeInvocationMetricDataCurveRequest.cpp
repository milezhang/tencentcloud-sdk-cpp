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

#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataCurveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeInvocationMetricDataCurveRequest::DescribeInvocationMetricDataCurveRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_metricDimensionsHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeInvocationMetricDataCurveRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_metricDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDimensions.begin(); itr != m_metricDimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInvocationMetricDataCurveRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInvocationMetricDataCurveRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeInvocationMetricDataCurveRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInvocationMetricDataCurveRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeInvocationMetricDataCurveRequest::GetPeriod() const
{
    return m_period;
}

void DescribeInvocationMetricDataCurveRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<MetricDimension> DescribeInvocationMetricDataCurveRequest::GetMetricDimensions() const
{
    return m_metricDimensions;
}

void DescribeInvocationMetricDataCurveRequest::SetMetricDimensions(const vector<MetricDimension>& _metricDimensions)
{
    m_metricDimensions = _metricDimensions;
    m_metricDimensionsHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::MetricDimensionsHasBeenSet() const
{
    return m_metricDimensionsHasBeenSet;
}

vector<Metric> DescribeInvocationMetricDataCurveRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeInvocationMetricDataCurveRequest::SetMetrics(const vector<Metric>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeInvocationMetricDataCurveRequest::GetKind() const
{
    return m_kind;
}

void DescribeInvocationMetricDataCurveRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DescribeInvocationMetricDataCurveRequest::GetType() const
{
    return m_type;
}

void DescribeInvocationMetricDataCurveRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeInvocationMetricDataCurveRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


