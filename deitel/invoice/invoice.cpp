#include <iostream>
#include "invoice.h"

Invoice::Invoice(std::string articul, std::string title, int price, int count) {
    setArticul(articul);
    setTitle(title);
    setPrice(price);
    setCount(count);
}
void Invoice::setArticul(std::string articul) {
    this->articul = articul;
}
void Invoice::setTitle(std::string title) {
    this->title = title;
}
void Invoice::setPrice(int price) {
    this->price = price;
}
void Invoice::setCount(int count) {
    if (count < 0) {
        this->count = 0;
    }
    else {
        this->count = count;
    }
}
std::string Invoice::getArticul() {
    return articul;
}
std::string Invoice::getTitle() {
    return title;
}
int Invoice::getPrice() {
    return price;
}
int Invoice::getCount() {
    return count;
}
int Invoice::getInvoiceAmount() {
    return count * price;
}
