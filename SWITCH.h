/* 
 * File:   SWITCH.h
 * Author: A7med.G.Ashour
 *
 * Created on 30 ?????, 2019, 06:55 ?
 */

#ifndef SWITCH_H
#define SWITCH_H

#define     N_SWITCHES              (3)  // Number of switches

typedef enum {
    sw_plus = 0,
    sw_minus,
    sw_setting
}tSwitch;

typedef enum {
    sw_released,
    sw_prepressed,
    sw_pressed,
    sw_prereleased
}tSw_State;

void switch_init(tSwitch);
tSw_State switch_getState(tSwitch);
void switch_setState(tSwitch,tSw_State);
void switch_update(void);
#endif

