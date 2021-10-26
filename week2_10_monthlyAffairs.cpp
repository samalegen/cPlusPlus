#include <iostream>
#include <vector>
#include <string>

void add(std::vector<std::vector<std::string>>& month) {
    int i;
    std::cin >> i;
    std::string s;
    std::cin >> s;
    month[i - 1].push_back(s);
}

void dump(const std::vector<std::vector<std::string>>& month)  {
    for (auto i : month) {
        if (i.size() == 0) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << i.size();
            for (auto j : i) {
                std::cout << " " << j;
            }
            std::cout << std::endl;
        }
    }
}

void next(const std::vector<int> months, int& point, std::vector<std::vector<std::string>>& month) {
    point++;
    if (months[point -1] > months[point]) {
        for (int i = (months[point]); i <= months[point - 1]; i++) {
            auto k = month[i - 1];
            auto b = month[months[point] - 1];
//            b.insert(end(b), begin(k), end(k));
            for (auto j : k) {
                month[months[point] - 1].push_back(j);
            } 
        }
    }
    month.resize(months[point]);
}

int main() {
    std::vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Q;
    int pointMonth = 0;
    std::cin >> Q;
    std::vector<std::vector<std::string>> current_month(months[pointMonth]);

    for (int i = 0; i < Q; i++) {
        std::string operation;
        std::cin >> operation;
        if (operation == "ADD") {
            add(current_month);
        }
        if (operation == "NEXT") {
            next(months, pointMonth, current_month);
        }
        if (operation == "DUMP") {
            dump(current_month);
        }
    }
}
