
class Date {
private:
    int month;
    int day;
    int yaer;
public:
    Date(int month, int day, int yaer);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    void displayDate();
};
