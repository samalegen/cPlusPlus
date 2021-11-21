#include <iostream>

int main() {
   int a = 5;
   double d = (double)a; //C-style type conversion 
   double dd = static_cast<double>(a);//Most used cast

   //reinterpret_cast преобразовывает указатели и ссылки, поволяет посмотреть на область памяти как на другой тип. Т.е интерпритировать то что там лежит как тот тип к которому мы пытаемся привести. Плохая практика.

   double d2 = *reinterpret_cast<double*>(&a);
   double s = 5.0;
   int f = *reinterpret_cast<int*>(&s);
   double d3 = reinterpret_cast<double&>(a);
   //std::cout << d3 <<'\n';

   //const_cast единственный вид преобразования который может приводить к константам и обратно. Плохая практика.

   const int x = 5;
   int& r = const_cast<int&>(x); //UB
   ++r;
   //std::cout << x << ' ' << r << '\n';

}

