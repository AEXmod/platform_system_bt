/******************************************************************************
 *
 *  Copyright (C) 2015 Google, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#pragma once

#include <stdbool.h>

#include "btcore/include/bdaddr.h"

typedef enum {
  // Disable secure connections
  // This is for pre BT 4.1/2 devices that do not handle secure mode
  // very well.
  INTEROP_DISABLE_LE_SECURE_CONNECTIONS
} interop_feature_t;

// Check if a given |addr| matches a known interoperability workaround as identified
// by the |interop_feature_t| enum. This API is used for simple address based lookups
// where more information is not available. No look-ups or random address resolution
// is performed on |addr|.
bool interop_match(const interop_feature_t feature, const bt_bdaddr_t *addr);
