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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENECHANNELSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENECHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeBindSceneChannels返回参数结构体
                */
                class DescribeBindSceneChannelsResponse : public AbstractModel
                {
                public:
                    DescribeBindSceneChannelsResponse();
                    ~DescribeBindSceneChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取通道列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 通道列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 通道列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelItem> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENECHANNELSRESPONSE_H_
