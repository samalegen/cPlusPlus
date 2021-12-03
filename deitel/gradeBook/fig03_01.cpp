#include <iostream>
#include "GradeBook.h"


int main() {
    GradeBook myBook("Badoooo", "Alexey"), book("ssfrd", "Olga");
    std::cout << myBook.getCourseName() << std::endl;
    std::string nameOfCourse;
    std::getline(std::cin, nameOfCourse);
    myBook.setCourseName(nameOfCourse);
    std::cout << myBook.getCourseName() << std::endl;
    myBook.displayMessage();
    myBook.determineClassAverage();

}
