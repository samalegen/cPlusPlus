#include <iostream>
#include <cstring>
//3.2 Constructors and destructors.

class String {
private:
   char* str = nullptr;
   size_t sz = 0;

public:
   //String() {};
   //Коструктор реализован через делиирующий конструктор
   /*String(const String& s) {
      sz = s.sz;
      str = new char[sz];
      memcpy(str, s.str, sz);
   }
   */
   String() = default; //Since c11 Просим компилятор создать конструктор по умолчанию
   String(int i, char c) = delete; //При компиляции запрещаем создавать конструктор от  int and char
   //Делигирующий коструктор сщздать конструктор с такими параметрами и доделать чтото еще
   String(const String& s): String(s.sz, '\0') {
      memcpy(str, s.str, sz);
   }
   String(size_t sz, char c = '\0') {
      this->sz = sz;
      str = new char[sz];
      memset(str, c, sz);
      //for (size_t i = 0; i < sz; i++) { //Не эффективный код так как копирует по одному байту за раз. А процессор может за раз копировать по машинному слову.
      //   str[i] = c;
      //}
   }

   ~String() {
      delete[] str;
   }
};

int main() {
   size_t t = 10;
   String s(t, 'f');
   String ss = s;

}
