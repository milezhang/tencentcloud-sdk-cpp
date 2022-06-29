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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSqlTemplateRequest::DescribeSqlTemplateRequest() :
    m_instanceIdHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeSqlTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSqlTemplateRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSqlTemplateRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSqlTemplateRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSqlTemplateRequest::GetSchema() const
{
    return m_schema;
}

void DescribeSqlTemplateRequest::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool DescribeSqlTemplateRequest::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DescribeSqlTemplateRequest::GetSqlText() const
{
    return m_sqlText;
}

void DescribeSqlTemplateRequest::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool DescribeSqlTemplateRequest::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DescribeSqlTemplateRequest::GetProduct() const
{
    return m_product;
}

void DescribeSqlTemplateRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSqlTemplateRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


