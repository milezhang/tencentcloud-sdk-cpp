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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_

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
                * DescribePayType请求参数结构体
                */
                class DescribePayTypeRequest : public AbstractModel
                {
                public:
                    DescribePayTypeRequest();
                    ~DescribePayTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定服务地域查询
mainland：境内计费方式查询
overseas：境外计费方式查询
未填充时默认为 mainland
                     * @return Area 指定服务地域查询
mainland：境内计费方式查询
overseas：境外计费方式查询
未填充时默认为 mainland
                     */
                    std::string GetArea() const;

                    /**
                     * 设置指定服务地域查询
mainland：境内计费方式查询
overseas：境外计费方式查询
未填充时默认为 mainland
                     * @param Area 指定服务地域查询
mainland：境内计费方式查询
overseas：境外计费方式查询
未填充时默认为 mainland
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取指定查询的产品数据，可选为cdn或者ecdn，默认为cdn
                     * @return Product 指定查询的产品数据，可选为cdn或者ecdn，默认为cdn
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置指定查询的产品数据，可选为cdn或者ecdn，默认为cdn
                     * @param Product 指定查询的产品数据，可选为cdn或者ecdn，默认为cdn
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 指定服务地域查询
mainland：境内计费方式查询
overseas：境外计费方式查询
未填充时默认为 mainland
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 指定查询的产品数据，可选为cdn或者ecdn，默认为cdn
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
