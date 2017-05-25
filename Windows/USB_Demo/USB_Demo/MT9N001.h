#ifndef _MT9N001_H_
#define _MT9N001_H_


#include "sensor.h"

#ifdef MT9N001
const struct sensor_reg reg_setting_MT9N001[] =
{

/*
	{0x0344, 0x0000},
	{0x0346, 0x0008},
	{0x0348, 0x0D9F},
	{0x034A, 0x0A3F},
	{0x034C, 0x0DA0},
	{0x034E, 0x0A38},
	{0x3012, 3000},
*/
	/*
	{0x0100, 0x0},	//Mode Select = 0x0
	{0x0300, 0x4},	//vt_pix_clk_div = 0x4
	{0x0302, 0x01},	//vt_sys_clk_div = 0x1
	{0x0304, 0x03},	//pre_pll_clk_div = 0x3
	{0x0306, 0x5C},	//pll_multiplier = 0x5C
	{0x0308, 0x08},	//op_pix_clk_div = 0x8
	{0x030A, 0x01},	//op_sys_clk_div = 0x1
	//DELAY = 1               // Allow PLL to lock
	{0x3064, 0x805},	//RESERVED_MFR_3064 = 0x805
	{0x0104, 0x1},	//Grouped Parameter Hold = 0x1
	{0x3016, 0x111},	//Row Speed = 0x111

	//LOAD= Frame Rate Improvement

	{0x0344, 0x008},	//Column Start = 0x8
	{0x0348, 0xDA7},	//Column End = 0xDA7
	{0x0346, 0x008},	//Row Start = 0x8
	{0x034A, 0xA3F},	//Row End = 0xA3F
	{0x3040, 0x0041},	//Read Mode = 0x41
	{0x0400, 0x0},	//Scaling Mode = 0x0
	{0x0404, 0x10},	//Scale_M = 0x10
	{0x034C, 0xDA0},	//Output Width = 0xDA0
	{0x034E, 0xA38},	//Output Height = 0xA38
	{0x0342, 0x1B5E},	//Line Length = 0x1B5E
	{0x0340, 0x0ACC},	//Frame Lines = 0xACC
	//{0x0202, 0x0010},	//Coarse Integration Time (OPTIONAL) = 0x10
	{0x3014, 0x056A},	//Fine Integration Time = 0x56A
	{0x3010, 0x0100},	//Fine Correction = 0x100
	{0x3018, 0x0000},	//Extra Delay = 0x0
	{0x30D4, 0x1080},	//Cols Dbl Sampling = 0x1080
	{0x0104, 0x0},	//Grouped Parameter Hold = 0x0
	{0x0100, 0x1},	//Mode Select = 0x1
*/
//[MT9N001 (MI-9130) Register Wizard Defaults]
{0x0100, 0x0},	//Mode Select = 0x0
{0x0300, 0x4},	//vt_pix_clk_div = 0x4
{0x0302, 0x01},	//vt_sys_clk_div = 0x1
{0x0304, 0x02},	//pre_pll_clk_div = 0x2
{0x0306, 0x40},	//pll_multiplier = 0x40
{0x0308, 0x08},	//op_pix_clk_div = 0x8
{0x030A, 0x01},	//op_sys_clk_div = 0x1
//DELAY = 1               // Allow PLL to lock
{0x3064, 0x805},	//RESERVED_MFR_3064 = 0x805
{0x0104, 0x1},	//Grouped Parameter Hold = 0x1
{0x3016, 0x111},	//Row Speed = 0x111

//LOAD= Frame Rate Improvement

{0x0344, 0x008},	//Column Start = 0x8
{0x0348, 0xDA7},	//Column End = 0xDA7
{0x0346, 0x008},	//Row Start = 0x8
{0x034A, 0xA3F},	//Row End = 0xA3F
{0x3040, 0x0041},	//Read Mode = 0x41
{0x0400, 0x0},	//Scaling Mode = 0x0
{0x0404, 0x10},	//Scale_M = 0x10
{0x034C, 0xDA0},	//Output Width = 0xDA0
{0x034E, 0xA38},	//Output Height = 0xA38
{0x0342, 0x202B},	//Line Length = 0x202B
{0x0340, 0x0AC7},	//Frame Lines = 0xAC7
//{0x0202, 0x0000},	//Coarse Integration Time (OPTIONAL) = 0x0
{0x3014, 0x056A},	//Fine Integration Time = 0x56A
{0x3010, 0x0100},	//Fine Correction = 0x100
{0x3018, 0x0000},	//Extra Delay = 0x0
{0x30D4, 0x1080},	//Cols Dbl Sampling = 0x1080
{0x0104, 0x0},	//Grouped Parameter Hold = 0x0
{0x0100, 0x1},	//Mode Select = 0x1


	{0x0304, 0x0008},
	{0x0306, 0x0040},

	{0x3012, 500},
	{0x301A, 0x5CCC},
	{0xffff, 0xffff},
	{0xffff, 0xffff},
};
#endif

#endif;