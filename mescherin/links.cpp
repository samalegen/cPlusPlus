#include <iostream>

void swap(int& a, int& b) {
   int tmp = a;
   a = b;
   b = tmp;
}
int& f(int& x) {
   ++x;
   return x;
}
int& g(int x) {
   ++x;
   return x;
}
int main() {
   int a = 5;
   int b = 7;
   std::cout << a << ' ' << b << '\n';
   swap(a, b);
   std::cout << a << ' ' << b << '\n';
   int x = 1;
   std::cout << f(x) << '\n';
   f(x) = 13;
   std::cout << f(x) << '\n';
   int t = 1;
   
   //constants
   const int d = 5;
}
