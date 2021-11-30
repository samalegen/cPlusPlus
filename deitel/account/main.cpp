#include <iostream>
#include "account.h"

int main() {
    Account a(-90);
    Account b(100);
    std::cout << b.getBalance() << std::endl;
    b.credit(100);
    std::cout << b.getBalance() << std::endl;
    b.debit(300);
    std::cout << b.getBalance() << std::endl;
    b.debit(50);
    std::cout << b.getBalance() << std::endl;
}
