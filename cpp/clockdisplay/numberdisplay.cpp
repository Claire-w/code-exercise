/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-22 20:19:17
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-22 21:32:34
 * @FilePath: /Code/Job/code-exercise/cpp/clockdisplay/numberdisplay.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include "numberdisplay.h"


NumberDisplay::NumberDisplay(int limit, int value) : 
limit_(limit), value_(value) {}

NumberDisplay::~NumberDisplay() {}


/**
 * @description: increase the value, flip when reach
 * the limit
 * @return {bool}
 */
bool NumberDisplay::increase() {
    if (value_ == limit_) {
        value_ = 0;
        return true;
    }
    ++value_;
    return false;
}

int NumberDisplay::getValue() {
    return value_;
}