#include <string>

class Account {
private:
    int balance;
public:
    Account(int);
    void credit(int);
    void debit(int);
    int getBalance();
};
