/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 22:40:10
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:25:16
 * @FilePath: /Code/Job/code-exercise/cpp/shape/ellipse.h
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#ifndef ELLIPSE_H_
#define ELLIPSE_H_
#include "shape.h"

struct Radius {
    float majorAxis;
    float minorAxis;
    Radius(float major, float minor) : majorAxis(major), minorAxis(minor) {}
};

class Ellipse : public Shape {
protected:
    Radius radius_;
public:
    Ellipse(float x, float y, float majorAxis, float minorAxis);
    ~Ellipse();
    virtual void render();
};


#endif
