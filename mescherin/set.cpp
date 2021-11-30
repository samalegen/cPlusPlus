#include <iostream>
#include <set>
#include <vector>

void set_print(const std::set<std::string>& s) {
   std::cout << s.size() << '\n';
   for (auto i: s) {
      std::cout << i << '\n';
   }
}
void printSet(const std::set<int>& s) {
   for (auto i: s) {
      std::cout << i << '\n';
   }
}
int main() {
   std::set<std::string> famous;
   famous.insert("alexey");
   famous.insert("alexey");
   famous.insert("Olga");
   famous.insert("Foo");
   //set_print(famous);
   famous.erase("Foo");
   //set_print(famous);
   std:: set<int> ints1 {1, 2, 5};
   std:: set<int> ints2 {6, 2, 5, 4};
   std:: set<int> ints3 {1, 2, 5, 5, 2};
   //printSet(ints1);
   //std::cout << ints3.count(5) << '\n';
   std::vector<std::string> v {"a", "b", "a"};
   std::set<std::string> s(begin(v), end(v));
   set_print(s);


}
