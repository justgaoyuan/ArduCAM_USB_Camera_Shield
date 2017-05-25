#ifndef _OV7670_H_
#define _OV7670_H_

#ifdef OV7670
const struct sensor_reg reg_setting_OV7670[] =
{
	{0x3A, 0x00}, 
	{0x40, 0xE0}, 
	{0x12, 0x01}, 
	{0x32, 0xB6}, 
	{0x17, 0x13}, 
	{0x18, 0x01}, 
	{0x19, 0x02}, 
	{0x1A, 0x7A}, 
	{0x03, 0x0A}, 
	{0x0C, 0x00}, 
	{0x3E, 0x00}, 
	{0x70, 0x00}, 
	{0x71, 0x00}, 
	{0x72, 0x11}, 
	{0x73, 0x00}, 
	{0xA2, 0x02}, 
	{0x11, 0x83}, 
	{0x7A, 0x20}, 
	{0x7B, 0x1C}, 
	{0x7C, 0x28}, 
	{0x7D, 0x3C}, 
	{0x7E, 0x55}, 
	{0x7F, 0x68}, 
	{0x80, 0x76}, 
	{0x81, 0x80}, 
	{0x82, 0x88}, 
	{0x83, 0x8F}, 
	{0x84, 0x96}, 
	{0x85, 0xA3}, 
	{0x86, 0xAF}, 
	{0x87, 0xC4}, 
	{0x88, 0xD7}, 
	{0x89, 0xE8}, 
	{0x13, 0xE7}, 
	{0x00, 0x0F}, 
	{0x10, 0x00}, 
	{0x0D, 0x00}, 
	{0x14, 0x28}, 
	{0xA5, 0x05}, 
	{0xAB, 0x07}, 
	{0x24, 0x75}, 
	{0x25, 0x63}, 
	{0x26, 0xA5}, 
	{0x9F, 0x78}, 
	{0xA0, 0x68}, 
	{0xA1, 0x03}, 
	{0xA6, 0xDF}, 
	{0xA7, 0xDF}, 
	{0xA8, 0xF0}, 
	{0xA9, 0x90}, 
	{0xAA, 0x94}, 
	{0x13, 0xEF}, 
	{0x0E, 0x61}, 
	{0x0F, 0x4B}, 
	{0x16, 0x02}, 
	{0x1E, 0x07}, 
	{0x21, 0x02}, 
	{0x22, 0x91}, 
	{0x23, 0x00}, 
	{0x29, 0x07}, 
	{0x33, 0x0B}, 
	{0x35, 0x0B}, 
	{0x37, 0x1D}, 
	{0x38, 0x71}, 
	{0x39, 0x2A}, 
	{0x3C, 0x78}, 
	{0x4D, 0x40}, 
	{0x4E, 0x20}, 
	{0x69, 0x00}, 
	{0x6B, 0x40}, 
	{0x74, 0x19}, 
	{0x8D, 0x4F}, 
	{0x8E, 0x00}, 
	{0x8F, 0x00}, 
	{0x90, 0x00}, 
	{0x91, 0x00}, 
	{0x92, 0x00}, 
	{0x96, 0x00}, 
	{0x9A, 0x80}, 
	{0xB0, 0x84}, 
	{0xB1, 0x0C}, 
	{0xB2, 0x0E}, 
	{0xB3, 0x82}, 
	{0xB8, 0x0A}, 
	{0x43, 0x14}, 
	{0x44, 0xF0}, 
	{0x45, 0x34}, 
	{0x46, 0x58}, 
	{0x47, 0x28}, 
	{0x48, 0x3A}, 
	{0x59, 0x88}, 
	{0x5A, 0x88}, 
	{0x5B, 0x44}, 
	{0x5C, 0x67}, 
	{0x5D, 0x49}, 
	{0x5E, 0x0E}, 
	{0x64, 0x04}, 
	{0x65, 0x20}, 
	{0x66, 0x05}, 
	{0x94, 0x04}, 
	{0x95, 0x08}, 
	{0x6C, 0x0A}, 
	{0x6D, 0x55}, 
	{0x6E, 0x11}, 
	{0x6F, 0x9F}, 
	{0x6A, 0x40}, 
	{0x01, 0x40}, 
	{0x02, 0x40}, 
	{0x13, 0xE7}, //AGC = 1 
	{0x15, 0x00}, 
	{0x2D, 0x00}, 
	{0x4F, 0x80}, 
	{0x50, 0x80}, 
	{0x51, 0x00}, 
	{0x52, 0x22}, 
	{0x53, 0x5E}, 
	{0x54, 0x80}, 
	{0x55, 0x00}, 
	{0x56, 0x52}, 
	{0x58, 0x9E}, 
	{0x41, 0x08}, 
	{0x3F, 0x00}, 
	{0x75, 0x05}, 
	{0x76, 0xE1}, 
	{0x4C, 0x00}, 
	{0x77, 0x01}, 
	{0x3D, 0x08}, 
	{0x4B, 0x09}, 
	{0xC9, 0x60}, 
	{0x56, 0x40}, 
	{0x34, 0x11}, 
	{0x3B, 0x02}, 
	{0xA4, 0x89}, 
	{0x96, 0x00}, 
	{0x97, 0x30}, 
	{0x98, 0x20}, 
	{0x99, 0x30}, 
	{0x9A, 0x84}, 
	{0x9B, 0x29}, 
	{0x9C, 0x03}, 
	{0x9D, 0x4C}, 
	{0x9E, 0x3F}, 
	{0x78, 0x04}, 
	{0x79, 0x01}, 
	{0xC8, 0xF0}, 
	{0x79, 0x0F}, 
	{0xC8, 0x00}, 
	{0x79, 0x10}, 
	{0xC8, 0x7E}, 
	{0x79, 0x0A}, 
	{0xC8, 0x80}, 
	{0x79, 0x0B}, 
	{0xC8, 0x01}, 
	{0x79, 0x0C}, 
	{0xC8, 0x0F}, 
	{0x79, 0x0D}, 
	{0xC8, 0x20}, 
	{0x79, 0x09}, 
	{0xC8, 0x80}, 
	{0x79, 0x02}, 
	{0xC8, 0xC0}, 
	{0x79, 0x03}, 
	{0xC8, 0x40}, 
	{0x79, 0x05}, 
	{0xC8, 0x30}, 
	{0x79, 0x26}, 
	{0x09, 0x03}, 
	{0x3B, 0x42}, 
	{0x00, 0x00}, 

	{0xffFF, 0xffff},


};
#endif

#endif