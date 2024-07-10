/*
 * @Author: Claire-w 2280299167@qq.com
 * @Date: 2024-06-29 11:56:56
 * @LastEditors: Claire-w 2280299167@qq.com
 * @LastEditTime: 2024-06-29 12:43:19
 * @FilePath: /Code/Job/code-exercise/cpp/tcmalloc/example.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Claire-w 2280299167@qq.com, All Rights Reserved. 
 */
#include <gperftools/tcmalloc.h>
#include <iostream>
#include <cstring>

using namespace std;

const size_t MAX_LEN = 100;

int main() {
    char *sentence = static_cast<char*>(tc_calloc(MAX_LEN, 1));
    if (sentence == nullptr) {
        cerr << "Memory allocation failed" << endl;
        return 1;
    }

    const char *msg = "I'm happy today!";
    strncpy(sentence, msg, MAX_LEN - 1);

    cout << sentence << endl;
    
    tc_free(sentence);

    return 0;
}