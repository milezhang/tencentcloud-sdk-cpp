#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ssl_public_header
  include/tencentcloud/ssl/v20191205/SslClient.h
  )

set(ssl_public_header_model
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/ManagerInfo.h
  include/tencentcloud/ssl/v20191205/model/CompleteCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/SubmitAuditManagerResponse.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h
  include/tencentcloud/ssl/v20191205/model/Certificates.h
  include/tencentcloud/ssl/v20191205/model/CertificateExtra.h
  include/tencentcloud/ssl/v20191205/model/CompanyInfo.h
  include/tencentcloud/ssl/v20191205/model/DescribeManagersResponse.h
  include/tencentcloud/ssl/v20191205/model/RootCertificates.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/HostCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadConfirmLetterRequest.h
  include/tencentcloud/ssl/v20191205/model/OperationLog.h
  include/tencentcloud/ssl/v20191205/model/VerifyManagerResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/Tags.h
  include/tencentcloud/ssl/v20191205/model/SubmitAuditManagerRequest.h
  include/tencentcloud/ssl/v20191205/model/DeleteManagerRequest.h
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/UploadRevokeLetterResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesRequest.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadRevokeLetterRequest.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/RevokeCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/DeployedResources.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/CheckCertificateChainResponse.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h
  include/tencentcloud/ssl/v20191205/model/CertHostingInfo.h
  include/tencentcloud/ssl/v20191205/model/DvAuths.h
  include/tencentcloud/ssl/v20191205/model/HostCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeManagerDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/DvAuthDetail.h
  include/tencentcloud/ssl/v20191205/model/ProjectInfo.h
  include/tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h
  include/tencentcloud/ssl/v20191205/model/DeleteManagerResponse.h
  include/tencentcloud/ssl/v20191205/model/VerifyManagerRequest.h
  include/tencentcloud/ssl/v20191205/model/RevokeDomainValidateAuths.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/CheckCertificateChainRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeManagerDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/ManagerStatusInfo.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeManagersRequest.h
  include/tencentcloud/ssl/v20191205/model/CompleteCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/RevokeCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/SubmittedData.h
  )

set(ssl_src
  src/v20191205/SslClient.cpp
  src/v20191205/model/ApplyCertificateResponse.cpp
  src/v20191205/model/ManagerInfo.cpp
  src/v20191205/model/CompleteCertificateRequest.cpp
  src/v20191205/model/UploadCertificateRequest.cpp
  src/v20191205/model/DeleteCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateOperateLogsResponse.cpp
  src/v20191205/model/ModifyCertificateAliasRequest.cpp
  src/v20191205/model/CommitCertificateInformationRequest.cpp
  src/v20191205/model/DownloadCertificateResponse.cpp
  src/v20191205/model/ReplaceCertificateResponse.cpp
  src/v20191205/model/SubmitAuditManagerResponse.cpp
  src/v20191205/model/DownloadCertificateRequest.cpp
  src/v20191205/model/CancelCertificateOrderRequest.cpp
  src/v20191205/model/ModifyCertificateProjectResponse.cpp
  src/v20191205/model/Certificates.cpp
  src/v20191205/model/CertificateExtra.cpp
  src/v20191205/model/CompanyInfo.cpp
  src/v20191205/model/DescribeManagersResponse.cpp
  src/v20191205/model/RootCertificates.cpp
  src/v20191205/model/DescribeCertificateResponse.cpp
  src/v20191205/model/HostCertificateResponse.cpp
  src/v20191205/model/UploadConfirmLetterRequest.cpp
  src/v20191205/model/OperationLog.cpp
  src/v20191205/model/VerifyManagerResponse.cpp
  src/v20191205/model/DescribeCertificateDetailRequest.cpp
  src/v20191205/model/Tags.cpp
  src/v20191205/model/SubmitAuditManagerRequest.cpp
  src/v20191205/model/DeleteManagerRequest.cpp
  src/v20191205/model/ApplyCertificateRequest.cpp
  src/v20191205/model/ReplaceCertificateRequest.cpp
  src/v20191205/model/UploadRevokeLetterResponse.cpp
  src/v20191205/model/DescribeDeployedResourcesRequest.cpp
  src/v20191205/model/CreateCertificateResponse.cpp
  src/v20191205/model/UploadRevokeLetterRequest.cpp
  src/v20191205/model/DeleteCertificateResponse.cpp
  src/v20191205/model/RevokeCertificateResponse.cpp
  src/v20191205/model/DeployedResources.cpp
  src/v20191205/model/DescribeCertificateDetailResponse.cpp
  src/v20191205/model/CheckCertificateChainResponse.cpp
  src/v20191205/model/ModifyCertificateProjectRequest.cpp
  src/v20191205/model/CertHostingInfo.cpp
  src/v20191205/model/DvAuths.cpp
  src/v20191205/model/HostCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateRequest.cpp
  src/v20191205/model/DescribeManagerDetailRequest.cpp
  src/v20191205/model/DvAuthDetail.cpp
  src/v20191205/model/ProjectInfo.cpp
  src/v20191205/model/DescribeDeployedResourcesResponse.cpp
  src/v20191205/model/DescribeCertificateOperateLogsRequest.cpp
  src/v20191205/model/CancelCertificateOrderResponse.cpp
  src/v20191205/model/CreateCertificateRequest.cpp
  src/v20191205/model/DescribeCertificatesResponse.cpp
  src/v20191205/model/CommitCertificateInformationResponse.cpp
  src/v20191205/model/UploadConfirmLetterResponse.cpp
  src/v20191205/model/DeleteManagerResponse.cpp
  src/v20191205/model/VerifyManagerRequest.cpp
  src/v20191205/model/RevokeDomainValidateAuths.cpp
  src/v20191205/model/UploadCertificateResponse.cpp
  src/v20191205/model/CheckCertificateChainRequest.cpp
  src/v20191205/model/ModifyCertificateAliasResponse.cpp
  src/v20191205/model/DescribeManagerDetailResponse.cpp
  src/v20191205/model/ManagerStatusInfo.cpp
  src/v20191205/model/SubmitCertificateInformationRequest.cpp
  src/v20191205/model/DescribeCertificatesRequest.cpp
  src/v20191205/model/DescribeManagersRequest.cpp
  src/v20191205/model/CompleteCertificateResponse.cpp
  src/v20191205/model/SubmitCertificateInformationResponse.cpp
  src/v20191205/model/RevokeCertificateRequest.cpp
  src/v20191205/model/SubmittedData.cpp
  )

set(ssl_include
    include/tencentcloud/ssl
  )

add_library(ssl ${LIB_TYPE}
  ${ssl_public_header}
  ${ssl_public_header_model}
  ${ssl_src})

set_target_properties(ssl
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssl
  )

target_include_directories(ssl
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssl
  core)

#install(FILES ${ssl_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205)
#install(FILES ${ssl_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205/model)
install(DIRECTORY ${ssl_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssl
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
