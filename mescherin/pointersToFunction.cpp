#include <iostream>
//overload function
void f(double){
   std::cout << 1 <<'\n';
}

void f(int) {
   std::cout << 2 <<'\n';
}
void foo(int x, int y = 5) {
   std::cout << x + y << '\n';
}

int main() {
   f(0.5f);
   f(5);
   foo(2, 4);
   foo(4);
   void(*p)(int, int) = &foo;
   std::cout << (void*)p << '\n';
   p += 10;
   std::cout << p << '\n';
   char s = 't';
   char* ps = &s;
   std::cout << ps << '\n';
   std::cout << *ps << '\n';
}
