#include <avr/pgmspace.h>

const uint8_t mushroom[] PROGMEM={
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0,   // 0x0010 (16) pixels
0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0x78, 0x3C, 0x1C, 0x1C, 0x0E, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06,   // 0x0020 (32) pixels
0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0E, 0x1C, 0x1C, 0x3C, 0x78, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0,   // 0x0030 (48) pixels
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0040 (64) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0050 (80) pixels
0xFF, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0060 (96) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0xFF,   // 0x0070 (112) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0080 (128) pixels
0x00, 0x00, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0090 (144) pixels
0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00A0 (160) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF,   // 0x00B0 (176) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x06, 0x1C, 0xF0, 0x80, 0x00, 0x00,   // 0x00C0 (192) pixels
0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00D0 (208) pixels
0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00E0 (224) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF,   // 0x00F0 (240) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,   // 0x0100 (256) pixels
0x06, 0xFF, 0x80, 0xC0, 0xF0, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0110 (272) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0120 (288) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0130 (304) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xE0, 0xC0, 0xFF, 0x00,   // 0x0140 (320) pixels
0x00, 0x01, 0x07, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F,   // 0x0150 (336) pixels
0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x03, 0xF3, 0x33, 0xF3, 0x03, 0x03, 0x03, 0x03, 0x03,   // 0x0160 (352) pixels
0x03, 0x03, 0x03, 0x03, 0x03, 0xF3, 0xF3, 0x33, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x1F, 0x1F,   // 0x0170 (368) pixels
0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x01, 0x00,   // 0x0180 (384) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0F, 0x7F, 0xC0, 0x00,   // 0x0190 (400) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01A0 (416) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x7F, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01B0 (432) pixels
0x00, 0x80, 0xFF, 0x1F, 0x0F, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01C0 (448) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03,   // 0x01D0 (464) pixels
0x06, 0x0C, 0x18, 0x18, 0x10, 0x30, 0x20, 0x20, 0x60, 0x60, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40,   // 0x01E0 (480) pixels
0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x60, 0x60, 0x20, 0x20, 0x30, 0x10, 0x18, 0x08, 0x0C,   // 0x01F0 (496) pixels
0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0200 (512) pixels
};
