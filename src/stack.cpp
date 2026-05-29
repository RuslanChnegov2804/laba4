#include "stack.h"
void Stack::push(int val) { data.push_back(val); }
void Stack::pop() { if (!data.empty()) data.pop_back(); }
int Stack::top() const { return data.empty() ? 0 : data.back(); }
void Stack::print() const {
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i] << (i == data.size() - 1 ? "" : " ");
    }
    std::cout << "\n";
}
int Stack::size() const { return data.size(); }
void Stack::clear() { data.clear(); }
bool Stack::empty() const { return data.empty(); }