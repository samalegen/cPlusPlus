#include <iostream>
#include <map>
#include <string>
#include <vector>

void changeCapital(const std::string& a, const std::string& b, std::map<std::string, std::vector<std::string>>& m) {
    bool flag;
    std::vector<std::string> capitals;
    if (m.count(a)) {
        flag = false;
    }
    else {
        flag = true;
    }
    if (flag) {
        std::cout << "Introduce new " << a << " with capital " << b << "\n";
        capitals.push_back(b);
        m[a] = capitals;
    }
    else {
        for (const  auto& i : m) {
            if (i.second.size() == 1) {
                std::cout << "Country " << a << " has changed its capital from " << i.second[0] << " to " << b;
                i.second.push_back(b);
            }
            else if (i.second.size() == 2) {
                std::cout << "Country " << a << " hasn't changed its capital";
            }
        }
    }
//    std::vector<std::string> country
//    m[a] = b;
}
void rename() {

}
void about() {

}
void dump() {

}
int main () {
    int Q;
    std::cin >> Q;
    std::string operation;
    std::map<std::string, std::vector<std::string>> countryCapital;
    for (int i = 0; i < Q; ++i){
        std::cin >> operation;
        if (operation == "CHANGE_CAPITAL") {
            std::string country, new_capital;
            std::cin >> country >> new_capital;
//            changeCapital(country, new_capital, countryCapital);
        }
        if (operation == "RENAME") {
            rename();
        }
        if (operation == "ABOUT") {
            about();
        }
        if (operation == "DUMP") {
            dump();
        }
    }
}
