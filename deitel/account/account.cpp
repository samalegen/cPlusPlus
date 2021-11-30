#include <iostream>
#include "account.h"

Account::Account(int initBalansce) {
    if (initBalansce < 0) {
        balance = 0;
        std::cout << "Balance incorrect\n"; 
    }
    else {
    balance = initBalansce;
    }
}
void Account::credit(int credit) {
    balance += credit;
}
void Account::debit(int debit) {
    if (debit > balance) {
        std::cout << "Balance too small HAHAHA\n";
    }
    else {
        balance -= debit;
    }
}
int Account::getBalance() {
    return balance;
}
