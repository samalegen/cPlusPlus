#include <iostream>

void swap (int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main() {
    int a = 777;
    int b = 2;
    int* pa = &a;
    int* pb = &b;
    std::cout << pa << ' ' << pb << ' ' << pb - pa <<'\n';
    b = *(--pb);
    std::cout << b;
    void* ppp = pa;
/*
    int a = 9;
    std::cout << &a << '\n';
    int* p = &a;
    p += 6;

    int* d = &a;
    std::cout << p - d << '\n';


    std::cout << ++(++p) << '\n';
    std::cout << &p << '\n';
    int** pp = &p;
    std::cout << pp << '\n';
    std::cout << **pp << '\n';
    std::cout << p << ' ' << *p << ' ' << **pp <<'\n';
*/    
    /*
    int a = 10;
    int b = 5;
    std::cout << "a = " << a << " b = " << b << '\n';
    swap(&a, &b);
    std::cout << "a = " << a << " b = " << b << '\n';
    */
}
