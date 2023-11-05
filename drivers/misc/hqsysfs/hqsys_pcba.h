#ifndef HQSYS_PCBA
#define HQSYS_PCBA

#if defined(TARGET_PRODUCT_LANCELOT) || defined(TARGET_PRODUCT_SHIVA)

typedef enum {
	PCBA_UNKNOW = 0,
	PCBA_J19_P0_1_CN = 0x10,
	PCBA_J19_P0_1_INDIA,
	PCBA_J19_P0_1_GLOBAL,
	PCBA_J19_P1_CN,
	PCBA_J19_P1_INDIA,
	PCBA_J19_P1_GLOBAL,
	PCBA_J19_P2_CN,
	PCBA_J19_P2_INDIA,
	PCBA_J19_P2_GLOBAL,
	PCBA_J19_MP_CN,
	PCBA_J19_MP_CN_SP01T,
	PCBA_J19_MP_INDIA,
	PCBA_J19_MP_GLOBAL,
	PCBA_J19_END,
	PCBA_J19A_P0_1_GLOBAL = 0x30,
	PCBA_J19A_P1_GLOBAL,
	PCBA_J19A_P2_GLOBAL,
	PCBA_J19A_MP_GLOBAL,
	PCBA_J19A_END,
	PCBA_J19P_P2_INDIA = 0x50,
	PCBA_J19P_MP_INDIA,
	PCBA_J19P_END,
	PCBA_END,
} PCBA_CONFIG;

typedef enum {
	PCBA_J19_UNKNOW = 0,
	PCBA_J19_CN,
	PCBA_J19_CN_SP10T,
	PCBA_J19_INDIA,
	PCBA_J19_GLOBAL,
	PCBA_J19A_GLOBAL,
	PCBA_J19P_INDIA,
} PCBA_J19_CONFIG;
#elif defined(TARGET_PRODUCT_SELENE)
/* Huaqin modify for HQ-147481 by liunianliang at 2021/07/27 start */
typedef enum
{
	PCBA_UNKNOW = 0,

	PCBA_K19A_P0_GLOBAL = 1,
	PCBA_K19A_P0_LA,
	PCBA_K19B_P0_IN,
	PCBA_K19B_P0_CN,
	PCBA_K19D_P0_GLOBAL,
	PCBA_K19C_P0_GLOBAL,
	PCBA_K19C_P0_IN,
	PCBA_K19L_P0_LA,
	PCBA_K19S_P0_CN,
	PCBA_K19S_P0_GLOBAL,
	PCBA_K19T_P0_IN,
	PCBA_K19U_P0_GLOBAL,
	PCBA_K19V_P0_LA,

	PCBA_K19A_P0_1_GLOBAL = 14,
	PCBA_K19A_P0_1_LA,
	PCBA_K19B_P0_1_IN,
	PCBA_K19B_P0_1_CN,
	PCBA_K19D_P0_1_GLOBAL,
	PCBA_K19C_P0_1_GLOBAL,
	PCBA_K19C_P0_1_IN,
	PCBA_K19L_P0_1_LA,
	PCBA_K19S_P0_1_CN,
	PCBA_K19S_P0_1_GLOBAL,
	PCBA_K19T_P0_1_IN,
	PCBA_K19U_P0_1_GLOBAL,
	PCBA_K19V_P0_1_LA,

	PCBA_K19A_P1_GLOBAL = 27,
	PCBA_K19A_P1_LA,
	PCBA_K19B_P1_IN,
	PCBA_K19B_P1_CN,
	PCBA_K19D_P1_GLOBAL,
	PCBA_K19C_P1_GLOBAL,
	PCBA_K19C_P1_IN,
	PCBA_K19L_P1_LA,
	PCBA_K19S_P1_CN,
	PCBA_K19S_P1_GLOBAL,
	PCBA_K19T_P1_IN,
	PCBA_K19U_P1_GLOBAL,
	PCBA_K19V_P1_LA,

	PCBA_K19A_P1_1_GLOBAL = 40,
	PCBA_K19A_P1_1_LA,
	PCBA_K19B_P1_1_IN,
	PCBA_K19B_P1_1_CN,
	PCBA_K19D_P1_1_GLOBAL,
	PCBA_K19C_P1_1_GLOBAL,
	PCBA_K19C_P1_1_IN,
	PCBA_K19L_P1_1_LA,
	PCBA_K19S_P1_1_CN,
	PCBA_K19S_P1_1_GLOBAL,
	PCBA_K19T_P1_1_IN,
	PCBA_K19U_P1_1_GLOBAL,
	PCBA_K19V_P1_1_LA,

	PCBA_K19A_P2_GLOBAL = 53,
	PCBA_K19A_P2_LA,
	PCBA_K19B_P2_IN,
	PCBA_K19B_P2_CN,
	PCBA_K19D_P2_GLOBAL,
	PCBA_K19C_P2_GLOBAL,
	PCBA_K19C_P2_IN,
	PCBA_K19L_P2_LA,
	PCBA_K19S_P2_CN,
	PCBA_K19S_P2_GLOBAL,
	PCBA_K19T_P2_IN,
	PCBA_K19U_P2_GLOBAL,
	PCBA_K19V_P2_LA,

	PCBA_K19A_MP_GLOBAL = 66,
	PCBA_K19A_MP_LA,
	PCBA_K19B_MP_IN,
	PCBA_K19B_MP_CN,
	PCBA_K19D_MP_GLOBAL,
	PCBA_K19C_MP_GLOBAL,
	PCBA_K19C_MP_IN,
	PCBA_K19L_MP_LA,
	PCBA_K19S_MP_CN,
	PCBA_K19S_MP_GLOBAL,
	PCBA_K19T_MP_IN,
	PCBA_K19U_MP_GLOBAL,
	PCBA_K19V_MP_LA,

	PCBA_END,
} PCBA_CONFIG;
/* Huaqin modify for HQ-147481 by liunianliang at 2021/07/27 end */
#else
typedef enum {
	PCBA_UNKNOW = 0,
	PCBA_J15S_P0_CN = 0x10,
	PCBA_J15S_P1_CN,
	PCBA_J15S_P1_1_CN,
	PCBA_J15S_P2_CN,
	PCBA_J15S_MP_CN,
	PCBA_J15S_CN_NEW_PA,
	PCBA_J15S_CN_END = 0x2F,
	PCBA_J15S_P0_INDIA = 0x30,
	PCBA_J15S_P1_INDIA,
	PCBA_J15S_P1_1_INDIA,
	PCBA_J15S_P2_INDIA,
	PCBA_J15S_MP_INDIA,
	PCBA_J15S_INDIA_END = 0x4F,
	PCBA_J15S_P0_GLOBAL = 0x50,
	PCBA_J15N_P1_1_GLOBAL_NFC,
	PCBA_J15S_P2_GLOBAL,
	PCBA_J15N_P2_GLOBAL_NFC,
	PCBA_J15S_P2_1_GLOBAL,
	PCBA_J15N_P2_1_GLOBAL_NFC,
	PCBA_J15S_MP_GLOBAL,
	PCBA_J15N_MP_GLOBAL_NFC,
	PCBA_J15S_GLOBAL_END = 0x6F,
	PCBA_END,
} PCBA_CONFIG;
#endif

extern PCBA_CONFIG huaqin_pcba_config;

struct pcba_info {
	PCBA_CONFIG pcba_config;
	char pcba_name[32];
};

PCBA_CONFIG get_huaqin_pcba_config(void);

#endif
