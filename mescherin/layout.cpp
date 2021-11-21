#include <iostream>

struct S {
   int a;
   int b;
   double d;
};

int main() {
   int a;
   double d;
   int b;
   //S s;
   std::cout << &a <<' '<<&d << ' ' << &b << '\n';
   std::cout << sizeof(S) <<'\n';
   //std::cout << &s.a <<'\n'<<&s.d << '\n' << &s.b << '\n';
   //std::cout << sizeof(s.a) <<'\n';
}
