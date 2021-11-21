#include <iostream>
//constatnts
void f(int&);
void f(const int&);
//Допустимая перегрузка функций


int main() {
   const int a = 5;
   const int* p = &a; //указатель на константу
   ++p; //OK
   //++*p; //CE
   int b = 10;
   int* const pp = &b; //Константный указатель усли const стоит после типа указателя это конст. указатель
   //++pp; //CE
   ++*pp; //OK меняем то что под указателем, так как на то что указывает не костантное
   const int* const ppp = &a; //Константный указатель на константу

   int f = 5;
   int& r = f;
   const int& cr = f;//Константная ссылка
   ++r;
   //++cr; // CE
   std::cout << cr << '\n';
}
