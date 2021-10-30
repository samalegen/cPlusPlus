#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

std::vector<char> toCharVector(const std::string& x) {
    std::vector<char> result;
    for (const char& i : x) {
        result.push_back(i);
    }
    return result;
}


bool buildCharCounters(const std::vector<char>& a, const std::vector<char>& b) {
//    std::vector<char> vA = toCharVector(a);
//    std::vector<char> vB = toCharVector(b);
    std::map<char, int> m, c;
    for (const char& i : a) {
        ++m[i];
    }
    for (const char& i : b) {
        ++c[i];
    }
    if (c == m) {
        return true;
    }
return false;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> result;
    for (int i = 0; i < n; ++i) {
        std::string a, b;
        std::cin >> a >> b;
        std::vector<char> m = toCharVector(a);
        std::vector<char> c = toCharVector(b);
        if (buildCharCounters(m, c)) {
            result.push_back("YES");
        }
        else {
            result.push_back("NO");
        }
    }
    for (auto i : result) {
        std::cout << i << "\n";
    }
}
