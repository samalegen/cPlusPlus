#include <iostream>
#include <map>
#include <set>

std::set<std::string> BuildMapValuesSet(const std::map<int, std::string> m) {
    std::set<std::string> result;
    for(auto i : m) {
        result.insert(i.second);
    }
    return result;
} 
int main() {


}
