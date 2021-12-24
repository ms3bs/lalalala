#include <iostream>
#include "gtest/gtest.h"
#include "main.h"

using namespace std;

Stack::Stack(int x) {
    Stack::size = x;
    Stack::stack = new int[x];
}

void Stack::push(int val) {
    size++;
    int *t = new int [size];
    for (int i = 0; i < size - 1; ++i)
        t[i] = stack[i];
    t[size - 1] = val;
    delete[] stack;
    stack = t;
}

int Stack::pop() {
    int res = stack[size - 1];
    size--;
    int *t = new int [size];
    for (int i = 0; i < size; ++i)
        t[i] = stack[i];
    delete[] stack;
    stack = t;
    return res;
}


void Stack::clear_stack () {
    delete stack;
    size = 0;
    stack = nullptr;
}

int Stack::is_empty () {
    if (stack == nullptr)
        return 1;
    else
        return 0;
}

string Stack::stack_testing (string command, int param) {
    if (command == "pop") {
        if (size == 0)
            return "error";
        else {
            int* k = &stack[size - 1];
            pop();
            if (k != &stack[size - 1])
                return "success";
            else
                return "false";
        }
    } else if (command == "clear_stack") {
        if (stack == nullptr)
            return "success";
        else
            return "error";
    } else if (command == "clear_stack") {
        if (stack == nullptr && size == 0)
            return "success";
        else
            return "error";
    } else if (command == "is_empty") {
        if (stack == nullptr)
            return "success";
        else
            return "error";
    } else {
        if (stack[size - 1] == param)
            return "success";
        else
            return "error";
    }
}


