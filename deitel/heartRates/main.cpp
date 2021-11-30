#include <iostream>
#include "heartRates.h"

int main() {
    HeartRates a("Alexey", "Samsonov", 7, 2, 1986);

    std::cout << a.getAge() <<'\n';
    std::cout << a.getMaximumHeartRate() <<'\n';
    a.getTargetHeartRate();
}
