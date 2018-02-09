//
// Copyright 2017 Animal Logic
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.//
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#pragma once

#include "pxr/pxr.h"

PXR_NAMESPACE_OPEN_SCOPE

// forward declare usd types
class GfMatrix4d;
class SdfPath;
class SdfValueTypeName;
class TfToken;
class UsdAttribute;
class UsdPrim;
class UsdGeomCamera;

PXR_NAMESPACE_CLOSE_SCOPE

#define IGNORE_USD_WARNINGS_PUSH \
  _Pragma ("GCC diagnostic push") \
  _Pragma ("GCC diagnostic ignored \"-Wunused-local-typedefs\"")

#define IGNORE_USD_WARNINGS_POP \
  _Pragma ("GCC diagnostic pop")