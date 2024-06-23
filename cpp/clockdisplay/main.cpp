/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-22 20:19:21
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-22 23:40:59
 * @FilePath: /Code/Job/code-exercise/cpp/clockdisplay/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include "clockdisplay.h"
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int curr_hour, curr_min;
    string input;
    char delimiter;
    cout << "输入当前时间：" << endl;

    getline(cin, input);
    istringstream inputStream(input);
    if (inputStream >> curr_hour >> delimiter >> curr_min && delimiter == ':') {
        
    } else {
        cerr << "Invalid input format!" << endl;
    }

    ClockDisplay clock(curr_hour, curr_min);
    clock.start();

    return 0;
}