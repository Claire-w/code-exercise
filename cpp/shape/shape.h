/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-24 22:39:45
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-24 23:25:24
 * @FilePath: /Code/Job/code-exercise/cpp/shape/shape.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#ifndef SHAPE_H_
#define SHAPE_H_

struct Pos {
    float x;
    float y;
    Pos(float x, float y) : x(x), y(y) {}
};

class Shape {
private:

protected:
    Pos center_;

public:
    Shape(float x, float y);
    virtual ~Shape();
    virtual void render();
    void move(float x, float y);
};

#endif
