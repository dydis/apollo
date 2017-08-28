/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
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

#include "modules/drivers/sensor_gflags.h"

// System gflags
DEFINE_string(node_namespace, "/apollo/drivers/mobileye", "Global node namespace");
DEFINE_string(node_name, "mobileye", "The mobileye module name in proto");
DEFINE_string(hmi_name, "mobileye", "Module name in HMI");

// data file
DEFINE_string(sensor_conf_file, "modules/canbus/conf/canbus_conf_dev.pb.txt",
              "Default canbus conf file");

// Canbus gflags
DEFINE_double(sensor_freq, 100, "Sensor feedback timer frequency.");