/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-22 20:19:01
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-22 23:41:56
 * @FilePath: /Code/Job/code-exercise/cpp/clockdisplay/clockdisplay.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */

#include "clockdisplay.h"
#include <unistd.h>
#include <iostream>

using namespace std;

ClockDisplay::ClockDisplay(int hour, int minute) : hours(23, hour), minutes(59, minute) {}

ClockDisplay::~ClockDisplay() {}

void ClockDisplay::start() {
    while (1) {
        sleep(60);
        if (minutes.increase()) {
            hours.increase();
        }
        cout << "Current time: " << hours.getValue() << ":" << minutes.getValue() << endl;
    }
}


