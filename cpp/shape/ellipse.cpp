/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 22:40:15
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:25:40
 * @FilePath: /Code/Job/code-exercise/cpp/shape/ellipse.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include "ellipse.h"
#include <iostream>

using namespace std;

Ellipse::Ellipse(float x, float y, float majorAxis, float minorAxis) :
Shape(x, y), radius_(majorAxis, minorAxis) {}

Ellipse::~Ellipse() {}

void Ellipse::render() {
    cout << "I am an ellipse with major axis of " << radius_.majorAxis << " and minor axis of " << radius_.minorAxis << endl;
}