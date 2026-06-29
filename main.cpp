#include <iostream>
#include "include/stack.h"

int main() {
    Stack s;

    std::cout << "=== Stack Demo ===" << std::endl;

    std::cout << "Empty? " << (s.empty() ? "yes" : "no") << std::endl;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "After push 10, 20, 30: ";
    s.print();

    std::cout << "Top: " << s.top() << std::endl;
    std::cout << "Size: " << s.size() << std::endl;

    s.pop();
    std::cout << "After pop: ";
    s.print();

    s.clear();
    std::cout << "After clear. Empty? " << (s.empty() ? "yes" : "no") << std::endl;
    std::cout << "Size: " << s.size() << std::endl;

    return 0;
}
