//
// Created by Nikita on 23.12.2021.
//

#ifndef SETTINGUPGOOGLETEST_MAIN_H
#define SETTINGUPGOOGLETEST_MAIN_H

class Stack {
public:
    int size;
    int* stack;

    Stack(int val);
    void push(int val);
    int pop();
    void clear_stack();
    int is_empty();
    std::string stack_testing (std::string command, int param);
};

#endif //SETTINGUPGOOGLETEST_MAIN_H
