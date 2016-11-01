00 0 SELF_TEST_X_GYRO R/W xg_st_data [7:0]
01 1 SELF_TEST_Y_GYRO R/W yg_st_data [7:0]
02 2 SELF_TEST_Z_GYRO R/W zg_st_data [7:0]
0D 13 SELF_TEST_X_ACCEL R/W XA_ST_DATA [7:0]
0E 14 SELF_TEST_Y_ACCEL R/W YA_ST_DATA [7:0]
0F 15 SELF_TEST_Z_ACCEL R/W ZA_ST_DATA [7:0]
13 19 XG_OFFSET_H R/W X_OFFS_USR [15:8]
14 20 XG_OFFSET_L R/W X_OFFS_USR [7:0]
15 21 YG_OFFSET_H R/W Y_OFFS_USR [15:8]
16 22 YG_OFFSET_L R/W Y_OFFS_USR [7:0]
17 23 ZG_OFFSET_H R/W Z_OFFS_USR [15:8]
18 24 ZG_OFFSET_L R/W Z_OFFS_USR [7:0]
19 25 SMPLRT_DIV R/W SMPLRT_DIV[7:0]
1A 26 CONFIG R/W - FIFO_
MODE EXT_SYNC_SET[2:0] DLPF_CFG[2:0]
1B 27 GYRO_CONFIG R/W XGYRO_Ct
en
YGYRO_Ct
en
ZGYRO_Ct
en
GYRO_FS_SEL [1:0] - FCHOICE_B[1:0]
1C 28 ACCEL_CONFIG R/W ax_st_en ay_st_en az_st_en ACCEL_FS_SEL[1:0] -
1D 29 ACCEL_CONFIG 2 R/W - ACCEL_FCHOICE_B A_DLPF_CFG
1E 30 LP_ACCEL_ODR R/W - Lposc_clksel [3:0]
1F 31 WOM_THR R/W WOM_Threshold [7:0]
23 35 FIFO_EN R/W TEMP
_FIFO_EN
GYRO_XO
UT
GYRO_YO
UT
GYRO_ZO
UT ACCEL SLV2 SLV1 SLV0
24 36 I2C_MST_CTRL R/W MULT
_MST_EN
WAIT
_FOR_ES
SLV_3
_FIFO_EN
I2C_MST
_P_NSR I2C_MST_CLK[3:0]
25 37 I2C_SLV0_ADDR R/W I2C_SLV0
_RNW I2C_ID_0 [6:0]
26 38 I2C_SLV0_REG R/W I2C_SLV0_REG[7:0]
27 39 I2C_SLV0_CTRL R/W I2C_SLV0
_EN
I2C_SLV0
_BYTE_SW
I2C_SLV0
_REG_DIS
I2C_SLV0
_GRP I2C_SLV0_LENG[3:0]
28 40 I2C_SLV1_ADDR R/W I2C_SLV1
_RNW I2C_ID_1 [6:0]
29 41 I2C_SLV1_REG R/W I2C_SLV1_REG[7:0]
2A 42 I2C_SLV1_CTRL R/W I2C_SLV1
_EN
I2C_SLV1
_BYTE_SW
I2C_SLV1
_REG_DIS
I2C_SLV1
_GRP I2C_SLV1_LENG[3:0]
2B 43 I2C_SLV2_ADDR R/W I2C_SLV2
_RNW I2C_ID_2 [6:0]
2C 44 I2C_SLV2_REG R/W I2C_SLV2_REG[7:0]
2D 45 I2C_SLV2_CTRL R/W I2C_SLV2
_EN
I2C_SLV2
_BYTE_SW
I2C_SLV2
_REG_DIS
I2C_SLV2
_GRP I2C_SLV2_LENG[3:0]
2E 46 I2C_SLV3_ADDR R/W I2C_SLV3
_RNW I2C_ID_3 [6:0]
2F 47 I2C_SLV3_REG R/W I2C_SLV3_REG[7:0]
30 48 I2C_SLV3_CTRL R/W I2C_SLV3
_EN
I2C_SLV3
_BYTE_SW
I2C_SLV3
_REG_DIS
I2C_SLV3
_GRP I2C_SLV3_LENG [3:0]
31 49 I2C_SLV4_ADDR R/W I2C_SLV4
_RNW I2C_ID_4 [6:0]
32 50 I2C_SLV4_REG R/W I2C_SLV4_REG[7:0]
33 51 I2C_SLV4_DO R/W I2C_SLV4_DO[7:0]
34 52 I2C_SLV4_CTRL R/W I2C_SLV4
_EN
SLV4_DON
E_INT_EN
I2C_SLV4
_REG_DIS I2C_MST_DLY[4:0]
35 53 I2C_SLV4_DI R I2C_SLV4_DI[7:0]
36 54 I2C_MST_STATUS R PASS_
THROUGH
I2C_SLV4
_DONE
I2C_LOST
_ARB
I2C_SLV4
_NACK
I2C_SLV3
_NACK
I2C_SLV2
_NACK
I2C_SLV1
_NACK
I2C_SLV0
_NACK
37 55 INT_PIN_CFG R/W ACTL OPEN LATCH
_INT_EN
INT_ANYR
D_
2CLEAR
ACTL_FSY
NC
FSYNC
_INT_MOD
E_EN
BYPASS
_EN -
38 56 INT_ENABLE R/W - WOM_EN -
FIFO
_OFLOW
_EN
FSYNC_INT
_EN - -
RAW_RDY_
EN
3A 58 INT_STATUS R - WOM_INT -
FIFO
_OFLOW
_INT
FSYNC
_INT - -
RAW_DATA
_RDY_INT
3B 59 ACCEL_XOUT_H R ACCEL_XOUT_H[15:8]
3C 60 ACCEL_XOUT_L R ACCEL_XOUT_L[7:0]
3D 61 ACCEL_YOUT_H R ACCEL_YOUT_H[15:8]
3E 62 ACCEL_YOUT_L R ACCEL_YOUT_L[7:0]
3F 63 ACCEL_ZOUT_H R ACCEL_ZOUT_H[15:8]
40 64 ACCEL_ZOUT_L R ACCEL_ZOUT_L[7:0]
41 65 TEMP_OUT_H R TEMP_OUT_H[15:8]
42 66 TEMP_OUT_L R TEMP_OUT_L[7:0]
43 67 GYRO_XOUT_H R GYRO_XOUT_H[15:8]
44 68 GYRO_XOUT_L R GYRO_XOUT_L[7:0]
45 69 GYRO_YOUT_H R GYRO_YOUT_H[15:8]
46 70 GYRO_YOUT_L R GYRO_YOUT_L[7:0]
47 71 GYRO_ZOUT_H R GYRO_ZOUT_H[15:8]
48 72 GYRO_ZOUT_L R GYRO_ZOUT_L[7:0]
49 73 EXT_SENS_DATA_00 R EXT_SENS_DATA_00[7:0]
4A 74 EXT_SENS_DATA_01 R EXT_SENS_DATA_01[7:0]
4B 75 EXT_SENS_DATA_02 R EXT_SENS_DATA_02[7:0]
4C 76 EXT_SENS_DATA_03 R EXT_SENS_DATA_03[7:0]
4D 77 EXT_SENS_DATA_04 R EXT_SENS_DATA_04[7:0]
4E 78 EXT_SENS_DATA_05 R EXT_SENS_DATA_05[7:0]
4F 79 EXT_SENS_DATA_06 R EXT_SENS_DATA_06[7:0]
50 80 EXT_SENS_DATA_07 R EXT_SENS_DATA_07[7:0]
51 81 EXT_SENS_DATA_08 R EXT_SENS_DATA_08[7:0]
52 82 EXT_SENS_DATA_09 R EXT_SENS_DATA_09[7:0]
53 83 EXT_SENS_DATA_10 R EXT_SENS_DATA_10[7:0]
54 84 EXT_SENS_DATA_11 R EXT_SENS_DATA_11[7:0]
55 85 EXT_SENS_DATA_12 R EXT_SENS_DATA_12[7:0]
56 86 EXT_SENS_DATA_13 R EXT_SENS_DATA_13[7:0]
57 87 EXT_SENS_DATA_14 R EXT_SENS_DATA_14[7:0]
58 88 EXT_SENS_DATA_15 R EXT_SENS_DATA_15[7:0]
59 89 EXT_SENS_DATA_16 R EXT_SENS_DATA_16[7:0]
5A 90 EXT_SENS_DATA_17 R EXT_SENS_DATA_17[7:0]
5B 91 EXT_SENS_DATA_18 R EXT_SENS_DATA_18[7:0]
5C 92 EXT_SENS_DATA_19 R EXT_SENS_DATA_19[7:0]
5D 93 EXT_SENS_DATA_20 R EXT_SENS_DATA_20[7:0]
5E 94 EXT_SENS_DATA_21 R EXT_SENS_DATA_21[7:0]
5F 95 EXT_SENS_DATA_22 R EXT_SENS_DATA_22[7:0]
60 96 EXT_SENS_DATA_23 R EXT_SENS_DATA_23[7:0]
63 99 I2C_SLV0_DO R/W I2C_SLV0_DO[7:0]
64 100 I2C_SLV1_DO R/W I2C_SLV1_DO[7:0]
65 101 I2C_SLV2_DO R/W I2C_SLV2_DO[7:0]
66 102 I2C_SLV3_DO R/W I2C_SLV3_DO[7:0]
67 103 I2C_MST_DELAY_CTRL R/W DELAY_ES
_SHADOW - -
I2C_SLV4
_DLY_EN
I2C_SLV3
_DLY_EN
I2C_SLV2
_DLY_EN
I2C_SLV1
_DLY_EN
I2C_SLV0
_DLY_EN
68 104 SIGNAL_PATH_RESET R/W - - - - - GYRO
_RST
ACCEL
_RST
TEMP
_RST
69 105 MOT_DETECT_CTRL R/W ACCEL_INT
EL_EN
ACCEL_INT
EL_MODE - - -
6A 106 USER_CTRL R/W - FIFO_EN I2C_MST
_EN
I2C_IF
_DIS -
FIFO
_RST
I2C_MST
_RST
SIG_COND
_RST
6B 107 PWR_MGMT_1 R/W H_RESET SLEEP CYCLE GYRO_
STANDBY PD_PTAT CLKSEL[2:0]
6C 108 PWR_MGMT_2 R/W - DIS_XA DIS_YA DIS_ZA DIS_XG DIS_YG DIS_ZG
72 114 FIFO_COUNTH R/W - FIFO_CNT[12:8]
73 115 FIFO_COUNTL R/W FIFO_CNT[7:0]
74 116 FIFO_R_W R/W D[7:0]
75 117 WHO_AM_I R WHOAMI[7:0]
77 119 XA_OFFSET_H R/W XA_OFFS [14:7]
78 120 XA_OFFSET_L R/W XA_OFFS [6:0] -
7A 122 YA_OFFSET_H R/W YA_OFFS [14:7]
7B 123 YA_OFFSET_L R/W YA_OFFS [6:0] -
7D 125 ZA_OFFSET_H R/W ZA_OFFS [14:7]
7E 126 ZA_OFFSET_L R/W ZA_OFFS [6:0] -