#include <iostream>
#include "heartRates.h"

HeartRates::HeartRates(std::string name, std::string surname, int day, int month, int year) {
    setName(name);
    setSurname(surname);
    setDay(day);
    setMonth(month);
    setYear(year);
}
void HeartRates::setName(std::string name) {
    this->name = name;
}
void HeartRates::setSurname(std::string surname) {
    this->surname = surname;
}
void HeartRates::setDay(int day) {
    this->day = day;
}
void HeartRates::setMonth(int month) {
    this->month = month;
}
void HeartRates::setYear(int year) {
    this->year = year;
}
std::string HeartRates::getName(){
    return name;
}
std::string HeartRates::getSurname() {
    return surname;
}
int HeartRates::getDay() {
    return day;
}
int HeartRates::getMonth() {
    return month;
}
int HeartRates::getYear() {
    return year;
}
int HeartRates::getMaximumHeartRate() {
    return 220 - getAge();
}
int HeartRates::getAge() {
    int day, month, year;
    std::cout << "Enter day\n";
    std::cin >> day;
    std::cout << "Enter month\n";
    std::cin >> month;
    std::cout << "Enter year\n";
    std::cin >> year;
    int result = year - this->year;
    if (this->month < month) {
        ++result;
    }
    if (this->month == month && this->day < day) {
        ++result;
    }
    return result;
}
void HeartRates::getTargetHeartRate() {
    int s = getMaximumHeartRate();
    std::cout << (s/100)*50 << "---" << (s/100)*85 << '\n';
}

