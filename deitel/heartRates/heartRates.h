#include <string>

class HeartRates {
private:
    std::string name;
    std::string surname;
    int month;
    int day;
    int year;
public:
    HeartRates(std::string name, std::string surname, int day, int month, int year);
    void setName(std::string);
    void setSurname(std::string);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    std::string getName();
    std::string getSurname();
    int getDay();
    int getMonth();
    int getYear();
    int getMaximumHeartRate();
    void getTargetHeartRate();
    int getAge();

};
