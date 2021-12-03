#include "GradeBook.h"

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
    int average;
    for(int i = 1; i <= 10; ++i) {
        std::cout << "Enter grade:\n";
        std::cin >> grade;
        total += grade;
    }
    average = total / 10;
    std::cout << "Total of all 10 grades is " << total;
    std::cout << "\nClass average is " << average << '\n';
}

    
  
    
