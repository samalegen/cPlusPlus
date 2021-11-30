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
    if (s.length() > 25) {
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

    
  
    
