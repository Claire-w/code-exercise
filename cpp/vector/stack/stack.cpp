/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-07-10 03:22:11
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-07-10 03:47:51
 * @FilePath: /Code/Job/code-exercise/cpp/vector/stack/stack.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <vector>
#include <iostream>
using namespace std;

/* stack的操作有：push, pop, top, empty, size*/

template <typename T>
class Stack {
private:
    vector<T> stk;

public:
    Stack() {}
    ~Stack() {}

    void push(const T& element) {
        stk.push_back(element);
    }

    void pop() {
        if (!stk.empty()) {
            stk.pop_back();
        } else {
            throw out_of_range("Stack<>::pop(): empty stack");
        }
    }

    const T& top() const {
        if (!stk.empty()) {
            return stk.back();
        } else {
            throw out_of_range("Stack<>::pop(): empty stack");
        }
    }

    bool empty() const {
        return stk.empty();
    }

    size_t size() const {
        return stk.size();
    }
};

int main() {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    cout << "Top element: " << stack.top() << endl; // 输出 3
    
    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl; // 输出 2
    
    cout << "Stack size: " << stack.size() << endl; // 输出 2
    
    return 0;
}