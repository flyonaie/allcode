/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include <memory>
#include <string>
#include <thread>
#include <vector>
#include <cstdio>
#include "gtest/gtest.h"

#include "cyber/common/global_data.h"
#include "cyber/common/util.h"
#include "cyber/proto/role_attributes.pb.h"
// #include "cyber/proto/unit_test.pb.h"
// #include "cyber/transport/receiver/shm_receiver.h"
// #include "cyber/transport/transmitter/shm_transmitter.h"
// #include "cyber/transport/transport.h"

// using TransmitterPtr = std::shared_ptr<Transmitter<proto::UnitTest>>;
// using ReceiverPtr = std::shared_ptr<Receiver<proto::UnitTest>>;
// using apollo::cyber::transport::ShmTransmitter;
// using apollo::cyber::proto::UnitTest;
using namespace apollo::cyber;
// using namespace apollo::cyber::proto;
// using apollo::cyber::proto::RoleAttributes;

namespace N1
{
  int a = 10;
  int b = 23;
  int Add(int left, int right)
  {
    return left + right;
  }

  namespace N2
  {
    int c = 34;
    int d = 32;
    int Sub(int left, int right)
    {
      return left - right;
    }
  }
}

using namespace N1;

int main()
{
  apollo::cyber::proto::RoleAttributes attr;
  std::string channel_name_ = "shm_channel";
  // attr.set_host_name(common::GlobalData::Instance()->HostName());
  // attr.set_host_ip(common::GlobalData::Instance()->HostIp());
  // attr.set_channel_name(channel_name_);
  // attr.set_channel_id(common::Hash(channel_name_));
  // auto transmitter =
  //     std::make_shared<ShmTransmitter<UnitTest>>(attr);
  // ReceiverPtr receiver =
  //     std::make_shared<ShmReceiver<proto::UnitTest>>(attr, nullptr);

  printf("GlobalData::HostIp = %s\n", common::GlobalData::Instance()->HostIp());
  printf("Hash(channel_name_() = %d\n", (uint32_t)common::Hash(channel_name_));
  printf("N1.a) = %u\n", (uint32_t)N2::c);
  return 0;
}