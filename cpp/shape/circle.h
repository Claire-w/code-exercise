/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 23:19:07
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:21:59
 * @FilePath: /Code/Job/code-exercise/cpp/shape/circle.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "ellipse.h"

class Circle : public Ellipse {
public:
    Circle(float x, float y, float radius);
    ~Circle();
    virtual void render();
};

#endif
