// Copyright (c) 2024，D-Robotics.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/****************************************************************************
*
*    Copyright (c) 2005 - 2023 by Vivante Corp.  All rights reserved.
*
*    The material in this file is confidential and contains trade secrets
*    of Vivante Corporation. This is proprietary information owned by
*    Vivante Corporation. No part of this work may be disclosed,
*    reproduced, copied, transmitted, or used in any way for any purpose,
*    without the express written permission of Vivante Corporation.
*
*****************************************************************************/


#ifndef __gc_hal_base_shared_h_
#define __gc_hal_base_shared_h_

#ifdef __cplusplus
extern "C" {
#endif

#define gcdBINARY_TRACE_MESSAGE_SIZE    240

typedef struct _gcsBINARY_TRACE_MESSAGE *gcsBINARY_TRACE_MESSAGE_PTR;
typedef struct _gcsBINARY_TRACE_MESSAGE {
    gctUINT32   signature;
    gctUINT32   pid;
    gctUINT32   tid;
    gctUINT32   line;
    gctUINT32   numArguments;
    gctUINT8    payload;
} gcsBINARY_TRACE_MESSAGE;

/* gcsOBJECT object defintinon. */
typedef struct _gcsOBJECT {
    /* Type of an object. */
    gceOBJECT_TYPE      type;
} gcsOBJECT;

#ifdef __cplusplus
}
#endif

#endif /* __gc_hal_base_shared_h_ */
