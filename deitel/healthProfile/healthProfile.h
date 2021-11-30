#include <string>

class HeartRates {
private:
    std::string name;
    std::string surname;
    int month;
    int day;
    int year;
    int hight;
    int weight;
public:
    HeartRates(std::string name, std::string surname, int hight, int weight, int day, int month, int year);
    void setName(std::string);
    void setSurname(std::string);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void setHight(int);
    void setWeight(int);
    std::string getName();
    std::string getSurname();
    int getDay();
    int getMonth();
    int getYear();
    int getHight();
    int getWeight();
    int getMaximumHeartRate();
    void getTargetHeartRate();
    int getAge();

};
