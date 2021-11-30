#include <iostream>
#include "date.h"

Date::Date(int month, int day, int yaer) {
    setMonth(month);
    setDay(day);
    setYear(yaer);
}
void Date::setMonth(int month) {
    if (month <= 12 && month > 0) {
        this->month = month;
    }
    else {
        this->month = 1;
    }
}
void Date::setDay(int day) {
    this->day = day;
}
void Date::setYear(int yaer) {
    this->yaer = yaer;
}
int Date::getMonth() {
    return month;
}
int Date::getDay() {
    return day;
}
int Date::getYear() {
    return yaer;
}
void Date::displayDate() {
    std::cout << getMonth() << '/' << getDay() << '/' << getYear() << '\n';
}
