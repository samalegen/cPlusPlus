#include <iostream>
#include <string>
#include <vector>

//using namespace std;

void MoveStrings(std::vector<std::string>& source, std::vector<std::string>& destination) {
    for (auto i : source) {
        destination.push_back(i);
    }
    source.clear();
}

//int main () {
//    std::vector<std::string> a = {"a", "ee", "ere", "eeer", "eeer", "eeer"};
//    std::vector<std::string> b = {"1", "2", "3", "4", "5", "6", "7"};
//    MoveStrings(a, b);
//    for (auto i : a) {
//        std::cout << i << " ";
//    }
//    std::cout << "\n";
//
//    for (auto i : b) {
//        std::cout << i << " ";
//    }
//
//    std::cout << "\n";
//}
