#pragma once
#include <vector>
#include <iostream>

class Stack {
private:
    std::vector<int> data;
public:
    void push(int val);
    void pop();
    int top() const;
    void print() const;
    int size() const;
    void clear();
    bool empty() const;
};