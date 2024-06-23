/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-22 20:18:58
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-22 23:17:24
 * @FilePath: /Code/Job/code-exercise/cpp/clockdisplay/clockdisplay.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#ifndef CLOCKDISPLAY_H_
#define CLOCKDISPLAY_H_

#include "numberdisplay.h"

/*
    Clock Display
    --------------------------
    data    | hours: NumberDisplay
            | minutes: NumberDisplay
    --------------------------
    methods | start(): void

*/

class ClockDisplay {
private:
    NumberDisplay hours;
    NumberDisplay minutes;

public:
    ClockDisplay(int hour = 0, int minute = 0);
    virtual ~ClockDisplay();
    void start();
};

#endif
