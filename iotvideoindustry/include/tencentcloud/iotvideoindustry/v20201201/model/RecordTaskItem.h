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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 普通设备的录像详情
                */
                class RecordTaskItem : public AbstractModel
                {
                public:
                    RecordTaskItem();
                    ~RecordTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录像任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordTaskId 录像任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置录像任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordTaskId 录像任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordTaskId(const std::string& _recordTaskId);

                    /**
                     * 判断参数 RecordTaskId 是否已赋值
                     * @return RecordTaskId 是否已赋值
                     */
                    bool RecordTaskIdHasBeenSet() const;

                    /**
                     * 获取录制计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordPlanId 录制计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordPlanId() const;

                    /**
                     * 设置录制计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordPlanId 录制计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordPlanId(const std::string& _recordPlanId);

                    /**
                     * 判断参数 RecordPlanId 是否已赋值
                     * @return RecordPlanId 是否已赋值
                     */
                    bool RecordPlanIdHasBeenSet() const;

                    /**
                     * 获取本录制片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 本录制片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置本录制片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 本录制片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取本录制片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 本录制片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置本录制片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 本录制片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取录制模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 录制模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置录制模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventId 录制模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取本录制片段对应的录制文件URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoUrl 本录制片段对应的录制文件URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置本录制片段对应的录制文件URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VideoUrl 本录制片段对应的录制文件URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取本录制片段当前的录制状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordStatus 本录制片段当前的录制状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRecordStatus() const;

                    /**
                     * 设置本录制片段当前的录制状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordStatus 本录制片段当前的录制状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordStatus(const int64_t& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     */
                    bool RecordStatusHasBeenSet() const;

                    /**
                     * 获取场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneId 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SceneId 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSceneId(const int64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取告警ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarnId 告警ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetWarnId() const;

                    /**
                     * 设置告警ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WarnId 告警ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWarnId(const int64_t& _warnId);

                    /**
                     * 判断参数 WarnId 是否已赋值
                     * @return WarnId 是否已赋值
                     */
                    bool WarnIdHasBeenSet() const;

                    /**
                     * 获取录制id，NVR下属设备有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 录制id，NVR下属设备有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录制id，NVR下属设备有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordId 录制id，NVR下属设备有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 录像任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                    /**
                     * 录制计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordPlanId;
                    bool m_recordPlanIdHasBeenSet;

                    /**
                     * 本录制片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 本录制片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 录制模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 本录制片段对应的录制文件URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 本录制片段当前的录制状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 告警ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_warnId;
                    bool m_warnIdHasBeenSet;

                    /**
                     * 录制id，NVR下属设备有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_
