/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2021, Open AI Lab
 * Author: lswang@openailab.com
 */

#pragma once

extern "C" {
#include "device/device.h"
#include "graph/subgraph.h"

int odla_dev_init(struct device* dev);
int odla_dev_prerun(struct device* dev, struct subgraph* subgraph, void* options);
int odla_dev_run(struct device* dev, struct subgraph* subgraph);
int odla_dev_postrun(struct device* dev, struct subgraph* subgraph);
int odla_dev_release(struct device* dev);
}
