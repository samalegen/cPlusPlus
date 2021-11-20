#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    //std::cout << v[1000];
    v[100'000] = 1;
}
