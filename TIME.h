/* 
 * File:   TIME.h
 * Author: A7med.G.Ashour
 *
 * Created on 04 ?????, 2019, 10:56 ?
 */

#ifndef TIME_H
#define	TIME_H
#include "HARDWARE.h"

typedef struct {
  tByte secounds;
  tByte minutes;
  tByte hours;
}tTime;

typedef enum {
    MODE_NORMAL,
    MODE_ADJUST_MINUTES,
    MODE_ADJUST_HOURS
}tMode;

void time_init(void);
void get_time(tTime * time);
void get_mode(tMode * mode);
void time_update(void);
#endif	/* TIME_H */

