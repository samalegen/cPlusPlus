#include <iostream>
#include <vector>

struct Day {
    int num;
    std::string task;
};

void add(std::vector<std::vector<std::string>>& s) {
    int i;
    std::cin >> i;
    std::cin >> s[i - 1].push_back();
}

void dump(const int& i)  {

}

void next(int& month_count, std::vector<std::vector<std::string>>& s, const std::vector<int>& year) {
    month_count++;
    std::vector<std::vector<std::string>> tmp = s;
    //s.clear();
    s.resize(year[month_count]);
    if (s.size() < tmp.size()) {
        for (int i = s.size(); i <= tmp.size(); ++i) {
            if (tmp[i].size() != 0) {
                s[s.size() - 1].push_back(tmp[i]);
            }
        }
    }

}
int main() {
    std::vector<int> year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};
    std::vector<std::vector<std::string>> month;
    int month_count = 0;
    month.resize(year[month_count]);
    std::string operation;
    int count;
    std::cin >> count;
    for (int i = 0; i < count; ++i) {
        std::cin >> operation;
        if (operation == "ADD") {
            add(month);
        }
        if (operation == "NEXT") {
            next(month_count, month, year);
        }

    }
    int b = 1;
    for (auto i : month) {
        for (auto k : i) {
            std::cout << b << ": " << k << " ";
            ++b;
        }
        
    }
}
