#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

std::vector<char> toCharVector(const std::string& x) {
    std::vector<char> result;
    for (const auto& i : x) {
        result.push_back(i);
        return result;
}


bool buildCharCounters(const std::string& a, const std::string& b) {
    std::vector<char> vA = toCharVector(a);
    std::vector<char> vB = toCharVector(b);
    std::map<char, int> m, c:
    for (const char& i : vA) {
        ++m[i];
    }
    for (const char& i : vB) {
        ++c[i];
    }
    if (aV == aB) {
        return true;
    }
    else {
        return false;
    }

    
}

int main() {
    int n;
    std::cin >> n;

}
