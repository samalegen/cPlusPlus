#include <iostream>
#include <map>
#include <string>

using namespace std;

std::vector<std::string> toCharVector(const std::string& x) {
    std::vector<std::string> result;
    for (const auto& i : x) {
        result.pish_back(i);
        return result;
}


bool buildCharCounters(const std::string& a, const std::string b) {
    std::vector<std::string> vA = toCharVector(a);
    std::vector<std::string> vB = toCharVector(b);
    std::map<std::string, int> m, c:
    for (const std::string& i : vA) {
        ++m[i];
    }
    for (const std::string& i : vB) {
        ++m[i];
    }

    
}

int main() {
    int n;
    std::cin >> n;

}
