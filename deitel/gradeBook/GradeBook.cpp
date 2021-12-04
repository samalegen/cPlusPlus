#include "GradeBook.h"
#include <iomanip>

GradeBook::GradeBook(std::string course, std::string teaher) {
    setCourseName(course);
    setteacherName(teaher);
}
void GradeBook::displayMessage() {
    std::cout << "Welcome to " << getCourseName() << std::endl;
    std::cout << "This course is presented by: " << getteacherName() << std::endl;
}
void GradeBook::setCourseName(std::string s) {
    if (s.length() <= 25) {
        courseName = s;
    }
    else {
        courseName = s.substr(0, 25);
        std::cout << "Name  \"" << s << "\" exeeds maximum length.\n";
    }
}
std::string GradeBook::getCourseName() {
    return courseName;
}
void GradeBook::setteacherName(std::string s) {
    teacherName = s;
}
std::string GradeBook::getteacherName() {
    return teacherName;
}
void GradeBook::determineClassAverage() {
    int total = 0;
    int grade;
    int counter = 0;
    double average;
    std::cout << "Enter grade -1 to quit\n";
    std::cin >> grade;
    while(grade != -1) {
        total += grade;
        ++counter;
        std::cin >> grade;
    }
    if(counter != 0) {
        average = static_cast<double>(total) / counter;
        std::cout << "Total of all " << counter << " grades is " << total;
        std::cout << "\nClass average is " << std::setprecision(2) << std::fixed << average << '\n';
    }
    else {
        std::cout << "No gades were entering\n";
    }
}

    
  
    
