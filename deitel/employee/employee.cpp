#include <iostream>
#include "employee.h"

Employee::Employee(std::string name, std::string surname, int pay) {
    setName(name);
    setSurname(surname);
    setPay(pay);
}
void Employee::setName(std::string name) {
    this->name = name;
}
void Employee::setSurname(std::string surname) {
    this->surname = surname;
}
void Employee::setPay(int pay) {
    if (pay < 0) {
        this->pay = 0;
    }
    else {
        this->pay = pay;
    }
}
std::string Employee::getName() {
    return name;
}
std::string Employee::getSurname() {
    return surname;
}
int Employee::getPay() {
    return pay;
}
