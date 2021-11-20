#include <iostream>

int main() {
    int a = 9;
    std::cout << &a << '\n';
    int* p = &a;
    std::cout << p << '\n';
    std::cout << &p << '\n';
    int** pp = &p;
    std::cout << pp << '\n';
    std::cout << **pp << '\n';
}
