#include <iostream>

struct S; //объявление структуры
struct S {
   int x = 6;
   char c = 'f';
   std::string str;
   struct SS {
      int a = 3;
      int b;
   };

   S get() {
      std::cout <<"Get called\n";
      return *this; //this это указатель на текущий объект. Чтобы вернуть текущий объект this нужно разыменовать
   }
   int ds(int x) {
      return this->x + x; // когда локальгый х затмевает х который является полем класса тогда для обращения к нему нужно писать кострукцию this->x
   }

   int sum(int, int);//объявить метод можно внутри структуры а определить уже вне ее
   int f(double d) {
       std::cout << "Ahhaaahaaa" << d << '\n';
       return x + d;
   }
};
int S::sum(int a, int b) {
   return a + b;
}

int main() {
   S ss;
   ss.x = 10;
   std::cout << ss.c << '\n';
   std::cout << ss.f(3.14) << '\n';
   S::SS sss;
   std::cout << sss.a <<'\n';

   S* p = &ss;
   std::cout << (*p).c << '\n';
   std::cout << p->c << '\n';//Оператор -> аналогичен записи выше. Значит взять указатель на структуру разыменовать и обатится к полю или методу:
   std::cout << p -> f(2.3)  << '\n';

   S sa{2, 'd', "asd"};//агрегатная инициализация при создании объекта класса. Работает только тогда когда все поля public
   std::cout << sa.c;

   S rt = sa.get();
   std::cout << rt.x << '\n';

   
}
