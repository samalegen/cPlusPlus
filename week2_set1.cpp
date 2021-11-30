#include <iostream>
#include <set>

int main() {
    int count;
    std::string s;
    std::set<std::string> str;
    std::cin >> count;
    for(int i = 0; i < count; ++i) {
        std::cin >> s;
        str.insert(s);
    }
    std::cout << str.size() << '\n';
}
