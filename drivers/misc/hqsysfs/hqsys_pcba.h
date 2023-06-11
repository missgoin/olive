#ifndef HQSYS_PCBA
#define HQSYS_PCBA


typedef enum {
	PCBA_UNKNOW = 0,

	PCBA_OLIVE = 0x20,
	PCBA_OLIVE_P0_1_CN,
	PCBA_OLIVE_P0_1_GLOBAL_B28,
	PCBA_OLIVE_P0_1_INDIA,
	PCBA_OLIVE_P1_CN,
	PCBA_OLIVE_P1_GLOBAL_B28,
	PCBA_OLIVE_P1_INDIA,
	PCBA_OLIVE_P1_1_GLOBAL,
	PCBA_OLIVE_P1_1_GLOBAL_B28,
	PCBA_OLIVE_P1_1_INDIA,
	PCBA_OLIVE_P2_CN,
	PCBA_OLIVE_P2_GLOBAL,
	PCBA_OLIVE_P2_GLOBAL_B28,
	PCBA_OLIVE_P2_INDIA,
	PCBA_OLIVE_P2_1_INDIA,
	PCBA_OLIVE_MP_CN,
	PCBA_OLIVE_MP_GLOBAL,
	PCBA_OLIVE_MP_GLOBAL_B28,
	PCBA_OLIVE_MP_INDIA,
	PCBA_OLIVE_END = 0x3F,

	PCBA_PINE = 0x40,
	PCBA_PINE_P0_CN,
	PCBA_PINE_P0_GLOBAL,
	PCBA_PINE_P1_GLOBALNB28,
	PCBA_PINE_P1_GLOBALB28,
	PCBA_PINE_P1_CN,
	PCBA_PINE_P1_INDIA,
	PCBA_PINE_P1_1_INDIA,
	PCBA_PINE_P1_1_GLOBALB28,
	PCBA_PINE_P2_GLOBALNB28,
	PCBA_PINE_P2_GLOBALB28,
	PCBA_PINE_P2_CN,
	PCBA_PINE_P2_INDIA,
	PCBA_PINE_P2_MOBILE,
	PCBA_PINE_MP_GLOBALNB28,
	PCBA_PINE_MP_GLOBALB28,
	PCBA_PINE_MP_CN,
	PCBA_PINE_MP_INDIA,
	PCBA_PINE_MP_MOBILE,
	PCBA_PINE_END = 0x5F,

	PCBA_OLIVELITE = 0x60,
	PCBA_OLIVELITE_P0_1_CN,
	PCBA_OLIVELITE_P1_CN,
	PCBA_OLIVELITE_P1_GLOBAL_B28,
	PCBA_OLIVELITE_P1_INDIA,
	PCBA_OLIVELITE_P1_1_GLOBAL,
	PCBA_OLIVELITE_P1_1_GLOBAL_B28,
	PCBA_OLIVELITE_P1_1_INDIA,
	PCBA_OLIVELITE_P2_CN,
	PCBA_OLIVELITE_P2_GLOBAL,
	PCBA_OLIVELITE_P2_GLOBAL_B28,
	PCBA_OLIVELITE_P2_INDIA,
	PCBA_OLIVELITE_P2_1_CN_PUBLIC,
	PCBA_OLIVELITE_P2_1_CN,
	PCBA_OLIVELITE_MP_CN,
	PCBA_OLIVELITE_MP_GLOBAL,
	PCBA_OLIVELITE_MP_GLOBAL_B28,
	PCBA_OLIVELITE_MP_INDIA,
	PCBA_OLIVELITE_END = 0x7F,

	PCBA_OLIVEWOOD = 0x80,
	PCBA_OLIVEWOOD_P2_NIKALA,
	PCBA_OLIVEWOOD_P2_INDIA,
	PCBA_OLIVEWOOD_MP_NIKALA,
	PCBA_OLIVEWOOD_MP_INDIA,
	PCBA_OLIVEWOOD_END = 0xAF,

	PCBA_END,

} PCBA_CONFIG;

struct pcba_info {
	PCBA_CONFIG pcba_config;
	char pcba_name[32];
};



PCBA_CONFIG get_huaqin_pcba_config(void);

#endif