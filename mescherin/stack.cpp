#include <iostream>
void f() {
    static int i = 0;
    int pi = 3;
    std::cout << i << '\n';
    ++i;
    f();
}
int main() {
    f();

    int* p = new int(3);
    std::cout << *p <<'\n';
    delete p;
}
