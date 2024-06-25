/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 23:19:15
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:24:40
 * @FilePath: /Code/Job/code-exercise/cpp/shape/circle.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include "circle.h"
#include <iostream>

using namespace std;

Circle::Circle(float x, float y, float radius) : Ellipse(x, y, radius, radius) {}

Circle::~Circle() {}

void Circle::render() {
    cout << "I am a circle with radius " << radius_.majorAxis << endl;
}

