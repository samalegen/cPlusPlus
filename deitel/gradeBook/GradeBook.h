#include <iostream>
#include <string>

class GradeBook {
    std::string courseName;
    std::string teacherName;
public:
    GradeBook(std::string course, std::string name);
    std::string getCourseName();
    void setCourseName(std::string);
    void displayMessage();
    void setteacherName(std::string);
    std::string getteacherName();
    void determineClassAverage();
};
