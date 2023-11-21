/*
 * NAU85L40 ALSA SoC audio driver
 *
 * Copyright 2016 Nuvoton Technology Corp.
 * Author: John Hsu <KCHSU0@nuvoton.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __NAU8540_H__
#define __NAU8540_H__

#define NAU8540_REG_SW_RESET                   0x00
#define NAU8540_REG_POWER_MANAGEMENT   0x01
#define NAU8540_REG_CLOCK_CTRL         0x02
#define NAU8540_REG_CLOCK_SRC                  0x03
#define NAU8540_REG_FLL1                       0x04
#define NAU8540_REG_FLL2                       0x05
#define NAU8540_REG_FLL3                       0x06
#define NAU8540_REG_FLL4                       0x07
#define NAU8540_REG_FLL5                       0x08
#define NAU8540_REG_FLL6                       0x09
#define NAU8540_REG_FLL_VCO_RSV                0x0A
#define NAU8540_REG_PCM_CTRL0                  0x10
#define NAU8540_REG_PCM_CTRL1                  0x11
#define NAU8540_REG_PCM_CTRL2                  0x12
#define NAU8540_REG_PCM_CTRL3                  0x13
#define NAU8540_REG_PCM_CTRL4                  0x14
#define NAU8540_REG_ALC_CONTROL_1              0x20
#define NAU8540_REG_ALC_CONTROL_2              0x21
#define NAU8540_REG_ALC_CONTROL_3              0x22
#define NAU8540_REG_ALC_CONTROL_4              0x23
#define NAU8540_REG_ALC_CONTROL_5              0x24
#define NAU8540_REG_ALC_GAIN_CH12              0x2D
#define NAU8540_REG_ALC_GAIN_CH34              0x2E
#define NAU8540_REG_ALC_STATUS         0x2F
#define NAU8540_REG_NOTCH_FIL1_CH1             0x30
#define NAU8540_REG_NOTCH_FIL2_CH1             0x31
#define NAU8540_REG_NOTCH_FIL1_CH2             0x32
#define NAU8540_REG_NOTCH_FIL2_CH2             0x33
#define NAU8540_REG_NOTCH_FIL1_CH3             0x34
#define NAU8540_REG_NOTCH_FIL2_CH3             0x35
#define NAU8540_REG_NOTCH_FIL1_CH4             0x36
#define NAU8540_REG_NOTCH_FIL2_CH4             0x37
#define NAU8540_REG_HPF_FILTER_CH12            0x38
#define NAU8540_REG_HPF_FILTER_CH34            0x39
#define NAU8540_REG_ADC_SAMPLE_RATE            0x3A
#define NAU8540_REG_DIGITAL_GAIN_CH1           0x40
#define NAU8540_REG_DIGITAL_GAIN_CH2           0x41
#define NAU8540_REG_DIGITAL_GAIN_CH3           0x42
#define NAU8540_REG_DIGITAL_GAIN_CH4           0x43
#define NAU8540_REG_DIGITAL_MUX                0x44
#define NAU8540_REG_P2P_CH1                    0x48
#define NAU8540_REG_P2P_CH2                    0x49
#define NAU8540_REG_P2P_CH3                    0x4A
#define NAU8540_REG_P2P_CH4                    0x4B
#define NAU8540_REG_PEAK_CH1                   0x4C
#define NAU8540_REG_PEAK_CH2                   0x4D
#define NAU8540_REG_PEAK_CH3                   0x4E
#define NAU8540_REG_PEAK_CH4                   0x4F
#define NAU8540_REG_GPIO_CTRL                  0x50
#define NAU8540_REG_MISC_CTRL                  0x51
#define NAU8540_REG_I2C_CTRL                   0x52
#define NAU8540_REG_I2C_DEVICE_ID              0x58
#define NAU8540_REG_RST                        0x5A
#define NAU8540_REG_VMID_CTRL                  0x60
#define NAU8540_REG_MUTE                       0x61
#define NAU8540_REG_ANALOG_ADC1                0x64
#define NAU8540_REG_ANALOG_ADC2                0x65
#define NAU8540_REG_ANALOG_PWR         0x66
#define NAU8540_REG_MIC_BIAS                   0x67
#define NAU8540_REG_REFERENCE                  0x68
#define NAU8540_REG_FEPGA1                     0x69
#define NAU8540_REG_FEPGA2                     0x6A
#define NAU8540_REG_FEPGA3                     0x6B
#define NAU8540_REG_FEPGA4                     0x6C
#define NAU8540_REG_PWR                        0x6D
#define NAU8540_REG_MAX                        NAU8540_REG_PWR


/* POWER_MANAGEMENT (0x01) */
#define NAU8540_ADC4_EN                (0x1 << 3)
#define NAU8540_ADC3_EN                (0x1 << 2)
#define NAU8540_ADC2_EN                (0x1 << 1)
#define NAU8540_ADC1_EN                0x1

/* CLOCK_CTRL (0x02) */
#define NAU8540_CLK_ADC_EN             (0x1 << 15)
#define NAU8540_CLK_I2S_EN             (0x1 << 1)

/* CLOCK_SRC (0x03) */
#define NAU8540_CLK_SRC_SFT            15
#define NAU8540_CLK_SRC_MASK           (1 << NAU8540_CLK_SRC_SFT)
#define NAU8540_CLK_SRC_VCO            (1 << NAU8540_CLK_SRC_SFT)
#define NAU8540_CLK_SRC_MCLK           (0 << NAU8540_CLK_SRC_SFT)
#define NAU8540_CLK_ADC_SRC_SFT        6
#define NAU8540_CLK_ADC_SRC_MASK       (0x3 << NAU8540_CLK_ADC_SRC_SFT)
#define NAU8540_CLK_MCLK_SRC_MASK      0xf

/* FLL1 (0x04) */
#define NAU8540_FLL_RATIO_MASK 0x7f

/* FLL3 (0x06) */
#define NAU8540_FLL_CLK_SRC_SFT        10
#define NAU8540_FLL_CLK_SRC_MASK       (0x3 << NAU8540_FLL_CLK_SRC_SFT)
#define NAU8540_FLL_CLK_SRC_MCLK       (0 << NAU8540_FLL_CLK_SRC_SFT)
#define NAU8540_FLL_CLK_SRC_BLK        (0x2 << NAU8540_FLL_CLK_SRC_SFT)
#define NAU8540_FLL_CLK_SRC_FS         (0x3 << NAU8540_FLL_CLK_SRC_SFT)
#define NAU8540_FLL_INTEGER_MASK       0x3ff

/* FLL4 (0x07) */
#define NAU8540_FLL_REF_DIV_SFT        10
#define NAU8540_FLL_REF_DIV_MASK       (0x3 << NAU8540_FLL_REF_DIV_SFT)

/* FLL5 (0x08) */
#define NAU8540_FLL_PDB_DAC_EN (0x1 << 15)
#define NAU8540_FLL_LOOP_FTR_EN        (0x1 << 14)
#define NAU8540_FLL_CLK_SW_MASK        (0x1 << 13)
#define NAU8540_FLL_CLK_SW_N2          (0x1 << 13)
#define NAU8540_FLL_CLK_SW_REF (0x0 << 13)
#define NAU8540_FLL_FTR_SW_MASK        (0x1 << 12)
#define NAU8540_FLL_FTR_SW_ACCU        (0x1 << 12)
#define NAU8540_FLL_FTR_SW_FILTER      (0x0 << 12)

/* FLL6 (0x9) */
#define NAU8540_DCO_EN                 (0x1 << 15)
#define NAU8540_SDM_EN                 (0x1 << 14)

/* PCM_CTRL0 (0x10) */
#define NAU8540_I2S_BP_SFT             7
#define NAU8540_I2S_BP_INV             (0x1 << NAU8540_I2S_BP_SFT)
#define NAU8540_I2S_PCMB_SFT           6
#define NAU8540_I2S_PCMB_EN            (0x1 << NAU8540_I2S_PCMB_SFT)
#define NAU8540_I2S_DL_SFT             2
#define NAU8540_I2S_DL_MASK            (0x3 << NAU8540_I2S_DL_SFT)
#define NAU8540_I2S_DL_16              (0 << NAU8540_I2S_DL_SFT)
#define NAU8540_I2S_DL_20              (0x1 << NAU8540_I2S_DL_SFT)
#define NAU8540_I2S_DL_24              (0x2 << NAU8540_I2S_DL_SFT)
#define NAU8540_I2S_DL_32              (0x3 << NAU8540_I2S_DL_SFT)
#define NAU8540_I2S_DF_MASK            0x3
#define NAU8540_I2S_DF_RIGTH           0
#define NAU8540_I2S_DF_LEFT            0x1
#define NAU8540_I2S_DF_I2S             0x2
#define NAU8540_I2S_DF_PCM_AB          0x3

/* PCM_CTRL1 (0x11) */
#define NAU8540_I2S_LRC_DIV_SFT        12
#define NAU8540_I2S_LRC_DIV_MASK       (0x3 << NAU8540_I2S_LRC_DIV_SFT)
#define NAU8540_I2S_DO12_OE            (0x1 << 4)
#define NAU8540_I2S_MS_SFT             3
#define NAU8540_I2S_MS_MASK            (0x1 << NAU8540_I2S_MS_SFT)
#define NAU8540_I2S_MS_MASTER          (0x1 << NAU8540_I2S_MS_SFT)
#define NAU8540_I2S_MS_SLAVE           (0x0 << NAU8540_I2S_MS_SFT)
#define NAU8540_I2S_BLK_DIV_MASK       0x7

/* PCM_CTRL1 (0x12) */
#define NAU8540_I2S_DO34_OE            (0x1 << 11)
#define NAU8540_I2S_TSLOT_L_MASK       0x3ff

/* PCM_CTRL4 (0x14) */
#define NAU8540_TDM_MODE               (0x1 << 15)
#define NAU8540_TDM_OFFSET_EN          (0x1 << 14)
#define NAU8540_TDM_TX_MASK            0xf

/* ADC_SAMPLE_RATE (0x3A) */
#define NAU8540_ADC_OSR_MASK           0x3
#define NAU8540_ADC_OSR_256            0x3
#define NAU8540_ADC_OSR_128            0x2
#define NAU8540_ADC_OSR_64             0x1
#define NAU8540_ADC_OSR_32             0x0

/* VMID_CTRL (0x60) */
#define NAU8540_VMID_EN                (1 << 6)
#define NAU8540_VMID_SEL_SFT           4
#define NAU8540_VMID_SEL_MASK          (0x3 << NAU8540_VMID_SEL_SFT)

/* MIC_BIAS (0x67) */
#define NAU8540_PU_PRE                 (0x1 << 8)

/* REFERENCE (0x68) */
#define NAU8540_PRECHARGE_DIS          (0x1 << 13)
#define NAU8540_GLOBAL_BIAS_EN (0x1 << 12)


/* System Clock Source */
enum {
       NAU8540_CLK_DIS,
       NAU8540_CLK_MCLK,
       NAU8540_CLK_INTERNAL,
       NAU8540_CLK_FLL_MCLK,
       NAU8540_CLK_FLL_BLK,
       NAU8540_CLK_FLL_FS,
};

struct nau8540 {
       struct device *dev;
       struct regmap *regmap;
};

struct nau8540_fll {
       int mclk_src;
       int ratio;
       int fll_frac;
       int fll_int;
       int clk_ref_div;
};

struct nau8540_fll_attr {
       unsigned int param;
       unsigned int val;
};

/* over sampling rate */
struct nau8540_osr_attr {
       unsigned int osr;
       unsigned int clk_src;
};


#endif /* __NAU8540_H__ */
