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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 点播文件视频流信息
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流的码率，单位：bps。
                     * @return Bitrate 视频流的码率，单位：bps。
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流的码率，单位：bps。
                     * @param Bitrate 视频流的码率，单位：bps。
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频流的高度，单位：px。
                     * @return Height 视频流的高度，单位：px。
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流的高度，单位：px。
                     * @param Height 视频流的高度，单位：px。
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频流的宽度，单位：px。
                     * @return Width 视频流的宽度，单位：px。
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流的宽度，单位：px。
                     * @param Width 视频流的宽度，单位：px。
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频流的编码格式，例如 h264。
                     * @return Codec 视频流的编码格式，例如 h264。
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置视频流的编码格式，例如 h264。
                     * @param Codec 视频流的编码格式，例如 h264。
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取帧率，单位：hz。
                     * @return Fps 帧率，单位：hz。
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置帧率，单位：hz。
                     * @param Fps 帧率，单位：hz。
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColorPrimaries 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetColorPrimaries() const;

                    /**
                     * 设置色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ColorPrimaries 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetColorPrimaries(const std::string& _colorPrimaries);

                    /**
                     * 判断参数 ColorPrimaries 是否已赋值
                     * @return ColorPrimaries 是否已赋值
                     */
                    bool ColorPrimariesHasBeenSet() const;

                    /**
                     * 获取色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColorSpace 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetColorSpace() const;

                    /**
                     * 设置色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ColorSpace 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetColorSpace(const std::string& _colorSpace);

                    /**
                     * 判断参数 ColorSpace 是否已赋值
                     * @return ColorSpace 是否已赋值
                     */
                    bool ColorSpaceHasBeenSet() const;

                    /**
                     * 获取色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColorTransfer 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetColorTransfer() const;

                    /**
                     * 设置色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ColorTransfer 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetColorTransfer(const std::string& _colorTransfer);

                    /**
                     * 判断参数 ColorTransfer 是否已赋值
                     * @return ColorTransfer 是否已赋值
                     */
                    bool ColorTransferHasBeenSet() const;

                    /**
                     * 获取HDR类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HdrType HDR类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHdrType() const;

                    /**
                     * 设置HDR类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HdrType HDR类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHdrType(const std::string& _hdrType);

                    /**
                     * 判断参数 HdrType 是否已赋值
                     * @return HdrType 是否已赋值
                     */
                    bool HdrTypeHasBeenSet() const;

                private:

                    /**
                     * 视频流的码率，单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流的高度，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流的宽度，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频流的编码格式，例如 h264。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 帧率，单位：hz。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_colorPrimaries;
                    bool m_colorPrimariesHasBeenSet;

                    /**
                     * 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_colorSpace;
                    bool m_colorSpaceHasBeenSet;

                    /**
                     * 色彩空间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_colorTransfer;
                    bool m_colorTransferHasBeenSet;

                    /**
                     * HDR类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hdrType;
                    bool m_hdrTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_
