/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
 *
 * Author: Jiun Yu <jiun.yu@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for exynos display.
*/

#ifndef _DT_BINDINGS_EXYNOS_DISPLAY_H
#define _DT_BINDINGS_EXYNOS_DISPLAY_H

/* RGB 8bit display */
/* 4byte */
#define	DECON_PIXEL_FORMAT_ARGB_8888		0
#define DECON_PIXEL_FORMAT_ABGR_8888		1
#define DECON_PIXEL_FORMAT_RGBA_8888		2
#define DECON_PIXEL_FORMAT_BGRA_8888		3
#define DECON_PIXEL_FORMAT_XRGB_8888		4
#define DECON_PIXEL_FORMAT_XBGR_8888		5
#define DECON_PIXEL_FORMAT_RGBX_8888		6
#define DECON_PIXEL_FORMAT_BGRX_8888		7

/* 2byte */
#define	DECON_PIXEL_FORMAT_RGBA_5551		8
#define DECON_PIXEL_FORMAT_BGRA_5551		9
#define DECON_PIXEL_FORMAT_ABGR_4444		10
#define DECON_PIXEL_FORMAT_RGBA_4444		11
#define DECON_PIXEL_FORMAT_BGRA_4444		12
#define DECON_PIXEL_FORMAT_RGB_565		13
#define DECON_PIXEL_FORMAT_BGR_565		14

/* RGB 10bit display */
/* 4byte */
#define DECON_PIXEL_FORMAT_ARGB_2101010		15
#define DECON_PIXEL_FORMAT_ABGR_2101010		16
#define DECON_PIXEL_FORMAT_RGBA_1010102		17
#define DECON_PIXEL_FORMAT_BGRA_1010102		18

/* YUV 8bit display */
/* YUV422 2P */
#define DECON_PIXEL_FORMAT_NV16			19
#define DECON_PIXEL_FORMAT_NV61			20

/* YUV422 3P */
#define DECON_PIXEL_FORMAT_YVU422_3P		21

/* YUV420 2P */
#define DECON_PIXEL_FORMAT_NV12			22
#define DECON_PIXEL_FORMAT_NV21			23
#define DECON_PIXEL_FORMAT_NV12M		24
#define DECON_PIXEL_FORMAT_NV21M		25

/* YUV420 3P */
#define DECON_PIXEL_FORMAT_YUV420		26
#define DECON_PIXEL_FORMAT_YVU420		27
#define DECON_PIXEL_FORMAT_YUV420M		28
#define DECON_PIXEL_FORMAT_YVU420M		29

/* YUV - 2 planes but 1 buffer */
#define DECON_PIXEL_FORMAT_NV12N		30
#define DECON_PIXEL_FORMAT_NV12N_10B		31

/* YUV 10bit display */
/* YUV420 2P */
#define DECON_PIXEL_FORMAT_NV12M_P010		32
#define DECON_PIXEL_FORMAT_NV21M_P010		33

/* YUV420(P8+2) 4P */
#define DECON_PIXEL_FORMAT_NV12M_S10B		34
#define DECON_PIXEL_FORMAT_NV21M_S10B		35

/* YUV422 2P */
#define DECON_PIXEL_FORMAT_NV16M_P210		36
#define DECON_PIXEL_FORMAT_NV61M_P210		37

/* YUV422(P8+2) 4P */
#define DECON_PIXEL_FORMAT_NV16M_S10B		38
#define DECON_PIXEL_FORMAT_NV61M_S10B		39

#define DECON_PIXEL_FORMAT_NV12_P010		40

/* formats for lossless SBWC case */
#define DECON_PIXEL_FORMAT_NV12M_SBWC_8B	41
#define DECON_PIXEL_FORMAT_NV12M_SBWC_10B	42
#define DECON_PIXEL_FORMAT_NV21M_SBWC_8B	43
#define DECON_PIXEL_FORMAT_NV21M_SBWC_10B	44
#define DECON_PIXEL_FORMAT_NV12N_SBWC_8B	45
#define DECON_PIXEL_FORMAT_NV12N_SBWC_10B	46


#endif	/* _DT_BINDINGS_EXYNOS_DISPLAY_H */
