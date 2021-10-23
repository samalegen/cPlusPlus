#include <iostream>
#include <vector>

void Reverse(std::vector<int>& v) {
    
    std::vector<int> tmp;
    
    for (auto i = (v.size() - 1 ); i !=-1; --i) { // i >= 0 и i >= - 1 выдает segmentation fault ???
        tmp.push_back(v[i]);
    }

    v = tmp;
}

int main() {
//    std::vector<int> n = {1, 2, 3};
//
//    for (auto i : n) {
//        std::cout << i << "*";
//    }
//    std::cout << "\n";
//
//    Reverse(n);
//
//   
//    for (auto i : n) {
//        std::cout << i << "*";
//    }
//    std::cout << "\n";
}
