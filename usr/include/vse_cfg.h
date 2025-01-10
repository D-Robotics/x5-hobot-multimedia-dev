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

#ifndef J6_VSE_CFG_H_
#define J6_VSE_CFG_H_

#include "cam_def.h"

typedef enum vse_ochn_type_e {
	VSE_DOWN_SCALE_4K,
	VSE_DOWN_SCALE_1080P0,
	VSE_DOWN_SCALE_1080P1,
	VSE_DOWN_SCALE_720P0,
	VSE_DOWN_SCALE_720P1,
	VSE_UP_SCALE_4K,
	VSE_OCHN_MAX
} vse_ochn_type_e;

typedef struct vse_attr_s {
	frame_fps_ctrl_t fps;
} vse_attr_t;

typedef struct vse_ichn_attr_s {
	cam_bool_e tpg_en;
	uint32_t width;
	uint32_t height;
	frame_format_e fmt;
	uint32_t bit_width;
} vse_ichn_attr_t;

typedef struct vse_ochn_attr_s {
	cam_bool_e chn_en;
	common_rect_t roi;
	uint32_t target_w;
	uint32_t target_h;
	uint32_t y_stride;
	uint32_t uv_stride;
	frame_format_e fmt;
	uint32_t bit_width;
	frame_fps_ctrl_t fps;
} vse_ochn_attr_t;

typedef struct vse_cfg_s {
	vse_attr_t vse_attr;
	vse_ichn_attr_t ichn_attr;
	vse_ochn_attr_t ochn_attr[VSE_OCHN_MAX];
} vse_cfg_t;

typedef struct vse_ochn_attr_ex_s {
	uint32_t src_fps;
	uint32_t dst_fps;
	uint32_t chn_en;
	common_rect_t roi;
	uint32_t target_w;
	uint32_t target_h;
} vse_ochn_attr_ex_t;

int32_t vse_node_parser_config(const void *root, vse_cfg_t *vse_attr);

#endif //J6_VSE_CFG_H_
