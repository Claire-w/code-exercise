/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 22:39:50
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:25:30
 * @FilePath: /Code/Job/code-exercise/cpp/shape/shape.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include "shape.h"
#include <iostream>

using namespace std;

Shape::Shape(float x, float y) : center_(x, y) {}

Shape::~Shape() {}

void Shape::render() {
    cout << "I am a normal shape" << endl;
}

void Shape::move(float x, float y) {
    center_.x += x;
    center_.y += y;
}