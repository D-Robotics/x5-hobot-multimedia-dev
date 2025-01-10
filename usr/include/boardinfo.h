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

#ifndef __BOARDINFO_H__
#define __BOARDINFO_H__
#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>

/* Return Value */
enum hb_binfo_retval {
	HB_BINFO_SUCCESS,
	HB_BINFO_INVALID_PARAM,
	HB_BINFO_SHORT_BUF,
	HB_BINFO_PLAT_NOT_SUPPORT,
};

/*
	key              dst
	soc_gen          x5
	soc_name         x5m
	hw_name          x5-evb/x5-svb/x5-soc/x5-fpga
	board_version    v1/v2
	board_name       <hw_name>-<board_version>-<ddr_vendor>-<ddr_size>-<ddr_freq>
	bootdevice_name  emmc/sd/nand/nor
	soc_uid          real uid
	ddr_type         lpddr4/pddr4x
	ddr_vendor       real ddr vendor
	ddr_size         1G/2G/4G/8G
	ddr_freq         3200/3733/4266
	board_id         hardware adc boardid
	bak_slot         next BAK slot
	secure_chip      is secure chip, unused
*/

/**
 * @brief get board infos

 * @param[in] key: info to get
 * @param[out] dst: buffer to store info
 * @param[in] len: length of dst
 * @return errcode
 *  HB_BINFO_SUCCESS: success
 *  -HB_BINFO_INVALID_PARAM: param error
 *  -HB_BINFO_SHORT_BUF: len is too short
 *  -HB_BINFO_PLAT_NOT_SUPPORT: key is not support in this platform
 */

int32_t hb_get_boardinfo(char* key, void *dst, uint32_t len);

#ifdef __cplusplus
}
#endif
#endif
