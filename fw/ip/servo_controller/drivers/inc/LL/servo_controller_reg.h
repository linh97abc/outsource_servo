#ifndef __SERVO_CONTROLLER_REG_H__
#define __SERVO_CONTROLLER_REG_H__

#define SERVO_CONTROLLER_CR_OFFSET 0
#define SERVO_CONTROLLER_TR_OFFSET 1
#define SERVO_CONTROLLER_IE_OFFSET 2
#define SERVO_CONTROLLER_FLAG_OFFSET 3

#define SERVO_CONTROLLER_SPI_PRES_OFFSET 4
#define SERVO_CONTROLLER_PWM_PRES_OFFSET 5
#define SERVO_CONTROLLER_PWM_TRIG_RATE_OFFSET 6

#define SERVO_CONTROLLER_PULSE_MODE0_OFFSET 7
#define SERVO_CONTROLLER_PULSE_MODE1_OFFSET (SERVO_CONTROLLER_PULSE_MODE0_OFFSET + 1)
#define SERVO_CONTROLLER_PULSE_MODE2_OFFSET (SERVO_CONTROLLER_PULSE_MODE0_OFFSET + 2)
#define SERVO_CONTROLLER_PULSE_MODE3_OFFSET (SERVO_CONTROLLER_PULSE_MODE0_OFFSET + 3)

#define SERVO_CONTROLLER_U0_OFFSET 11
#define SERVO_CONTROLLER_U1_OFFSET (SERVO_CONTROLLER_U0_OFFSET + 1)
#define SERVO_CONTROLLER_U2_OFFSET (SERVO_CONTROLLER_U0_OFFSET + 2)
#define SERVO_CONTROLLER_U3_OFFSET (SERVO_CONTROLLER_U0_OFFSET + 3)

#define SERVO_CONTROLLER_I0_MAX_OFFSET 15
#define SERVO_CONTROLLER_I1_MAX_OFFSET (SERVO_CONTROLLER_I0_MAX_OFFSET + 1)
#define SERVO_CONTROLLER_I2_MAX_OFFSET (SERVO_CONTROLLER_I0_MAX_OFFSET + 2)
#define SERVO_CONTROLLER_I3_MAX_OFFSET (SERVO_CONTROLLER_I0_MAX_OFFSET + 3)

#define SERVO_CONTROLLER_I0_OFFSET 19
#define SERVO_CONTROLLER_I1_OFFSET (SERVO_CONTROLLER_I0_OFFSET + 1)
#define SERVO_CONTROLLER_I2_OFFSET (SERVO_CONTROLLER_I0_OFFSET + 2)
#define SERVO_CONTROLLER_I3_OFFSET (SERVO_CONTROLLER_I0_OFFSET + 3)

#define SERVO_CONTROLLER_POS0_OFFSET 23
#define SERVO_CONTROLLER_POS1_OFFSET (SERVO_CONTROLLER_POS0_OFFSET + 1)
#define SERVO_CONTROLLER_POS2_OFFSET (SERVO_CONTROLLER_POS0_OFFSET + 2)
#define SERVO_CONTROLLER_POS3_OFFSET (SERVO_CONTROLLER_POS0_OFFSET + 3)

#define SERVO_CONTROLLER_DPOS_PHASE0_OFFSET 27
#define SERVO_CONTROLLER_DPOS_PHASE1_OFFSET (SERVO_CONTROLLER_DPOS_PHASE0_OFFSET + 1)
#define SERVO_CONTROLLER_DPOS_PHASE2_OFFSET (SERVO_CONTROLLER_DPOS_PHASE0_OFFSET + 2)
#define SERVO_CONTROLLER_DPOS_PHASE3_OFFSET (SERVO_CONTROLLER_DPOS_PHASE0_OFFSET + 3)

#define SERVO_CONTROLLER_POS_PHASE0_OFFSET 31
#define SERVO_CONTROLLER_POS_PHASE1_OFFSET (SERVO_CONTROLLER_POS_PHASE0_OFFSET + 1)
#define SERVO_CONTROLLER_POS_PHASE2_OFFSET (SERVO_CONTROLLER_POS_PHASE0_OFFSET + 2)
#define SERVO_CONTROLLER_POS_PHASE3_OFFSET (SERVO_CONTROLLER_POS_PHASE0_OFFSET + 3)


#define SERVO_CONTROLLER_HALL_SIGNAL_OFFSET 35

// #define SERVO_CONTROLLER_CR_EN_BIT  (1u << 0)
// #define SERVO_CONTROLLER_CR_FILTER_LEVEL_BIT 1

// #define SERVO_CONTROLLER_CR_PROTECT_EN0_BIT  (1u << 5)
// #define SERVO_CONTROLLER_CR_PROTECT_EN1_BIT  (1u << 6)
// #define SERVO_CONTROLLER_CR_PROTECT_EN2_BIT  (1u << 7)
// #define SERVO_CONTROLLER_CR_PROTECT_EN3_BIT  (1u << 8)

#define SERVO_CONTROLLER_CR_DRV_EN0_BIT_INDEX 9
#define SERVO_CONTROLLER_CR_DRV_EN0_BIT  (1u << 9)
#define SERVO_CONTROLLER_CR_DRV_EN1_BIT  (1u << 10)
#define SERVO_CONTROLLER_CR_DRV_EN2_BIT  (1u << 11)
#define SERVO_CONTROLLER_CR_DRV_EN3_BIT  (1u << 12)

#define SERVO_CONTROLLER_FLAG_CTRL_STEP_PENDING_BIT (1u << 11)
#define SERVO_CONTROLLER_FLAG_DRV8320_FAULT3_BIT (1u << 10)
#define SERVO_CONTROLLER_FLAG_DRV8320_FAULT2_BIT (1u << 9)
#define SERVO_CONTROLLER_FLAG_DRV8320_FAULT1_BIT (1u << 8)
#define SERVO_CONTROLLER_FLAG_DRV8320_FAULT0_BIT (1u << 7)

#define SERVO_CONTROLLER_FLAG_STOP3_BIT (1u << 6)
#define SERVO_CONTROLLER_FLAG_STOP2_BIT (1u << 5)
#define SERVO_CONTROLLER_FLAG_STOP1_BIT (1u << 4)
#define SERVO_CONTROLLER_FLAG_STOP0_BIT (1u << 3)

#define SERVO_CONTROLLER_FLAG_ADC_VALID_BIT (1u << 2)
#define SERVO_CONTROLLER_FLAG_MEA_TRIG_BIT (1u << 1)
#define SERVO_CONTROLLER_FLAG_REALTIME_ERR_BIT (1u << 0)

#define SERVO_CONTROLLER_TR_START_SERVO0_BIT_INDEX 2
#define SERVO_CONTROLLER_TR_RESET_BIT (1u << 6)
#define SERVO_CONTROLLER_TR_START_SERVO3_BIT (1u << 5)
#define SERVO_CONTROLLER_TR_START_SERVO2_BIT (1u << 4)
#define SERVO_CONTROLLER_TR_START_SERVO1_BIT (1u << 3)
#define SERVO_CONTROLLER_TR_START_SERVO0_BIT (1u << 2)
#define SERVO_CONTROLLER_TR_ADC_INIT_BIT (1u << 1)
#define SERVO_CONTROLLER_TR_U_VALID_BIT (1u << 0)

#endif // __SERVO_CONTROLLER_REG_H__