/*
 * File:   my_stop_watch.c
 * Author: A7med.G.Ashour
 *
 * Created on 30 ?????, 2019, 10:43 ?
 */


#include <xc.h>
#include "SWITCH.h"
#include "TIME.h"
#include "DISPLAY.h"
#include "SSD.h"
#include "TIMER0.h"

void main(void) {
    
    
    time_init();
    display_init();
    switch_init(sw_plus);
    switch_init(sw_minus);
    switch_init(sw_setting);
    timer0_init(T0_PRESCALLER_256,T0_TIMER_MODE,T0_OVF_ENABLE);
    timer0_reload(216);
    T0_timer_mode_state(T0_ON);
    
    while(1){
        /*
        switch_update();
        time_update();
        display_update();
        ssd_update();
        __delay_ms(5);
        */
    }
}

void __interrupt (high_priority) APP_UPDATE(void){

    if(TMR0_OVF_FLAG){
        TMR0_OVF_FLAG = GPIO_LOW;
        timer0_reload(216);
        
        ssd_update();
        switch_update();
        time_update();
        display_update();
        
    }
    
}
