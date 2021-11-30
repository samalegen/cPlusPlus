#include <iostream>
#include "invoice.h"

int main() {
    Invoice s("as23", "car", 49, 87);
    std::cout << s.getInvoiceAmount();
    std::cout << '\n';
}
