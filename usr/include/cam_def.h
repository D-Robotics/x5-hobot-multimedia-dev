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

/***************************************************************************
 *                      COPYRIGHT NOTICE
 *             Copyright(C) 2024, D-Robotics Co., Ltd.
 *                     All rights reserved.
 ***************************************************************************/

#ifndef _CAM_DEF_H_
#define _CAM_DEF_H_

// clang-format off

typedef enum enum_cam_bool_e {
	CAM_FALSE = 0,
	CAM_TRUE,
} cam_bool_e;

typedef enum enum_frame_format_e {
	FRM_FMT_NULL,
	FRM_FMT_RAW,
	FRM_FMT_NV12,
	FRM_FMT_UYVY,
} frame_format_e;

typedef struct image_size_s {
	uint32_t width;
	uint32_t height;
} image_size_t;

typedef struct common_rect_s {
	uint32_t x;
	uint32_t y;
	uint32_t w;
	uint32_t h;
} common_rect_t;

typedef struct frame_fps_ctrl_s {
	uint16_t src;
	uint16_t dst;
} frame_fps_ctrl_t;

// clang-format on

#endif /* _CAM_DEF_H_ */
