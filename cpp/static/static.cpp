/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-25 10:36:27
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-25 10:36:45
 * @FilePath: /Code/Job/code-exercise/cpp/static/static.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <iostream>
using namespace std;

class A {
private:
    static int i;
public:
    static void set(int ii) {
        i = ii;
    }
    void print() {
        cout << i << endl;
    }
};

int A::i;

int main() {
    A::set(10);
    A a;
    a.print();
    a.set(20);
    a.print();
    
    return 0;
}
