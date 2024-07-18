/***************************************************************************
 *                      COPYRIGHT NOTICE
 *             Copyright(C) 2024, D-Robotics Co., Ltd.
 *                     All rights reserved.
 ***************************************************************************/

#ifndef RGN_HB_RGN_H_
#define RGN_HB_RGN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include "hbn_api.h"

#define ALIGN_NUM 8

#ifdef WIN32
#define ATTRIBUTE
#else
#define ATTRIBUTE __attribute__((aligned (ALIGN_NUM)))
#endif

#define RGN_HANDLE_MAX 256
#define RGN_GROUP_MAX 8
#define RGN_BATCHHANDLE_MAX 18

#define IMAGE_MAX_WIDTH 4096
#define IMAGE_MAX_HEIGHT 4096
#define RGN_MIN_WIDTH 32
#define RGN_SW_MIN_WIDTH 16
#define RGN_MIN_HEIGHT 2
#define STA_MIN_WIDTH 2
#define STA_MIN_HEIGHT 2
#define STA_MAX_WIDTH 255
#define STA_MAX_HEIGHT 255
#define POLYGON_MAX_SIDE 10
#define CHANNEL_NUM_MAX 6

#define RGN_GROUP_INIT {{-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}}
#define NOT_CHECK 0xFFFF

typedef int32_t hbn_rgn_handle_t;	/* region handle */
typedef int32_t hbn_rgn_handle_group_t;	/* region group handle */

/* region type */
typedef enum hbn_rgn_type_e {
	OVERLAY_RGN,
	COVER_RGN,
	MOSAIC_RGN,
	RGN_TYPE_MAX
} hbn_rgn_type_t;

/* font size */
typedef enum hbn_rgn_font_size_e {
	FONT_SIZE_SMALL = 1,
	FONT_SIZE_MEDIUM,
	FONT_SIZE_LARGE,
	FONT_SIZE_EXTRA_LARGE
} hbn_rgn_font_size_t;

/* font color */
typedef enum hbn_rgn_font_color_e {
	FONT_COLOR_WHITE,
	FONT_COLOR_BLACK,
	FONT_COLOR_GREY,
	FONT_COLOR_BLUE,
	FONT_COLOR_GREEN,
	FONT_COLOR_RED,
	FONT_COLOR_CYAN,
	FONT_COLOR_PURPLE,
	FONT_COLOR_YELLOW,
	FONT_COLOR_ORANGE,
	FONT_COLOR_BROWN,
	FONT_COLOR_PINK,
	FONT_COLOR_DARKBLUE,
	FONT_COLOR_DARKGREEN,
	FONT_COLOR_DARKRED,
	FONT_COLOR_DARKGRAY,
	FONT_KEY_COLOR_NUM,
} hbn_rgn_font_color_t;

/* pixel format */
typedef enum hbn_rgn_pixel_format_e {
	PIXEL_FORMAT_VGA_8,
	PIXEL_FORMAT_YUV420SP
} hbn_rgn_pixel_format_t;

typedef enum hbn_rgn_cover_type_e {
	COVER_RECT = 0,
	COVER_POLYGON,
} hbn_rgn_cover_type_t;

typedef struct hbn_rgn_size_s {
	uint32_t width;
	uint32_t height;
} hbn_rgn_size_t;

typedef struct hbn_rgn_point_s {
	uint32_t x;
	uint32_t y;
} hbn_rgn_point_t;

/* rectangle attribute */
typedef struct hbn_rgn_rect_s {
	uint32_t x;
	uint32_t y;
	uint32_t width;
	uint32_t height;
} hbn_rgn_rect_t;

/* overlay region display attribute */ 
typedef struct hbn_ren_overlay_s {
	hbn_rgn_pixel_format_t pixel_fmt;	/*pixel format of overlay*/
	hbn_rgn_size_t size;			/*size of overlay*/
} hbn_rgn_overlay_t;

/* polygon attribute */
typedef struct hbn_rgn_polygon_s {
	uint32_t side_num;				/*side number of polygon*/
	hbn_rgn_point_t vertex[POLYGON_MAX_SIDE];	/*vertex of polygon*/
} hbn_rgn_polygon_t;

/* cover region display attribute */
typedef struct hbn_rgn_cover_attr_s {
	hbn_rgn_cover_type_t cover_type;
	union {
		hbn_rgn_size_t size;		/* rectangle of cover region */
		hbn_rgn_polygon_t polygon;	/* polygon of cover region */
	};
} hbn_rgn_cover_t;

/* mosaic attribute */
typedef struct hbn_rgn_mosaic_attr_s {
	hbn_rgn_size_t size;			/* rectangle of mosaic region */
	uint32_t pixel_block;			/* reserved */
} hbn_rgn_mosaic_t;

/* region attribute */
typedef struct hbn_rgn_attr_s {
	hbn_rgn_type_t type;			/* type of region(cover, overlay, mosaic) */
	uint32_t alpha;				// reserved
	hbn_rgn_font_color_t color;		/* background color of overlay and cover */
	hbn_rgn_overlay_t overlay_attr;		/* attribute of overlay */
	hbn_rgn_cover_t cover_attr;		/* cover region attribute */
	hbn_rgn_mosaic_t mosaic_chn;		/* mosaic region attribute */
} hbn_rgn_attr_t;

/* canvas info */
typedef struct hbn_rgn_canvas_info_s {
	hbn_rgn_size_t size;			/* size of canvas */
	hbn_rgn_pixel_format_t pixel_fmt;	/* pixel format of canvas */
	void *paddr;				/* address of canvas */
} hbn_rgn_canvas_t;

/* channel display attribute */
typedef struct hbn_rgn_chn_attr_s {
	bool show;			/* whether region display */
	bool invert_en;			/* enable invert */
	uint32_t display_level;
	hbn_rgn_point_t point;		/* point of region, use (0, 0) if polygon */
} hbn_rgn_chn_attr_t;

/* bitmap attribute */
typedef struct hbn_rgn_bitmap_attr_s {
	hbn_rgn_pixel_format_t pixel_fmt;	/* pixel of bitmap */
	hbn_rgn_size_t size;			/* size of bitmap */
	void *paddr;				/* address of bitmap */
} hbn_rgn_bitmap_t;

/* param for drawing words */
typedef struct hbn_rgn_draw_word_param_s {
	void *paddr;
	hbn_rgn_size_t size;			/* size of address */
	hbn_rgn_point_t point;			/* point of string in bitmap */
	uint8_t *draw_string;			/* string of drawwing */
	hbn_rgn_font_color_t font_color;	/* font color of bitmap */
	uint32_t font_alpha;			/* font alpha */
	uint32_t bg_color;			/* background color */
	uint32_t bg_alpha;			/* background alpha */
	hbn_rgn_font_size_t font_size;		/* font size of bitmap */
	bool flush_en;
} hbn_rgn_draw_word_t;

/* param for drawing lines */
typedef struct hbn_rgn_draw_line_param_s {
	void *paddr;
	hbn_rgn_size_t size;		/*size of address*/
	hbn_rgn_point_t start_point;	/* Line start point */
	hbn_rgn_point_t end_point;	/* Line end point */
	uint32_t thick;			/* Width of line */
	hbn_rgn_font_color_t color;	/* Color of line */
	uint32_t bg_color;		/* background color */
	uint32_t alpha;
	bool flush_en;
} hbn_rgn_draw_line_t;

typedef struct hbn_rgn_sta_attr_s {
	uint8_t sta_en;
	uint16_t start_x;
	uint16_t start_y;
	uint16_t width;
	uint16_t height;
} hbn_rgn_sta_t;

#define rgn_input_id_check(handle, vnode, chnid) do {\
	if ((handle) != NOT_CHECK && ((handle) >= RGN_HANDLE_MAX || (handle) < 0)) {\
		vpf_err("handle: %d error, out of range [0, %d)\n", (handle), RGN_HANDLE_MAX);\
		return -HBN_STATUS_VSE_ILLEGAL_ATTR;\
	}\
	if (!(vnode)) {\
		vpf_err("cannot find corresponding vnode\n");\
		return -HBN_STATUS_VSE_INVALID_PARAMETER;\
	}\
	if ((chnid) != NOT_CHECK && ((chnid) >= CHANNEL_NUM_MAX || (chnid) < 0)) {\
		vpf_err("channel id: %d out of range [0, %d)\n", chnid, CHANNEL_NUM_MAX);\
		return -HBN_STATUS_VSE_INVALID_PARAMETER;\
	}\
	} while(0)

int32_t hbn_rgn_create(hbn_rgn_handle_t handle, const hbn_rgn_attr_t *region);
int32_t hbn_rgn_destroy(hbn_rgn_handle_t handle);
int32_t hbn_rgn_getattr(hbn_rgn_handle_t handle, hbn_rgn_attr_t *region);
int32_t hbn_rgn_setattr(hbn_rgn_handle_t handle, const hbn_rgn_attr_t *region);
int32_t hbn_rgn_setbitmap(hbn_rgn_handle_t handle, const hbn_rgn_bitmap_t *bitmap_attr);
int32_t hbn_rgn_attach_to_chn(hbn_rgn_handle_t handle, hbn_vnode_handle_t vnode_fd,
				int32_t chnid, const hbn_rgn_chn_attr_t *rgn_chn);
int32_t hbn_rgn_detach_from_chn(hbn_rgn_handle_t handle, hbn_vnode_handle_t vnode_fd, int32_t chnid);
int32_t hbn_rgn_set_displayattr(hbn_rgn_handle_t handle, hbn_vnode_handle_t vnode_fd,
				int32_t chnid, const hbn_rgn_chn_attr_t *rgn_chn);
int32_t hbn_rgn_get_displayattr(hbn_rgn_handle_t handle, hbn_vnode_handle_t vnode_fd,
				int32_t chnid, hbn_rgn_chn_attr_t *rgn_chn);
int32_t hbn_rgn_draw_word(const hbn_rgn_draw_word_t *draw_word);
int32_t hbn_rgn_draw_line(const hbn_rgn_draw_line_t *draw_line);
int32_t hbn_rgn_set_colormap(uint32_t color_map[16]);
// int32_t hbn_rgn_get_canvas_info(hbn_rgn_handle_t handle, hbn_rgn_canvas_t *canvas_info);
// int32_t hbn_rgn_update_canvas(hbn_rgn_handle_t handle);



// /*batch draw lines to specified address*/
// int32_t HB_RGN_DrawLineArray(hbn_rgn_handle_t hHandle,
// 			const hbn_rgn_draw_line_t astRgnDrawLine[],
// 			uint32_t u32ArraySize);

/*set some region handles to a group*/
// int32_t HB_RGN_BatchBegin(hbn_rgn_handle_group_t *pu32Group, uint32_t u32Num, const hbn_rgn_handle_t handle[]);

// /*update all regions in the group*/
// int32_t HB_RGN_BatchEnd(hbn_rgn_handle_group_t u32Group);

/*set attribute of y statistics*/
// int32_t HB_RGN_SetSta(hbn_vnode_handle_t vnode_fd, int32_t chnid,
// 			uint8_t astStaLevel[3], hbn_rgn_sta_t astStaAttr[8]);

/*get the value of statistics*/
// int32_t HB_RGN_GetSta(hbn_vnode_handle_t vnode_fd, int32_t chnid, uint16_t astStaValue[8][4]);

/*attach region to pym*/
// int32_t HB_RGN_AttachToPym(hbn_rgn_handle_t handle, const RGN_CHN_S *pstChn,
// 			const hbn_rgn_chn_attr_t *rgn_chn);

// int32_t HB_RGN_AttachToPymEx(hbn_rgn_handle_t handle, const RGN_CHN_S *pstChn,
// 			const hbn_rgn_chn_attr_t *rgn_chn);

/*detach region from pym*/
// int32_t HB_RGN_DetachFromPym(hbn_rgn_handle_t handle, const RGN_CHN_S *pstChn);

/*set color map to pym*/
// int32_t HB_RGN_SetPymColorMap(uint32_t color_map[16]);

/*set attribute of y statistics in pym*/
// int32_t HB_RGN_SetPymSta(const RGN_CHN_S *pstChn, uint8_t astStaLevel[3],
			// hbn_rgn_sta_t astStaAttr[8]);

/*get the value of statistics in pym*/
// int32_t HB_RGN_GetPymSta(const RGN_CHN_S *pstChn, uint16_t astStaValue[8][4]);

/*attach region to a yuv buffer*/
// int32_t HB_RGN_AddToYUV(hbn_rgn_handle_t handle, hbn_vnode_image_t *vio_buffer,
// 			const hbn_rgn_chn_attr_t *rgn_chn);

// int32_t HB_RGN_AddToYUVEx(hbn_rgn_handle_t handle, hbn_vnode_image_t *vio_buffer,
// 			const hbn_rgn_chn_attr_t *rgn_chn);

// /*set display level of region*/
// int32_t HB_RGN_SetDisplayLevel(hbn_rgn_handle_t handle, hbn_vnode_handle_t vnode_fd,
// 				int32_t chnid, uint32_t osd_level);

// /*set background transparent of yuv420 pixel format region*/
// int32_t HB_RGN_SetYuvBgtrans(hbn_rgn_handle_t handle, uint8_t enable, uint32_t key_color);

#ifdef __cplusplus
}
#endif

#endif	// RGN_HB_RGN_H_
