#include <iostream>
#include <vector>

std::vector<int> Reversed(std::vector<int>& v) {
    
    std::vector<int> tmp;
    
    for (auto i = (v.size() - 1 ); i !=-1; --i) { // i >= 0 и i >= - 1 выдает segmentation fault ???
        tmp.push_back(v[i]);
    }

    return tmp;
}


//std::vector<int> Reversed2(std::vector<int>& v) {
//    std::vector<int> v_tmp = v;
//    int n = v.size();
//    for (auto i = 0; i < n / 2; ++i) { 
//        int tmp = v_tmp_tmp[i];
//        v_tmp[i] = v_tmp[n - 1 - i];
//        v_tmp[n - 1 - i] = tmp;
//    }
//    return v_tmp;
//}
//int main() {
//
//    std::vector<int> c = {1, 2, 3, 4, 5};
//    std::vector<int> n = Reversed(c);
//
//   
//    for (auto i : n) {
//        std::cout << i << "*";
//    }
//    std::cout << "\n";
//}
