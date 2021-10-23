#include <iostream>
#include <vector>
#include <string>

void printTemp(const std::vector<int>& s) {
    double count = 0;
    for (auto i : s) {
        count += i;
        
    }
    std::vector<int> c;
    int num = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] > (count / s.size())) {
            c.push_back(i);
            num++;
        }
    }
    std::cout << num << "\n";
    for (auto i : c) {
        std::cout << i << " "; 
    }
    std::cout << "\n";
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int& i : v) {
        std::cin >> i;
    }
    printTemp(v);
}
