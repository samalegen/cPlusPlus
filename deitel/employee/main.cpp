#include <iostream>
#include "employee.h"

int main() {
    Employee a("Alexey", "Samsonov", 120000);
    Employee b("Olga", "Samsonov", 110000);
    std::cout << a.getName() << ' ' << a.getSurname() << ' ' << a.getPay() * 12 << '\n';
    std::cout << b.getName() << ' ' << b.getSurname() << ' ' << b.getPay() * 12 << '\n';
    a.setPay(a.getPay() + (a.getPay() / 10));
    b.setPay(b.getPay() + (b.getPay() / 10));
    std::cout << a.getName() << ' ' << a.getSurname() << ' ' << a.getPay() * 12 << '\n';
    std::cout << b.getName() << ' ' << b.getSurname() << ' ' << b.getPay() * 12 << '\n';
}
