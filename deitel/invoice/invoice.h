#include <string> 

class Invoice {
private:
    std::string articul;
    std::string title;
    int price;
    int count;
public:
    Invoice(std::string articul, std::string title, int price, int count);
    void setArticul(std::string);
    void setTitle(std::string);
    void setPrice(int);
    void setCount(int);
    std::string getArticul();
    std::string getTitle();
    int getPrice();
    int getCount();
    int getInvoiceAmount();
};
