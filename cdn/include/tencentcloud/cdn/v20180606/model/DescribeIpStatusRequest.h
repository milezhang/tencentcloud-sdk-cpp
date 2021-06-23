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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeIpStatus请求参数结构体
                */
                class DescribeIpStatusRequest : public AbstractModel
                {
                public:
                    DescribeIpStatusRequest();
                    ~DescribeIpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名
                     * @return Domain 加速域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名
                     * @param Domain 加速域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     * @return Layer 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     * @param Layer 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取查询区域：
mainland: 国内节点
overseas: 海外节点
global: 全球节点
                     * @return Area 查询区域：
mainland: 国内节点
overseas: 海外节点
global: 全球节点
                     */
                    std::string GetArea() const;

                    /**
                     * 设置查询区域：
mainland: 国内节点
overseas: 海外节点
global: 全球节点
                     * @param Area 查询区域：
mainland: 国内节点
overseas: 海外节点
global: 全球节点
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取是否以IP段的格式返回。
                     * @return Segment 是否以IP段的格式返回。
                     */
                    bool GetSegment() const;

                    /**
                     * 设置是否以IP段的格式返回。
                     * @param Segment 是否以IP段的格式返回。
                     */
                    void SetSegment(const bool& _segment);

                    /**
                     * 判断参数 Segment 是否已赋值
                     * @return Segment 是否已赋值
                     */
                    bool SegmentHasBeenSet() const;

                private:

                    /**
                     * 加速域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 节点类型：
edge：表示边缘节点
last：表示回源层节点
不填充情况下，默认返回边缘节点信息
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * 查询区域：
mainland: 国内节点
overseas: 海外节点
global: 全球节点
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否以IP段的格式返回。
                     */
                    bool m_segment;
                    bool m_segmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
