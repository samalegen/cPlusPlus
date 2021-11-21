#include <iostream>

int main() {
   int* b = new int[100000];
  
   int n;
   std::cin >> n;
   int h[n];
   std::cout << h[-1] <<'\n';
   
   int* c = b + 5;
   c[-3] = 1;
   long long g = b[-1];
   std::cout << b[-1] <<'\n';
   b[-1] = 1002;
   std::cout << b[-1] <<'\n';

//   delete[] b;
  //int w[100000000];

}
