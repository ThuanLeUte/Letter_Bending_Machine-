/**
 * @file       bsp.h
 * @copyright  Copyright (C) 2020 ThuanLe. All rights reserved.
 * @license    This project is released under the ThuanLe License.
 * @version    1.0.0
 * @date       2020-08-01
 * @author     ThuanLe
 * @brief      Board Support Package (BSP) 
 * @note       None
 * @example    None
 */

/* Define to prevent recursive inclusion ------------------------------ */
#ifndef __BSP_H
#define __BSP_H

/* Includes ----------------------------------------------------------- */
#include "board_define.h"

/* Public defines ----------------------------------------------------- */
#define SS1_MOVE_HOME_A_PIN               (SS1)
#define SS2_MOVE_HOME_B_PIN               (SS2)

#define SS7_END_STROKE_FRONT_PIN          (SS3)
#define SS4_END_STROKE_BACK_PIN           (SS4)

#define SS3_CUT_HOME_PIN                  (SS5)
#define SS8_MATERIAL_BACK_PIN             (SS6)
#define SS6_HOLES_PIN                     (SS7)

#define BUTTON_START_PIN                  (BT1)
#define BUTTON_PAUSE_PIN                  (BT2)
#define BUTTON_STOP_PIN                   (BT3)
#define BUTTON_EMERGENCY_PIN              (BT4)

#define SOL_CLAMP_FEEDER_PIN              (OUT_1)
#define SOL_SLIDE_BACKWARD_PIN            (OUT_2)
#define SOL_LIFTER_PIN                    (OUT_3)
#define SOL_CLAMPER_PIN                   (OUT_4)

#define SOL_SLIDE_FORWARD_PIN             (OUT_5)
#define MATERIAL_STATUS                   (OUT_6)

#define STEPPER_MOVE_ENA_PIN              (OP1)
#define STEPPER_MOVE_DIR_PIN              (OP2)
#define STEPPER_MOVE_STEP_PIN             (OP3)

#define STEPPER_CUT_ENA_PIN               (OP5)
#define STEPPER_CUT_DIR_PIN               (OP6)
#define STEPPER_CUT_STEP_PIN              (OP7)

#define BRUSHLESS_SPEED_PIN               (OP8)

/* Public enumerate/structure ----------------------------------------- */
/* Public macros ------------------------------------------------------ */
/* Public variables --------------------------------------------------- */
extern String g_uart_data_receive;

/* Public function prototypes ----------------------------------------- */
/**
 * @brief         Board Support Package Init
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_init(void);

/**
 * @brief         Stop button interrupt
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_stop_push(void);

/**
 * @brief         Emergency button interrupt
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_emergency_push(void);

/**
 * @brief         Pause button interrupt
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_pause_push(void);


/**
 * @brief         Start button interrupt
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_start_push(void);

/**
 * @brief         Receive date from uart
 * @param[in]     None
 * @attention     None
 * @return        None
 */
void bsp_uart_receive(void);

#endif // __BSP_H

/* End of file -------------------------------------------------------- */
