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

#include <tencentcloud/ocr/v20181119/model/VehicleInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VehicleInvoiceInfo::VehicleInvoiceInfo() :
    m_carTypeHasBeenSet(false),
    m_plateModelHasBeenSet(false),
    m_produceAddressHasBeenSet(false),
    m_certificateNoHasBeenSet(false),
    m_importNoHasBeenSet(false),
    m_vinNoHasBeenSet(false),
    m_payTaxesNoHasBeenSet(false),
    m_tonnageHasBeenSet(false),
    m_limitCountHasBeenSet(false),
    m_engineNoHasBeenSet(false),
    m_bizCheckFormNoHasBeenSet(false),
    m_taxtationOrgCodeHasBeenSet(false),
    m_taxtationOrgNameHasBeenSet(false),
    m_motorTaxRateHasBeenSet(false),
    m_motorBankNameHasBeenSet(false),
    m_motorBankAccountHasBeenSet(false)
{
}

CoreInternalOutcome VehicleInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CarType") && !value["CarType"].IsNull())
    {
        if (!value["CarType"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.CarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carType = string(value["CarType"].GetString());
        m_carTypeHasBeenSet = true;
    }

    if (value.HasMember("PlateModel") && !value["PlateModel"].IsNull())
    {
        if (!value["PlateModel"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.PlateModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateModel = string(value["PlateModel"].GetString());
        m_plateModelHasBeenSet = true;
    }

    if (value.HasMember("ProduceAddress") && !value["ProduceAddress"].IsNull())
    {
        if (!value["ProduceAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.ProduceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceAddress = string(value["ProduceAddress"].GetString());
        m_produceAddressHasBeenSet = true;
    }

    if (value.HasMember("CertificateNo") && !value["CertificateNo"].IsNull())
    {
        if (!value["CertificateNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.CertificateNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateNo = string(value["CertificateNo"].GetString());
        m_certificateNoHasBeenSet = true;
    }

    if (value.HasMember("ImportNo") && !value["ImportNo"].IsNull())
    {
        if (!value["ImportNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.ImportNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importNo = string(value["ImportNo"].GetString());
        m_importNoHasBeenSet = true;
    }

    if (value.HasMember("VinNo") && !value["VinNo"].IsNull())
    {
        if (!value["VinNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.VinNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vinNo = string(value["VinNo"].GetString());
        m_vinNoHasBeenSet = true;
    }

    if (value.HasMember("PayTaxesNo") && !value["PayTaxesNo"].IsNull())
    {
        if (!value["PayTaxesNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.PayTaxesNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTaxesNo = string(value["PayTaxesNo"].GetString());
        m_payTaxesNoHasBeenSet = true;
    }

    if (value.HasMember("Tonnage") && !value["Tonnage"].IsNull())
    {
        if (!value["Tonnage"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.Tonnage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tonnage = string(value["Tonnage"].GetString());
        m_tonnageHasBeenSet = true;
    }

    if (value.HasMember("LimitCount") && !value["LimitCount"].IsNull())
    {
        if (!value["LimitCount"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.LimitCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitCount = string(value["LimitCount"].GetString());
        m_limitCountHasBeenSet = true;
    }

    if (value.HasMember("EngineNo") && !value["EngineNo"].IsNull())
    {
        if (!value["EngineNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.EngineNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNo = string(value["EngineNo"].GetString());
        m_engineNoHasBeenSet = true;
    }

    if (value.HasMember("BizCheckFormNo") && !value["BizCheckFormNo"].IsNull())
    {
        if (!value["BizCheckFormNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.BizCheckFormNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizCheckFormNo = string(value["BizCheckFormNo"].GetString());
        m_bizCheckFormNoHasBeenSet = true;
    }

    if (value.HasMember("TaxtationOrgCode") && !value["TaxtationOrgCode"].IsNull())
    {
        if (!value["TaxtationOrgCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.TaxtationOrgCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxtationOrgCode = string(value["TaxtationOrgCode"].GetString());
        m_taxtationOrgCodeHasBeenSet = true;
    }

    if (value.HasMember("TaxtationOrgName") && !value["TaxtationOrgName"].IsNull())
    {
        if (!value["TaxtationOrgName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.TaxtationOrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxtationOrgName = string(value["TaxtationOrgName"].GetString());
        m_taxtationOrgNameHasBeenSet = true;
    }

    if (value.HasMember("MotorTaxRate") && !value["MotorTaxRate"].IsNull())
    {
        if (!value["MotorTaxRate"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.MotorTaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_motorTaxRate = string(value["MotorTaxRate"].GetString());
        m_motorTaxRateHasBeenSet = true;
    }

    if (value.HasMember("MotorBankName") && !value["MotorBankName"].IsNull())
    {
        if (!value["MotorBankName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.MotorBankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_motorBankName = string(value["MotorBankName"].GetString());
        m_motorBankNameHasBeenSet = true;
    }

    if (value.HasMember("MotorBankAccount") && !value["MotorBankAccount"].IsNull())
    {
        if (!value["MotorBankAccount"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleInvoiceInfo.MotorBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_motorBankAccount = string(value["MotorBankAccount"].GetString());
        m_motorBankAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VehicleInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_carTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carType.c_str(), allocator).Move(), allocator);
    }

    if (m_plateModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateModel.c_str(), allocator).Move(), allocator);
    }

    if (m_produceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateNo.c_str(), allocator).Move(), allocator);
    }

    if (m_importNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importNo.c_str(), allocator).Move(), allocator);
    }

    if (m_vinNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VinNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vinNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payTaxesNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTaxesNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTaxesNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tonnageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tonnage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tonnage.c_str(), allocator).Move(), allocator);
    }

    if (m_limitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitCount.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bizCheckFormNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCheckFormNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizCheckFormNo.c_str(), allocator).Move(), allocator);
    }

    if (m_taxtationOrgCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxtationOrgCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxtationOrgCode.c_str(), allocator).Move(), allocator);
    }

    if (m_taxtationOrgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxtationOrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxtationOrgName.c_str(), allocator).Move(), allocator);
    }

    if (m_motorTaxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotorTaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_motorTaxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_motorBankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotorBankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_motorBankName.c_str(), allocator).Move(), allocator);
    }

    if (m_motorBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotorBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_motorBankAccount.c_str(), allocator).Move(), allocator);
    }

}


string VehicleInvoiceInfo::GetCarType() const
{
    return m_carType;
}

void VehicleInvoiceInfo::SetCarType(const string& _carType)
{
    m_carType = _carType;
    m_carTypeHasBeenSet = true;
}

bool VehicleInvoiceInfo::CarTypeHasBeenSet() const
{
    return m_carTypeHasBeenSet;
}

string VehicleInvoiceInfo::GetPlateModel() const
{
    return m_plateModel;
}

void VehicleInvoiceInfo::SetPlateModel(const string& _plateModel)
{
    m_plateModel = _plateModel;
    m_plateModelHasBeenSet = true;
}

bool VehicleInvoiceInfo::PlateModelHasBeenSet() const
{
    return m_plateModelHasBeenSet;
}

string VehicleInvoiceInfo::GetProduceAddress() const
{
    return m_produceAddress;
}

void VehicleInvoiceInfo::SetProduceAddress(const string& _produceAddress)
{
    m_produceAddress = _produceAddress;
    m_produceAddressHasBeenSet = true;
}

bool VehicleInvoiceInfo::ProduceAddressHasBeenSet() const
{
    return m_produceAddressHasBeenSet;
}

string VehicleInvoiceInfo::GetCertificateNo() const
{
    return m_certificateNo;
}

void VehicleInvoiceInfo::SetCertificateNo(const string& _certificateNo)
{
    m_certificateNo = _certificateNo;
    m_certificateNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::CertificateNoHasBeenSet() const
{
    return m_certificateNoHasBeenSet;
}

string VehicleInvoiceInfo::GetImportNo() const
{
    return m_importNo;
}

void VehicleInvoiceInfo::SetImportNo(const string& _importNo)
{
    m_importNo = _importNo;
    m_importNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::ImportNoHasBeenSet() const
{
    return m_importNoHasBeenSet;
}

string VehicleInvoiceInfo::GetVinNo() const
{
    return m_vinNo;
}

void VehicleInvoiceInfo::SetVinNo(const string& _vinNo)
{
    m_vinNo = _vinNo;
    m_vinNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::VinNoHasBeenSet() const
{
    return m_vinNoHasBeenSet;
}

string VehicleInvoiceInfo::GetPayTaxesNo() const
{
    return m_payTaxesNo;
}

void VehicleInvoiceInfo::SetPayTaxesNo(const string& _payTaxesNo)
{
    m_payTaxesNo = _payTaxesNo;
    m_payTaxesNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::PayTaxesNoHasBeenSet() const
{
    return m_payTaxesNoHasBeenSet;
}

string VehicleInvoiceInfo::GetTonnage() const
{
    return m_tonnage;
}

void VehicleInvoiceInfo::SetTonnage(const string& _tonnage)
{
    m_tonnage = _tonnage;
    m_tonnageHasBeenSet = true;
}

bool VehicleInvoiceInfo::TonnageHasBeenSet() const
{
    return m_tonnageHasBeenSet;
}

string VehicleInvoiceInfo::GetLimitCount() const
{
    return m_limitCount;
}

void VehicleInvoiceInfo::SetLimitCount(const string& _limitCount)
{
    m_limitCount = _limitCount;
    m_limitCountHasBeenSet = true;
}

bool VehicleInvoiceInfo::LimitCountHasBeenSet() const
{
    return m_limitCountHasBeenSet;
}

string VehicleInvoiceInfo::GetEngineNo() const
{
    return m_engineNo;
}

void VehicleInvoiceInfo::SetEngineNo(const string& _engineNo)
{
    m_engineNo = _engineNo;
    m_engineNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::EngineNoHasBeenSet() const
{
    return m_engineNoHasBeenSet;
}

string VehicleInvoiceInfo::GetBizCheckFormNo() const
{
    return m_bizCheckFormNo;
}

void VehicleInvoiceInfo::SetBizCheckFormNo(const string& _bizCheckFormNo)
{
    m_bizCheckFormNo = _bizCheckFormNo;
    m_bizCheckFormNoHasBeenSet = true;
}

bool VehicleInvoiceInfo::BizCheckFormNoHasBeenSet() const
{
    return m_bizCheckFormNoHasBeenSet;
}

string VehicleInvoiceInfo::GetTaxtationOrgCode() const
{
    return m_taxtationOrgCode;
}

void VehicleInvoiceInfo::SetTaxtationOrgCode(const string& _taxtationOrgCode)
{
    m_taxtationOrgCode = _taxtationOrgCode;
    m_taxtationOrgCodeHasBeenSet = true;
}

bool VehicleInvoiceInfo::TaxtationOrgCodeHasBeenSet() const
{
    return m_taxtationOrgCodeHasBeenSet;
}

string VehicleInvoiceInfo::GetTaxtationOrgName() const
{
    return m_taxtationOrgName;
}

void VehicleInvoiceInfo::SetTaxtationOrgName(const string& _taxtationOrgName)
{
    m_taxtationOrgName = _taxtationOrgName;
    m_taxtationOrgNameHasBeenSet = true;
}

bool VehicleInvoiceInfo::TaxtationOrgNameHasBeenSet() const
{
    return m_taxtationOrgNameHasBeenSet;
}

string VehicleInvoiceInfo::GetMotorTaxRate() const
{
    return m_motorTaxRate;
}

void VehicleInvoiceInfo::SetMotorTaxRate(const string& _motorTaxRate)
{
    m_motorTaxRate = _motorTaxRate;
    m_motorTaxRateHasBeenSet = true;
}

bool VehicleInvoiceInfo::MotorTaxRateHasBeenSet() const
{
    return m_motorTaxRateHasBeenSet;
}

string VehicleInvoiceInfo::GetMotorBankName() const
{
    return m_motorBankName;
}

void VehicleInvoiceInfo::SetMotorBankName(const string& _motorBankName)
{
    m_motorBankName = _motorBankName;
    m_motorBankNameHasBeenSet = true;
}

bool VehicleInvoiceInfo::MotorBankNameHasBeenSet() const
{
    return m_motorBankNameHasBeenSet;
}

string VehicleInvoiceInfo::GetMotorBankAccount() const
{
    return m_motorBankAccount;
}

void VehicleInvoiceInfo::SetMotorBankAccount(const string& _motorBankAccount)
{
    m_motorBankAccount = _motorBankAccount;
    m_motorBankAccountHasBeenSet = true;
}

bool VehicleInvoiceInfo::MotorBankAccountHasBeenSet() const
{
    return m_motorBankAccountHasBeenSet;
}

