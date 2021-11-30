#include <string>

class Employee {
private:
    std::string name;
    std::string surname;
    int pay;
public:
    Employee(std::string name, std::string surname, int pay);
    void setName(std::string);
    void setSurname(std::string);
    void setPay(int);
    std::string getName();
    std::string getSurname();
    int getPay();
};
