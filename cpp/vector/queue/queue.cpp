/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-07-10 03:44:52
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-07-10 03:54:35
 * @FilePath: /Code/Job/code-exercise/cpp/vector/queue/queue.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <iostream>
#include <vector>

using namespace std;

/* queue的操作有push, pop, front, size, empty */
template <typename T>
class Queue {
private:
    vector<T> q;

public:
    void push(const T& element) {
        q.push_back(element);
    }

    void pop() {
        if (!q.empty()) {
            q.erase(q.begin());
        } else {
            throw out_of_range("Queue<>::pop(): empty queue");
        }
    }

    const T& front() const {
        if (!q.empty()) {
            return q.front();
        } else {
            throw out_of_range("Queue<>::front(): empty queue");
        }
    }

    size_t size() const {
        return q.size();
    }

    bool empty() const {
        return q.empty();
    }
};

int main() {
    Queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    
    std::cout << "Front element: " << queue.front() << std::endl; // 输出 1
    
    queue.pop();
    std::cout << "Front element after dequeue: " << queue.front() << std::endl; // 输出 2
    
    std::cout << "Queue size: " << queue.size() << std::endl; // 输出 2
    
    return 0;
}