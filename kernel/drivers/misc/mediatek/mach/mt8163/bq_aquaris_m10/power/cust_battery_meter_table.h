#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0
#define BAT_NTC_100 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#define RBAT_PULL_DOWN_R           30000
#endif
#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#define RBAT_PULL_DOWN_R           100000
#endif
#if (BAT_NTC_100 == 1)
#define RBAT_PULL_UP_R             24000
#define RBAT_PULL_DOWN_R           100000000
#endif
#define RBAT_PULL_UP_VOLT          1800


// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20 , 75022},
		{-15 , 57926},
		{-10 , 45168},
		{ -5 , 35548},
		{  0 , 28224},
		{  5 , 22595},
		{ 10 , 18231},
		{ 15 , 14820},
		{ 20 , 12133},
		{ 25 , 10000},
		{ 30 , 8295},
		{ 35 , 6922},
		{ 40 , 5810},
		{ 45 , 4903},
		{ 50 , 4160},
		{ 55 , 3547},
		{ 60 , 3039}
	};
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

#if (BAT_NTC_100 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20,1151037},
		{-15,846579},
		{-10,628988},
		{ -5,471632},
		{  0,357012},
		{  5,272500},
		{ 10,209710},
		{ 15,162651},
		{ 20,127080},
		{ 25,100000},
		{ 30,79222},
		{ 35,63167},
		{ 40,50677},
		{ 45,40904},
		{ 50,33195},
		{ 55,27091},
		{ 60,22224}
	};
#endif
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
    {0  , 4330},
    {1  , 4307},
    {3  , 4288},
    {4  , 4272},
    {5  , 4256},
    {7  , 4241},
    {8  , 4224},
    {10	, 4215},
    {11 , 4204},
    {12 , 4199},
    {14 , 4184},
    {15 , 4179},
    {16 , 4165},
    {18 , 4150},
    {19 , 4145},
    {20 , 4131},
    {22 , 4128},
    {23 , 4112},
    {24 , 4102},
    {26 , 4092},
    {27 , 4076},
    {29 , 4067},
    {30 , 4044},
    {31 , 4035},
    {33 , 4019},
    {34 , 4003},
    {35 , 3984},
    {37 , 3973},
    {38 , 3961},
    {39 , 3957},
    {41 , 3942},
    {42 , 3938},
    {44 , 3906},
    {45 , 3895},
    {46 , 3890},
    {48 , 3879},
    {49 , 3872},
    {50 , 3865},
    {52 , 3859},
    {53 , 3853},
    {54 , 3848},
    {56 , 3843},
    {57 , 3838},
    {58 , 3830},
    {60 , 3819},
    {61 , 3815},
    {63 , 3813},
    {64 , 3810},
    {65 , 3809},
    {67 , 3804},
    {68 , 3803},
    {69 , 3800},
    {71 , 3789},
    {72 , 3788},
    {73 , 3784},
    {75 , 3779},
    {76 , 3775},
    {78 , 3770},
    {79 , 3766},
    {80 , 3752},
    {82 , 3747},
    {83 , 3740},
    {84 , 3733},
    {86 , 3727},
    {87 , 3719},
    {88 , 3708},
    {90 , 3704},
    {91 , 3692},
    {92 , 3690},
    {94 , 3688},
    {95 , 3679},
    {97 , 3652},
    {98 , 3605},
    {99 , 3553},
    {100, 3500}
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
    {0  , 4330},
    {1  , 4307},
    {3  , 4288},
    {4  , 4272},
    {5  , 4256},
    {7  , 4241},
    {8  , 4224},
    {10	, 4215},
    {11 , 4204},
    {12 , 4199},
    {14 , 4184},
    {15 , 4179},
    {16 , 4165},
    {18 , 4150},
    {19 , 4145},
    {20 , 4131},
    {22 , 4128},
    {23 , 4112},
    {24 , 4102},
    {26 , 4092},
    {27 , 4076},
    {29 , 4067},
    {30 , 4044},
    {31 , 4035},
    {33 , 4019},
    {34 , 4003},
    {35 , 3984},
    {37 , 3973},
    {38 , 3961},
    {39 , 3957},
    {41 , 3942},
    {42 , 3938},
    {44 , 3906},
    {45 , 3895},
    {46 , 3890},
    {48 , 3879},
    {49 , 3872},
    {50 , 3865},
    {52 , 3859},
    {53 , 3853},
    {54 , 3848},
    {56 , 3843},
    {57 , 3838},
    {58 , 3830},
    {60 , 3819},
    {61 , 3815},
    {63 , 3813},
    {64 , 3810},
    {65 , 3809},
    {67 , 3804},
    {68 , 3803},
    {69 , 3800},
    {71 , 3789},
    {72 , 3788},
    {73 , 3784},
    {75 , 3779},
    {76 , 3775},
    {78 , 3770},
    {79 , 3766},
    {80 , 3752},
    {82 , 3747},
    {83 , 3740},
    {84 , 3733},
    {86 , 3727},
    {87 , 3719},
    {88 , 3708},
    {90 , 3704},
    {91 , 3692},
    {92 , 3690},
    {94 , 3688},
    {95 , 3679},
    {97 , 3652},
    {98 , 3605},
    {99 , 3553},
    {100, 3500}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
    {0  , 4330},
    {1  , 4307},
    {3  , 4288},
    {4  , 4272},
    {5  , 4256},
    {7  , 4241},
    {8  , 4224},
    {10	, 4215},
    {11 , 4204},
    {12 , 4199},
    {14 , 4184},
    {15 , 4179},
    {16 , 4165},
    {18 , 4150},
    {19 , 4145},
    {20 , 4131},
    {22 , 4128},
    {23 , 4112},
    {24 , 4102},
    {26 , 4092},
    {27 , 4076},
    {29 , 4067},
    {30 , 4044},
    {31 , 4035},
    {33 , 4019},
    {34 , 4003},
    {35 , 3984},
    {37 , 3973},
    {38 , 3961},
    {39 , 3957},
    {41 , 3942},
    {42 , 3938},
    {44 , 3906},
    {45 , 3895},
    {46 , 3890},
    {48 , 3879},
    {49 , 3872},
    {50 , 3865},
    {52 , 3859},
    {53 , 3853},
    {54 , 3848},
    {56 , 3843},
    {57 , 3838},
    {58 , 3830},
    {60 , 3819},
    {61 , 3815},
    {63 , 3813},
    {64 , 3810},
    {65 , 3809},
    {67 , 3804},
    {68 , 3803},
    {69 , 3800},
    {71 , 3789},
    {72 , 3788},
    {73 , 3784},
    {75 , 3779},
    {76 , 3775},
    {78 , 3770},
    {79 , 3766},
    {80 , 3752},
    {82 , 3747},
    {83 , 3740},
    {84 , 3733},
    {86 , 3727},
    {87 , 3719},
    {88 , 3708},
    {90 , 3704},
    {91 , 3692},
    {92 , 3690},
    {94 , 3688},
    {95 , 3679},
    {97 , 3652},
    {98 , 3605},
    {99 , 3553},
    {100, 3500}
};
// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
    {0  , 4330},
    {1  , 4307},
    {3  , 4288},
    {4  , 4272},
    {5  , 4256},
    {7  , 4241},
    {8  , 4224},
    {10	, 4215},
    {11 , 4204},
    {12 , 4199},
    {14 , 4184},
    {15 , 4179},
    {16 , 4165},
    {18 , 4150},
    {19 , 4145},
    {20 , 4131},
    {22 , 4128},
    {23 , 4112},
    {24 , 4102},
    {26 , 4092},
    {27 , 4076},
    {29 , 4067},
    {30 , 4044},
    {31 , 4035},
    {33 , 4019},
    {34 , 4003},
    {35 , 3984},
    {37 , 3973},
    {38 , 3961},
    {39 , 3957},
    {41 , 3942},
    {42 , 3938},
    {44 , 3906},
    {45 , 3895},
    {46 , 3890},
    {48 , 3879},
    {49 , 3872},
    {50 , 3865},
    {52 , 3859},
    {53 , 3853},
    {54 , 3848},
    {56 , 3843},
    {57 , 3838},
    {58 , 3830},
    {60 , 3819},
    {61 , 3815},
    {63 , 3813},
    {64 , 3810},
    {65 , 3809},
    {67 , 3804},
    {68 , 3803},
    {69 , 3800},
    {71 , 3789},
    {72 , 3788},
    {73 , 3784},
    {75 , 3779},
    {76 , 3775},
    {78 , 3770},
    {79 , 3766},
    {80 , 3752},
    {82 , 3747},
    {83 , 3740},
    {84 , 3733},
    {86 , 3727},
    {87 , 3719},
    {88 , 3708},
    {90 , 3704},
    {91 , 3692},
    {92 , 3690},
    {94 , 3688},
    {95 , 3679},
    {97 , 3652},
    {98 , 3605},
    {99 , 3553},
    {100, 3500}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
    {147 , 4330},
    {147 , 4307},
    {147 , 4288},
    {148 , 4272},
    {148 , 4256},
    {152 , 4241},
    {150 , 4224},
    {150 , 4215},
    {152 , 4204},
    {152 , 4199},
    {152 , 4184},
    {152 , 4179},
    {155 , 4165},
    {155 , 4150},
    {157 , 4145},
    {157 , 4131},
    {160 , 4128},
    {167 , 4112},
    {167 , 4102},
    {162 , 4092},
    {160 , 4076},
    {162 , 4067},
    {163 , 4044},
    {167 , 4035},
    {172 , 4019},
    {173 , 4003},
    {173 , 3984},
    {172 , 3973},
    {170 , 3961},
    {167 , 3957},
    {160 , 3942},
    {155 , 3938},
    {152 , 3906},
    {148 , 3895},
    {148 , 3890},
    {148 , 3879},
    {148 , 3872},
    {148 , 3865},
    {148 , 3859},
    {148 , 3853},
    {150 , 3848},
    {150 , 3843},
    {150 , 3838},
    {152 , 3830},
    {152 , 3819},
    {152 , 3815},
    {152 , 3813},
    {155 , 3810},
    {153 , 3809},
    {155 , 3804},
    {155 , 3803},
    {155 , 3800},
    {155 , 3789},
    {155 , 3788},
    {152 , 3784},
    {152 , 3779},
    {152 , 3775},
    {150 , 3770},
    {150 , 3766},
    {150 , 3752},
    {152 , 3747},
    {152 , 3740},
    {152 , 3733},
    {153 , 3727},
    {153 , 3719},
    {152 , 3708},
    {152 , 3704},
    {153 , 3692},
    {157 , 3690},
    {160 , 3688},
    {163 , 3679},
    {160 , 3652},
    {163 , 3605},
    {173 , 3553},
    {200 , 3500}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
    {147 , 4330},
    {147 , 4307},
    {147 , 4288},
    {148 , 4272},
    {148 , 4256},
    {152 , 4241},
    {150 , 4224},
    {150 , 4215},
    {152 , 4204},
    {152 , 4199},
    {152 , 4184},
    {152 , 4179},
    {155 , 4165},
    {155 , 4150},
    {157 , 4145},
    {157 , 4131},
    {160 , 4128},
    {167 , 4112},
    {167 , 4102},
    {162 , 4092},
    {160 , 4076},
    {162 , 4067},
    {163 , 4044},
    {167 , 4035},
    {172 , 4019},
    {173 , 4003},
    {173 , 3984},
    {172 , 3973},
    {170 , 3961},
    {167 , 3957},
    {160 , 3942},
    {155 , 3938},
    {152 , 3906},
    {148 , 3895},
    {148 , 3890},
    {148 , 3879},
    {148 , 3872},
    {148 , 3865},
    {148 , 3859},
    {148 , 3853},
    {150 , 3848},
    {150 , 3843},
    {150 , 3838},
    {152 , 3830},
    {152 , 3819},
    {152 , 3815},
    {152 , 3813},
    {155 , 3810},
    {153 , 3809},
    {155 , 3804},
    {155 , 3803},
    {155 , 3800},
    {155 , 3789},
    {155 , 3788},
    {152 , 3784},
    {152 , 3779},
    {152 , 3775},
    {150 , 3770},
    {150 , 3766},
    {150 , 3752},
    {152 , 3747},
    {152 , 3740},
    {152 , 3733},
    {153 , 3727},
    {153 , 3719},
    {152 , 3708},
    {152 , 3704},
    {153 , 3692},
    {157 , 3690},
    {160 , 3688},
    {163 , 3679},
    {160 , 3652},
    {163 , 3605},
    {173 , 3553},
    {200 , 3500}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
    {147 , 4330},
    {147 , 4307},
    {147 , 4288},
    {148 , 4272},
    {148 , 4256},
    {152 , 4241},
    {150 , 4224},
    {150 , 4215},
    {152 , 4204},
    {152 , 4199},
    {152 , 4184},
    {152 , 4179},
    {155 , 4165},
    {155 , 4150},
    {157 , 4145},
    {157 , 4131},
    {160 , 4128},
    {167 , 4112},
    {167 , 4102},
    {162 , 4092},
    {160 , 4076},
    {162 , 4067},
    {163 , 4044},
    {167 , 4035},
    {172 , 4019},
    {173 , 4003},
    {173 , 3984},
    {172 , 3973},
    {170 , 3961},
    {167 , 3957},
    {160 , 3942},
    {155 , 3938},
    {152 , 3906},
    {148 , 3895},
    {148 , 3890},
    {148 , 3879},
    {148 , 3872},
    {148 , 3865},
    {148 , 3859},
    {148 , 3853},
    {150 , 3848},
    {150 , 3843},
    {150 , 3838},
    {152 , 3830},
    {152 , 3819},
    {152 , 3815},
    {152 , 3813},
    {155 , 3810},
    {153 , 3809},
    {155 , 3804},
    {155 , 3803},
    {155 , 3800},
    {155 , 3789},
    {155 , 3788},
    {152 , 3784},
    {152 , 3779},
    {152 , 3775},
    {150 , 3770},
    {150 , 3766},
    {150 , 3752},
    {152 , 3747},
    {152 , 3740},
    {152 , 3733},
    {153 , 3727},
    {153 , 3719},
    {152 , 3708},
    {152 , 3704},
    {153 , 3692},
    {157 , 3690},
    {160 , 3688},
    {163 , 3679},
    {160 , 3652},
    {163 , 3605},
    {173 , 3553},
    {200 , 3500}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
    {147 , 4330},
    {147 , 4307},
    {147 , 4288},
    {148 , 4272},
    {148 , 4256},
    {152 , 4241},
    {150 , 4224},
    {150 , 4215},
    {152 , 4204},
    {152 , 4199},
    {152 , 4184},
    {152 , 4179},
    {155 , 4165},
    {155 , 4150},
    {157 , 4145},
    {157 , 4131},
    {160 , 4128},
    {167 , 4112},
    {167 , 4102},
    {162 , 4092},
    {160 , 4076},
    {162 , 4067},
    {163 , 4044},
    {167 , 4035},
    {172 , 4019},
    {173 , 4003},
    {173 , 3984},
    {172 , 3973},
    {170 , 3961},
    {167 , 3957},
    {160 , 3942},
    {155 , 3938},
    {152 , 3906},
    {148 , 3895},
    {148 , 3890},
    {148 , 3879},
    {148 , 3872},
    {148 , 3865},
    {148 , 3859},
    {148 , 3853},
    {150 , 3848},
    {150 , 3843},
    {150 , 3838},
    {152 , 3830},
    {152 , 3819},
    {152 , 3815},
    {152 , 3813},
    {155 , 3810},
    {153 , 3809},
    {155 , 3804},
    {155 , 3803},
    {155 , 3800},
    {155 , 3789},
    {155 , 3788},
    {152 , 3784},
    {152 , 3779},
    {152 , 3775},
    {150 , 3770},
    {150 , 3766},
    {150 , 3752},
    {152 , 3747},
    {152 , 3740},
    {152 , 3733},
    {153 , 3727},
    {153 , 3719},
    {152 , 3708},
    {152 , 3704},
    {153 , 3692},
    {157 , 3690},
    {160 , 3688},
    {163 , 3679},
    {160 , 3652},
    {163 , 3605},
    {173 , 3553},
    {200 , 3500}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

