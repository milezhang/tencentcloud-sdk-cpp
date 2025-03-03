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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Coord.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 车牌信息
                */
                class CarPlateContent : public AbstractModel
                {
                public:
                    CarPlateContent();
                    ~CarPlateContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车牌信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Plate 车牌信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPlate() const;

                    /**
                     * 设置车牌信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Plate 车牌信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPlate(const std::string& _plate);

                    /**
                     * 判断参数 Plate 是否已赋值
                     * @return Plate 是否已赋值
                     */
                    bool PlateHasBeenSet() const;

                    /**
                     * 获取车牌颜色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color 车牌颜色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetColor() const;

                    /**
                     * 设置车牌颜色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Color 车牌颜色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取车牌类型；渣土车车牌遮挡时,该值为枚举值“异常”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 车牌类型；渣土车车牌遮挡时,该值为枚举值“异常”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置车牌类型；渣土车车牌遮挡时,该值为枚举值“异常”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 车牌类型；渣土车车牌遮挡时,该值为枚举值“异常”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlateLocation 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> GetPlateLocation() const;

                    /**
                     * 设置车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PlateLocation 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPlateLocation(const std::vector<Coord>& _plateLocation);

                    /**
                     * 判断参数 PlateLocation 是否已赋值
                     * @return PlateLocation 是否已赋值
                     */
                    bool PlateLocationHasBeenSet() const;

                private:

                    /**
                     * 车牌信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plate;
                    bool m_plateHasBeenSet;

                    /**
                     * 车牌颜色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 车牌类型；渣土车车牌遮挡时,该值为枚举值“异常”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 车牌在图片中的坐标信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_plateLocation;
                    bool m_plateLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CARPLATECONTENT_H_
