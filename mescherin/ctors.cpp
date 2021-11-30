#include <cstring>
#include <iostream>
//3.3. Constructors and destructors

int x = 0;

class Complex {
private:
   double re = 0.0;
   double im = 0.0;
   //int& r;//Не обязательно инициализировать здесь, но в списке инициализации конструктора обязательно нужно проинициализировать
   //const int c;//Такая же ситуация с константами они как и ссылки должны быть проинициализированы при создании. Соответственно их тоже инициализируем через список инициализации
public:
   Complex() {
      std::cout << "AHAHAH\n"; 
   }//Если не определен ни один конструктор то компилятор вызывает конструктор по умолчанию который ничего не делает, но его можно переопределить и заставить что-то делать
   /*
   Complex(double r, double i) {
      re = r;
      im = i;
   }
   */
/* Complex(double r, double i): re(r), im(i), r(x), c(x+1) {}//Список инициализации конструктора, в отличие от предыдущего варианта. поля сразу инициализируются нужными значениями. А не инициализируюся сначала рандомным значением а потом уже тем чем нужно. Поля инициализируются до входа в тело конструктора Поля дожны быть инициализированы посредством списка инициализации втом порядке в каком они были объявлены. Имена параметров коструктора в списке инициалации могут совпадать с полями класса которые нужно инициализировать например Complex(double re, double im): re(re), im(im), r(x)
*/
};
struct A {
   A() {
      std::cout << "A created!\n";
   }
   ~A() {
      std::cout << "A destroyed!\n";
   }
};

class String {
private:
   char* str = nullptr; //Указательна массив
   size_t sz = 0; //Размер строки
//   A a;

public:
   String() {}
   String(size_t n, char c): str(new char[n]), sz(n) {
      std::cout << "String " << sz << '\n';
      memset(str, c, n);
   }
   //Коструктор копирования
   String(const String& s): str(new char[s.sz]), sz(s.sz) {
      memcpy(str, s.str, sz);
   }
   void swap(String& s) {
      std::swap(str, s.str);
      std::swap(sz, s.sz);
   }
   //Определение оператора присваивания
   String& operator=(const String& s) {
      //Copy-and-swap idiom
      String copy = s;
      swap(copy);
      return *this;
/*      delete[] str;//Сначала освобождаем то что было
      str = new char[s.sz];
      sz = s.sz;
      memcpy(str, s.str, sz);
      return *this;
*/
   }
   //Деструктор вызывается автоматически когда объект выходит из области видимости, т.е. уничтожается, происзводит нетривиальные действия освобождает захваченные ресурсы
   ~String() {
      std::cout << "~String " << sz << '\n';
      delete[] str;
   }
};

int main() {
   //Complex c(1.0, 2.0);
   Complex v;
   {
      String s(10, 'a');
//      String ss = s; //Можно написать так String ss(s) вызов конструктора копирования
      String ss(20, 'a');
      ss = s;//Оператор присваивания генерируется автоматически попарно присваивает все поля, если оператор присвивания не определен пользователем
   }
   std::cout << "AAAAA\n";
}

