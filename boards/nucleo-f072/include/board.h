/*
 * Copyright (C) 2015  Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_nucleo-f072 Nucleo-F072
 * @ingroup     boards
 * @brief       Board specific files for the nucleo-f072 board
 * @{
 *
 * @file
 * @brief       Board specific definitions for the nucleo-f072 board
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 * @author      Mohmmad Ayman <mohmmad.khzrag@gmail.com>
 * @author      José Alamos <jialamos@uc.cl>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Xtimer configuration
 * @{
 */
#define XTIMER_WIDTH                (16)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
