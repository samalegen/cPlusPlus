#include <iostream>

int main() {
    long* ptr;
    ptr = new long;
    *ptr = 888;
    std::cout << *ptr << '\n';
    delete ptr;
    long* p = new long;
    *p = 777;
    std::cout << *ptr << '\n';
    std::cout << '\n';
    std::cout << '\n';
    double* pd = new double[3] {1000.0, 2000.0, 3000.0};
    std::cout << *(pd + 0) << *(pd + 1) << *(pd + 2) << '\n';// нотация указателей
    std::cout << pd[0] << pd[1] << pd[2] << '\n';// нотация массивов
}
