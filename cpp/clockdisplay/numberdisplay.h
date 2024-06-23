/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-22 20:19:14
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-22 21:33:15
 * @FilePath: /code-exercise/cpp/clockdisplay/numberdisplay.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#ifndef NUMBERDISPLAY_H_
#define NUMBERDISPLAY_H_

/*
    Number Display
    --------------------------
    data    | limit: int
            | value: int
    --------------------------
    methods | increase(): bool

*/

class NumberDisplay {
private:
    const int limit_;
    int value_;

public:
    NumberDisplay(int limit, int value = 0);
    virtual ~NumberDisplay();
    bool increase();
    int getValue();
};

#endif