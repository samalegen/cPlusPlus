#include <iostream>
#include <string>
#include <map>

void printMap(const std::map<std::string, int>& m) {
    for (const auto& [key, value] : m) {
        std::cout << key << " : " << value << std::endl;
    }
}
int main() {
    std::map<std::string, int> numMap = {{"one", 1}, {"two", 2}};
    printMap(numMap);
}
