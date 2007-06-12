/* Default font -- this is simply a 256x128x1 BMP, in #include'able form.
   The font is 8x16, code page 437. */

unsigned char deffont[] =
{
	0x42, 0x4d, 0x3e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,
	0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x12, 0x0b, 0x00, 0x00, 0x12, 0x0b,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff,
	0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x9f,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x89, 0x07, 0x3f, 0x93, 0x01, 0x8f, 0x83, 0xe7,
	0x81, 0xc7, 0x11, 0xc3, 0xff, 0x3f, 0xe3, 0x39, 0xff, 0x81, 0x81,
	0x81, 0xe7, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff,
	0xff, 0xff, 0x23, 0x33, 0x3f, 0x93, 0x39, 0x27, 0x99, 0xe7, 0xe7,
	0x93, 0x93, 0x99, 0xff, 0x9f, 0xcf, 0x39, 0x01, 0xff, 0xff, 0xff,
	0xe7, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x81,
	0xff, 0x27, 0x33, 0x3f, 0x93, 0x9f, 0x27, 0x99, 0xe7, 0xc3, 0x39,
	0x93, 0x99, 0x81, 0x81, 0x9f, 0x39, 0xff, 0xff, 0xcf, 0xf3, 0xe7,
	0x27, 0xe7, 0x23, 0xff, 0xff, 0xff, 0x93, 0xff, 0xff, 0x81, 0xff,
	0x27, 0x33, 0x3f, 0x93, 0xcf, 0x27, 0x99, 0xe7, 0x99, 0x39, 0x93,
	0x99, 0x24, 0x0c, 0x9f, 0x39, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
	0xff, 0x89, 0xff, 0xe7, 0xff, 0x93, 0xff, 0xff, 0x81, 0xff, 0x27,
	0x37, 0x3f, 0x93, 0xe7, 0x27, 0x99, 0xe7, 0x99, 0x39, 0x93, 0x99,
	0x24, 0x24, 0x9f, 0x39, 0x01, 0xe7, 0xf3, 0xcf, 0xe7, 0xe7, 0x81,
	0xff, 0xff, 0xe7, 0xe7, 0x13, 0xff, 0xff, 0x81, 0xff, 0x23, 0x23,
	0x3f, 0x93, 0xe7, 0x27, 0x99, 0xe7, 0x99, 0x01, 0x39, 0xc1, 0x24,
	0x24, 0x83, 0x39, 0xff, 0x81, 0xf9, 0x9f, 0xe7, 0xe7, 0xff, 0x23,
	0xff, 0xff, 0xff, 0xf3, 0xc9, 0x81, 0x81, 0xff, 0x89, 0x31, 0x3f,
	0x01, 0xcf, 0x81, 0x99, 0x23, 0x99, 0x39, 0x39, 0xf3, 0x81, 0x81,
	0x9f, 0x39, 0xff, 0xe7, 0xf3, 0xcf, 0xe7, 0xe7, 0xe7, 0x89, 0xff,
	0xff, 0xff, 0xf3, 0xc9, 0xcd, 0x81, 0xff, 0xff, 0x39, 0x39, 0xff,
	0x9f, 0xff, 0xff, 0x89, 0xc3, 0x39, 0x39, 0xe7, 0xff, 0xf9, 0x9f,
	0x39, 0x01, 0xe7, 0xe7, 0xe7, 0xe4, 0xe7, 0xff, 0xff, 0xc7, 0xff,
	0xff, 0xf3, 0xc9, 0xe7, 0x81, 0xff, 0xff, 0x31, 0x39, 0xff, 0x39,
	0xff, 0xff, 0xff, 0xe7, 0x93, 0x93, 0xcf, 0xff, 0xfc, 0xcf, 0x83,
	0xff, 0xff, 0xcf, 0xf3, 0xe4, 0xe7, 0xff, 0xff, 0x93, 0xff, 0xff,
	0xf3, 0xc9, 0xf3, 0xff, 0xff, 0xff, 0x83, 0x01, 0xff, 0x01, 0xff,
	0xff, 0xff, 0x81, 0xc7, 0xc7, 0xe1, 0xff, 0xff, 0xe3, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf1, 0xe7, 0xff, 0xff, 0x93, 0xff, 0xff, 0xf3,
	0xc9, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xf0, 0x93,
	0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff,
	0xc9, 0xff, 0xc9, 0xc9, 0xff, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff,
	0xff, 0xe7, 0xc9, 0xc9, 0xe7, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0,
	0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9,
	0xff, 0xc9, 0xc9, 0xff, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff,
	0xe7, 0xc9, 0xc9, 0xe7, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff,
	0xff, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff,
	0xc9, 0xc9, 0xff, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7,
	0xc9, 0xc9, 0xe7, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff, 0xff,
	0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff, 0xc9,
	0xc9, 0xff, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7, 0xc9,
	0xc9, 0xe7, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff, 0xff, 0xff,
	0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xc9,
	0xff, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xc9,
	0xe7, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xe7,
	0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xc9, 0xff,
	0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xc9, 0xe7,
	0xff, 0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xe7, 0xe7,
	0xff, 0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xc9, 0xff, 0xc9,
	0xff, 0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xc9, 0xe7, 0xff,
	0xe7, 0x00, 0x00, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff,
	0xe7, 0xe7, 0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xc9, 0xff, 0xc9, 0xff,
	0xff, 0xe7, 0xc9, 0xff, 0xff, 0xe7, 0xc9, 0xc9, 0xe7, 0xff, 0xe7,
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00,
	0xe0, 0xc8, 0xc0, 0xc8, 0x00, 0x08, 0xc8, 0x00, 0x08, 0x00, 0x00,
	0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x00,
	0x00, 0x0f, 0xf0, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe7,
	0xc9, 0xcf, 0xcf, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xc9, 0xff,
	0xff, 0xc9, 0xe7, 0xe7, 0xff, 0xc9, 0xe7, 0xe7, 0xff, 0x00, 0xff,
	0x0f, 0xf0, 0x00, 0xe7, 0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe0, 0xc9,
	0xc8, 0xc0, 0x08, 0x00, 0xc8, 0x00, 0x08, 0x00, 0xc9, 0x00, 0xff,
	0xc9, 0xe0, 0xe0, 0xff, 0xc9, 0x00, 0xe7, 0xff, 0x00, 0xff, 0x0f,
	0xf0, 0x00, 0xe7, 0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xc9,
	0xff, 0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xe7, 0xc9, 0xff, 0xff, 0xc9,
	0xe7, 0xff, 0xff, 0xc9, 0xe7, 0xe7, 0xff, 0x00, 0xff, 0x0f, 0xf0,
	0x00, 0xe7, 0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xc9, 0xff,
	0xc9, 0xff, 0xc9, 0xff, 0xc9, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xe7,
	0xff, 0xff, 0xc9, 0xe7, 0xe7, 0xff, 0x00, 0xff, 0x0f, 0xf0, 0x00,
	0xe7, 0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xc9, 0xff, 0xc9,
	0xff, 0xc9, 0xff, 0xc9, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xe7, 0xff,
	0xff, 0xc9, 0xe7, 0xe7, 0xff, 0x00, 0xff, 0x0f, 0xf0, 0x00, 0xe7,
	0xe7, 0xff, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xc9, 0xff, 0xc9, 0xff,
	0xc9, 0xff, 0xc9, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xe7, 0xff, 0xff,
	0xc9, 0xe7, 0xe7, 0xff, 0x00, 0xff, 0x0f, 0xf0, 0x00, 0xe7, 0xe7,
	0xff, 0xe7, 0xff, 0xe7, 0xe7, 0xc9, 0xc9, 0xff, 0xc9, 0xff, 0xc9,
	0xff, 0xc9, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xe7, 0xff, 0xff, 0xc9,
	0xe7, 0xe7, 0xff, 0x00, 0xff, 0x0f, 0xf0, 0x00, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xbb, 0x55, 0x88, 0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7,
	0xc9, 0xc9, 0xc9, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xee, 0xaa, 0x22, 0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9,
	0xc9, 0xc9, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xf9, 0xff, 0xff, 0xff,
	0xbb, 0x55, 0x88, 0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9,
	0xc9, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xf9, 0xff, 0xff, 0xff, 0xee,
	0xaa, 0x22, 0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9, 0xc9,
	0xff, 0xff, 0xff, 0xe7, 0x89, 0xe7, 0x83, 0x87, 0x99, 0x39, 0xff,
	0xff, 0x83, 0xff, 0xff, 0xf3, 0xc0, 0xe7, 0xff, 0xff, 0xbb, 0x55,
	0x88, 0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9, 0xc9, 0xff,
	0xff, 0xff, 0xe7, 0x33, 0xe7, 0x39, 0x33, 0x99, 0x39, 0xff, 0xff,
	0x39, 0x3f, 0xf9, 0x79, 0x65, 0xc3, 0xff, 0xff, 0xee, 0xaa, 0x22,
	0xe7, 0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9, 0xc9, 0xff, 0xff,
	0xff, 0xe7, 0x33, 0xe7, 0x39, 0x33, 0x99, 0x39, 0xff, 0xff, 0x39,
	0x3f, 0xf9, 0x23, 0x31, 0xc3, 0xc9, 0x27, 0xbb, 0x55, 0x88, 0xe7,
	0xe7, 0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9, 0xc9, 0xff, 0xff, 0xff,
	0xe7, 0x33, 0xe7, 0x39, 0x33, 0x99, 0x31, 0xff, 0xff, 0x3f, 0x3f,
	0xf9, 0x9f, 0x99, 0xc3, 0x93, 0x93, 0xee, 0xaa, 0x22, 0xe7, 0xe7,
	0xe7, 0xc9, 0xc9, 0xe7, 0xc9, 0xc9, 0xc9, 0xff, 0xff, 0xff, 0xe7,
	0x83, 0xe7, 0x39, 0x33, 0x99, 0x21, 0x81, 0x83, 0x9f, 0x3f, 0xf9,
	0xcf, 0xcf, 0xe7, 0x27, 0xc9, 0xbb, 0x55, 0x88, 0xe7, 0x07, 0x07,
	0x09, 0x01, 0x07, 0x09, 0xc9, 0x09, 0x01, 0x01, 0x07, 0x07, 0xf3,
	0xe7, 0x39, 0x33, 0x99, 0x01, 0xff, 0xff, 0xcf, 0x01, 0x01, 0xe7,
	0xe7, 0xe7, 0x93, 0x93, 0xee, 0xaa, 0x22, 0xe7, 0xe7, 0xe7, 0xc9,
	0xff, 0xe7, 0xf9, 0xc9, 0xf9, 0xf9, 0xc9, 0xe7, 0xff, 0x87, 0xc7,
	0x83, 0x33, 0xa3, 0x09, 0xc1, 0xc7, 0xcf, 0xff, 0xff, 0x93, 0x93,
	0xe7, 0xc9, 0x27, 0xbb, 0x55, 0x88, 0xe7, 0xe7, 0x07, 0xc9, 0xff,
	0x07, 0x09, 0xc9, 0x01, 0x09, 0xc9, 0x07, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x19, 0x93, 0x93, 0xff, 0xff, 0xff, 0x99, 0x99, 0xff,
	0xff, 0xff, 0xee, 0xaa, 0x22, 0xe7, 0xe7, 0xe7, 0xc9, 0xff, 0xff,
	0xc9, 0xc9, 0xff, 0xc9, 0xc9, 0xe7, 0xff, 0x9f, 0xcf, 0x9f, 0x9f,
	0x23, 0x39, 0x93, 0x93, 0xcf, 0xff, 0xff, 0x9d, 0x9d, 0xe7, 0xff,
	0xff, 0xbb, 0x55, 0x88, 0xe7, 0xe7, 0xe7, 0xc9, 0xff, 0xff, 0xc9,
	0xc9, 0xff, 0xc9, 0xc9, 0xe7, 0xff, 0xcf, 0xe7, 0xcf, 0xcf, 0x89,
	0xff, 0xc3, 0xc7, 0xcf, 0xff, 0xff, 0x1f, 0x1f, 0xe7, 0xff, 0xff,
	0xee, 0xaa, 0x22, 0xe7, 0xe7, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xc9,
	0xff, 0xc9, 0xc9, 0xe7, 0xff, 0xe7, 0xf3, 0xe7, 0xe7, 0xff, 0x23,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xbb,
	0x55, 0x88, 0xe7, 0xe7, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xc9, 0xff,
	0xc9, 0xc9, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x89, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xaa,
	0x22, 0xe7, 0xe7, 0xe7, 0xc9, 0xff, 0xff, 0xc9, 0xc9, 0xff, 0xc9,
	0xc9, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x33, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7,
	0x87, 0x83, 0x89, 0x89, 0x89, 0x89, 0x83, 0x83, 0x83, 0x83, 0xe7,
	0xe7, 0xe7, 0x39, 0x39, 0x03, 0x91, 0x31, 0x83, 0x83, 0x83, 0x87,
	0x87, 0x89, 0x83, 0x83, 0xe7, 0x01, 0xe7, 0x39, 0x8f, 0xc3, 0x33,
	0x3d, 0x33, 0x33, 0x33, 0x33, 0x39, 0x3d, 0x3d, 0x3d, 0xe7, 0xe7,
	0xe7, 0x39, 0x39, 0x3f, 0x27, 0x33, 0x39, 0x39, 0x39, 0x33, 0x33,
	0x31, 0x39, 0x39, 0xe7, 0x9f, 0x81, 0x33, 0x27, 0x99, 0x33, 0x3f,
	0x33, 0x33, 0x33, 0x33, 0x3f, 0x3f, 0x3f, 0x3f, 0xe7, 0xe7, 0xe7,
	0x39, 0x39, 0x3f, 0x27, 0x33, 0x39, 0x39, 0x39, 0x33, 0x33, 0x39,
	0x39, 0x39, 0x83, 0x9f, 0xe7, 0x33, 0xe7, 0x39, 0x33, 0x3f, 0x33,
	0x33, 0x33, 0x33, 0x3f, 0x3f, 0x3f, 0x3f, 0xe7, 0xe7, 0xe7, 0x01,
	0x39, 0x3f, 0x81, 0x33, 0x39, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39,
	0x39, 0x39, 0x9f, 0x81, 0x33, 0xe7, 0x3f, 0x33, 0x01, 0x83, 0x83,
	0x83, 0x83, 0x3f, 0x01, 0x01, 0x01, 0xe7, 0xe7, 0xe7, 0x39, 0x01,
	0x0f, 0xc9, 0x33, 0x39, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39, 0x39,
	0x3f, 0x9f, 0xe7, 0x21, 0xe7, 0x3f, 0x33, 0x39, 0xf3, 0xf3, 0xf3,
	0xf3, 0x39, 0x39, 0x39, 0x39, 0xe7, 0xe7, 0xe7, 0x39, 0x39, 0x3f,
	0xc9, 0x01, 0x39, 0x39, 0x39, 0x33, 0x33, 0x39, 0x39, 0x39, 0x3f,
	0x07, 0xc3, 0x33, 0x81, 0x3f, 0x33, 0x83, 0x87, 0x87, 0x87, 0x87,
	0x83, 0x83, 0x83, 0x83, 0xc7, 0xc7, 0xc7, 0x93, 0x93, 0x3f, 0x13,
	0x33, 0x83, 0x83, 0x83, 0x33, 0x33, 0x39, 0x39, 0x39, 0x3f, 0x9f,
	0x99, 0x3b, 0xe7, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0x3f, 0xff, 0x33,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x39, 0x39, 0x39, 0x9f, 0x99,
	0x07, 0xe7, 0xc3, 0x33, 0xcf, 0x93, 0xff, 0xe7, 0xc7, 0xff, 0x93,
	0xff, 0xe7, 0xff, 0x99, 0xe7, 0xef, 0xef, 0x03, 0xff, 0x93, 0x93,
	0xff, 0xe7, 0x33, 0xe7, 0xff, 0x83, 0x39, 0x83, 0x9d, 0x99, 0x33,
	0xe7, 0xff, 0x33, 0xe7, 0xc7, 0x33, 0xcf, 0x93, 0xff, 0xc7, 0x39,
	0xcf, 0x99, 0xc3, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xc1, 0xc7, 0x39,
	0xcf, 0x87, 0xcf, 0x39, 0xff, 0xff, 0xe7, 0xc3, 0x99, 0x33, 0xe4,
	0xff, 0xff, 0xf3, 0xef, 0xff, 0x9f, 0xc7, 0xff, 0xef, 0xff, 0x9f,
	0xff, 0xe7, 0x9f, 0x39, 0x93, 0xcf, 0xff, 0xff, 0xef, 0xff, 0x9f,
	0xcf, 0x9f, 0xff, 0x39, 0x39, 0xe7, 0xff, 0xff, 0x07, 0xf1, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xc7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x73, 0xff, 0xff, 0x33, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x73,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf3, 0xff, 0xff, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x89, 0x07, 0x87, 0x83, 0x83,
	0xcf, 0x83, 0x33, 0xe7, 0xf3, 0x33, 0xe7, 0x39, 0x33, 0x87, 0x07,
	0x83, 0x3f, 0x83, 0xcf, 0x87, 0xef, 0x93, 0x39, 0x89, 0x01, 0xf1,
	0xe7, 0x8f, 0xff, 0xff, 0xff, 0x33, 0x33, 0x3b, 0x33, 0x3d, 0xcf,
	0x33, 0x33, 0xe7, 0xf3, 0x33, 0xe7, 0x29, 0x33, 0x33, 0x33, 0x33,
	0x3f, 0x79, 0xcf, 0x33, 0x93, 0x01, 0x93, 0x31, 0x3f, 0xe7, 0xe7,
	0xe7, 0xff, 0x01, 0xff, 0x33, 0x33, 0x3f, 0x33, 0x3f, 0xcf, 0x33,
	0x33, 0xe7, 0xf3, 0x27, 0xe7, 0x29, 0x33, 0x33, 0x33, 0x33, 0x3f,
	0xf9, 0xcf, 0x33, 0x39, 0x29, 0xc7, 0x39, 0x9f, 0xe7, 0xe7, 0xe7,
	0xff, 0x39, 0xff, 0x33, 0x33, 0x3f, 0x33, 0x3f, 0xcf, 0x33, 0x33,
	0xe7, 0xf3, 0x0f, 0xe7, 0x29, 0x33, 0x33, 0x33, 0x33, 0x3f, 0xe3,
	0xcf, 0x33, 0x39, 0x29, 0xc7, 0x39, 0xcf, 0xe7, 0xe7, 0xe7, 0xff,
	0x39, 0xff, 0x83, 0x33, 0x3f, 0x33, 0x01, 0xcf, 0x33, 0x33, 0xe7,
	0xf3, 0x0f, 0xe7, 0x29, 0x33, 0x33, 0x33, 0x33, 0x33, 0x8f, 0xcf,
	0x33, 0x39, 0x29, 0xc7, 0x39, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0x39,
	0xff, 0xf3, 0x33, 0x3b, 0x33, 0x39, 0x87, 0x33, 0x13, 0xe7, 0xf3,
	0x27, 0xe7, 0x01, 0x33, 0x33, 0x33, 0x33, 0x13, 0x3d, 0xcf, 0x33,
	0x39, 0x39, 0x93, 0x39, 0xf3, 0x8f, 0xe7, 0xf1, 0xff, 0x93, 0xff,
	0x87, 0x07, 0x87, 0x83, 0x83, 0xcf, 0x83, 0x27, 0xc7, 0xf3, 0x33,
	0xe7, 0x13, 0x47, 0x87, 0x07, 0x83, 0x47, 0x83, 0x03, 0x33, 0x39,
	0x39, 0x39, 0x39, 0x01, 0xe7, 0xe7, 0xe7, 0xff, 0xc7, 0xff, 0xff,
	0x3f, 0xff, 0xf3, 0xff, 0xcd, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xe7,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xef, 0xf3, 0xff, 0x3f,
	0xff, 0xf3, 0xff, 0xc9, 0xff, 0x3f, 0xe7, 0xf3, 0x3f, 0xe7, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xe7, 0xff, 0x3f, 0xff,
	0xf3, 0xff, 0xe3, 0xff, 0x3f, 0xe7, 0xf3, 0x3f, 0xc7, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0xe7, 0x8f, 0x23, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x83, 0x39, 0x03, 0xc3, 0x07, 0x03, 0x3f, 0xc1, 0x39, 0xe7, 0x87,
	0x3d, 0x03, 0x39, 0x39, 0x83, 0x3f, 0x83, 0x39, 0x83, 0xe7, 0x83,
	0xef, 0x93, 0x39, 0xe7, 0x01, 0xc3, 0xfd, 0xc3, 0xff, 0xff, 0x3f,
	0x39, 0x39, 0x99, 0x23, 0x3f, 0x3f, 0x99, 0x39, 0xe7, 0x33, 0x39,
	0x3f, 0x39, 0x39, 0x39, 0x3f, 0x21, 0x39, 0x79, 0xe7, 0x39, 0xc7,
	0x11, 0x39, 0xe7, 0x3f, 0xcf, 0xf9, 0xf3, 0xff, 0xff, 0x23, 0x39,
	0x39, 0x3d, 0x31, 0x3f, 0x3f, 0x39, 0x39, 0xe7, 0x33, 0x33, 0x3f,
	0x39, 0x39, 0x39, 0x3f, 0x29, 0x33, 0xf9, 0xe7, 0x39, 0x93, 0x01,
	0x93, 0xe7, 0x3f, 0xcf, 0xf1, 0xf3, 0xff, 0xff, 0x21, 0x39, 0x39,
	0x3f, 0x39, 0x3f, 0x3f, 0x39, 0x39, 0xe7, 0x33, 0x27, 0x3f, 0x39,
	0x39, 0x39, 0x3f, 0x39, 0x33, 0xf9, 0xe7, 0x39, 0x39, 0x29, 0x83,
	0xe7, 0x9f, 0xcf, 0xe3, 0xf3, 0xff, 0xff, 0x21, 0x01, 0x39, 0x3f,
	0x39, 0x3f, 0x3f, 0x21, 0x39, 0xe7, 0xf3, 0x0f, 0x3f, 0x39, 0x31,
	0x39, 0x3f, 0x39, 0x27, 0xf3, 0xe7, 0x39, 0x39, 0x29, 0xc7, 0xe7,
	0xcf, 0xcf, 0xc7, 0xf3, 0xff, 0xff, 0x21, 0x39, 0x03, 0x3f, 0x39,
	0x07, 0x07, 0x3f, 0x01, 0xe7, 0xf3, 0x0f, 0x3f, 0x29, 0x21, 0x39,
	0x03, 0x39, 0x03, 0xc7, 0xe7, 0x39, 0x39, 0x29, 0xc7, 0xc3, 0xe7,
	0xcf, 0x8f, 0xf3, 0xff, 0xff, 0x39, 0x39, 0x39, 0x3f, 0x39, 0x3f,
	0x3f, 0x3f, 0x39, 0xe7, 0xf3, 0x27, 0x3f, 0x01, 0x01, 0x39, 0x39,
	0x39, 0x39, 0x9f, 0xe7, 0x39, 0x39, 0x39, 0x83, 0x99, 0xf3, 0xcf,
	0x1f, 0xf3, 0xff, 0xff, 0x39, 0x93, 0x39, 0x3d, 0x31, 0x3f, 0x3f,
	0x3f, 0x39, 0xe7, 0xf3, 0x33, 0x3f, 0x01, 0x09, 0x39, 0x39, 0x39,
	0x39, 0x3f, 0xe7, 0x39, 0x39, 0x39, 0x93, 0x99, 0xf9, 0xcf, 0x3f,
	0xf3, 0xff, 0xff, 0x83, 0xc7, 0x39, 0x99, 0x23, 0x3f, 0x3f, 0x9d,
	0x39, 0xe7, 0xf3, 0x39, 0x3f, 0x11, 0x19, 0x39, 0x39, 0x39, 0x39,
	0x3d, 0x81, 0x39, 0x39, 0x39, 0x39, 0x99, 0xf9, 0xcf, 0x7f, 0xf3,
	0x39, 0xff, 0xff, 0xef, 0x03, 0xc3, 0x07, 0x03, 0x03, 0xc3, 0x39,
	0xe7, 0xe1, 0x3d, 0x3f, 0x39, 0x39, 0x83, 0x03, 0x83, 0x03, 0x83,
	0x81, 0x39, 0x39, 0x39, 0x39, 0x99, 0x01, 0xc3, 0xff, 0xc3, 0x93,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0x93, 0x83,
	0x79, 0x89, 0xff, 0xf3, 0xcf, 0xff, 0xff, 0xe7, 0xff, 0xe7, 0x7f,
	0xc7, 0xe7, 0x01, 0x83, 0xf3, 0x83, 0x83, 0xcf, 0x83, 0x87, 0xff,
	0xcf, 0xf9, 0xff, 0x9f, 0xe7, 0xff, 0xe7, 0xff, 0x93, 0x39, 0x39,
	0x33, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xe7, 0xff, 0xe7, 0x3f, 0x93,
	0xe7, 0x3f, 0x79, 0xf3, 0x79, 0x39, 0xcf, 0x39, 0x73, 0xe7, 0xe7,
	0xf3, 0xff, 0xcf, 0xe7, 0xff, 0xff, 0xff, 0x01, 0x79, 0x9f, 0x33,
	0xff, 0xcf, 0xf3, 0x99, 0xe7, 0xe7, 0xff, 0xff, 0x9f, 0x39, 0xe7,
	0x3f, 0xf9, 0xf3, 0xf9, 0x39, 0xcf, 0x39, 0xf9, 0xe7, 0xe7, 0xe7,
	0xff, 0xe7, 0xff, 0xff, 0xe7, 0xff, 0x93, 0xf9, 0xcf, 0x33, 0xff,
	0xcf, 0xf3, 0xc3, 0xe7, 0xff, 0xff, 0xff, 0xcf, 0x19, 0xe7, 0x9f,
	0xf9, 0xf3, 0xf9, 0x39, 0xcf, 0x39, 0xf9, 0xff, 0xff, 0xcf, 0x81,
	0xf3, 0xe7, 0xff, 0xe7, 0xff, 0x93, 0xf9, 0xe7, 0x23, 0xff, 0xcf,
	0xf3, 0x00, 0x81, 0xff, 0x01, 0xff, 0xe7, 0x09, 0xe7, 0xcf, 0xf9,
	0x01, 0xf9, 0x19, 0xe7, 0x39, 0xf9, 0xff, 0xff, 0x9f, 0xff, 0xf9,
	0xe7, 0xff, 0xe7, 0xff, 0x93, 0x83, 0xf3, 0x89, 0xff, 0xcf, 0xf3,
	0xc3, 0xe7, 0xff, 0xff, 0xff, 0xf3, 0x21, 0xe7, 0xe7, 0xc3, 0x33,
	0x03, 0x23, 0xf3, 0x83, 0x81, 0xff, 0xff, 0xcf, 0xff, 0xf3, 0xe7,
	0xff, 0xc3, 0xff, 0x01, 0x3f, 0x39, 0xc7, 0xff, 0xcf, 0xf3, 0x99,
	0xe7, 0xff, 0xff, 0xff, 0xf9, 0x31, 0xe7, 0xf3, 0xf9, 0x93, 0x3f,
	0x3f, 0xf9, 0x39, 0x39, 0xe7, 0xe7, 0xe7, 0x81, 0xe7, 0xf3, 0xff,
	0xc3, 0xdb, 0x93, 0x3d, 0x3d, 0x93, 0x9f, 0xcf, 0xf3, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfd, 0x39, 0x87, 0xf9, 0xf9, 0xc3, 0x3f, 0x3f,
	0xf9, 0x39, 0x39, 0xe7, 0xe7, 0xf3, 0xff, 0xcf, 0x39, 0xff, 0xc3,
	0x99, 0x93, 0x39, 0xff, 0x93, 0xcf, 0xe7, 0xe7, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x93, 0xc7, 0x39, 0x79, 0xe3, 0x3f, 0x9f, 0xf9,
	0x39, 0x39, 0xff, 0xff, 0xf9, 0xff, 0x9f, 0x39, 0xff, 0xe7, 0x99,
	0xff, 0x83, 0xff, 0xc7, 0xcf, 0xf3, 0xcf, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc7, 0xe7, 0x83, 0x83, 0xf3, 0x01, 0xc3, 0x01, 0x83,
	0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0x99, 0xff,
	0xe7, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xff, 0x00, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x81, 0x81, 0xef, 0xff, 0xc3, 0xc3, 0xff, 0x00, 0xff,
	0x00, 0x87, 0xe7, 0x1f, 0x19, 0xe7, 0x7f, 0xfd, 0xff, 0x99, 0xe4,
	0x39, 0x01, 0x81, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x7e, 0x00, 0xc7, 0xef, 0xe7, 0xe7, 0xff, 0x00, 0xc3, 0x3c,
	0x33, 0xe7, 0x0f, 0x18, 0xe7, 0x3f, 0xf9, 0xe7, 0x99, 0xe4, 0xf3,
	0x01, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x01, 0xef, 0xff,
	0x7e, 0x00, 0x83, 0xc7, 0xe7, 0xe7, 0xe7, 0x18, 0x99, 0x66, 0x33,
	0x81, 0x8f, 0x98, 0x24, 0x1f, 0xf1, 0xc3, 0xff, 0xe4, 0xc7, 0x01,
	0xc3, 0xe7, 0x81, 0xe7, 0xcf, 0x01, 0xd7, 0x01, 0xc7, 0xff, 0x66,
	0x18, 0x01, 0x83, 0x18, 0x81, 0xc3, 0x3c, 0xbd, 0x42, 0x33, 0xe7,
	0xcf, 0x9c, 0xc3, 0x0f, 0xe1, 0x81, 0x99, 0xe4, 0x93, 0x01, 0x81,
	0xe7, 0xe7, 0xf3, 0x9f, 0x3f, 0x93, 0x83, 0xc7, 0xff, 0x42, 0x3c,
	0x01, 0x01, 0x18, 0x00, 0xc3, 0x3c, 0xbd, 0x42, 0x33, 0xc3, 0xcf,
	0x9c, 0x18, 0x07, 0xc1, 0xe7, 0x99, 0xe4, 0x39, 0xff, 0xe7, 0xe7,
	0xe7, 0x01, 0x01, 0x3f, 0x01, 0x83, 0x83, 0xff, 0x7e, 0x00, 0x01,
	0x83, 0x18, 0x00, 0xe7, 0x18, 0x99, 0x66, 0x87, 0x99, 0xcf, 0x9c,
	0xc3, 0x01, 0x01, 0xe7, 0x99, 0x84, 0x39, 0xff, 0xe7, 0xe7, 0xe7,
	0xf3, 0x9f, 0x3f, 0x93, 0xc7, 0x83, 0xff, 0x7e, 0x00, 0x01, 0xc7,
	0xc3, 0x81, 0xff, 0x00, 0xc3, 0x3c, 0xcd, 0x99, 0xcf, 0x9c, 0x24,
	0x07, 0xc1, 0xe7, 0x99, 0x24, 0x93, 0xff, 0xe7, 0xe7, 0xe7, 0xe7,
	0xcf, 0xff, 0xd7, 0xc7, 0x01, 0xff, 0x5a, 0x24, 0x93, 0xef, 0xc3,
	0xc3, 0xff, 0x00, 0xff, 0x00, 0xe5, 0x99, 0xc0, 0x80, 0xe7, 0x0f,
	0xe1, 0x81, 0x99, 0x24, 0xc7, 0xff, 0x81, 0x81, 0xe7, 0xff, 0xff,
	0xff, 0xff, 0xef, 0x01, 0xff, 0x7e, 0x00, 0xff, 0xff, 0xe7, 0xe7,
	0xff, 0x00, 0xff, 0x00, 0xf1, 0x99, 0xcc, 0x9c, 0xe7, 0x1f, 0xf1,
	0xc3, 0x99, 0x24, 0x9f, 0xff, 0xc3, 0xc3, 0xe7, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x81, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x00, 0xff, 0x00, 0xe1, 0xc3, 0xc0, 0x80, 0xff, 0x3f, 0xf9, 0xe7,
	0x99, 0x80, 0x39, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfd, 0xff, 0xff,
	0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff,
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
