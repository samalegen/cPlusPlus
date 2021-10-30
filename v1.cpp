#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void CHANGE_CAPITAL(const string& country, const string& new_capital, map<vector<string>, vector<string>>& m) {
    vector<string> vCountry, vCountryNew;
    vector<string> vCapital, vCapitalNew;
    bool flag = true;
    for (auto const &i : m) {
        vCountry = i.first;
        vCapital = i.second;
        for (const auto& j : vCountry) {
//            if (j == country && second.size() == 2) {
//                flag = false;
//                cout << "Country country hasn't changed its capital" << endl;
//            }
            if (j == country && vCapital.size() == 1) {
                flag = false;
                vCapital.push_back(new_capital);
                m[vCountry] = vCapital;
                cout << "Country " << country<< " has changed its capital from " << vCapital[0] <<  " to " << new_capital << endl;;
            }
            else {
                flag = false;
                cout << "Country country hasn't changed its capital" << endl;
            }
        }
    }
    if (flag) {
        cout << "Introduce new country " <<  country << " with capital " << new_capital << endl;
        vCountryNew.push_back(country);
        vCapitalNew.push_back(new_capital);
        m[vCountryNew] = vCapitalNew;
    }
}

int main() {
    int Q; 
    cin >> Q;
    string operation;
    string country, new_capital;
    map<vector<string>, vector<string>> dataBase;
    for (int i = 0; i < Q; ++i) {
        cin >> operation;
        if (operation == "CHANGE_CAPITAL") {
            cin >> country >> new_capital;
            CHANGE_CAPITAL(country, new_capital, dataBase);
        }
//        if (operator == "RENAME") {
//            RENAME();
//        }
//        if (operator == "ABOUT") {
//            ABOUT();
//        }
//        if (operator == "DUMP") {
//            DUMP();
//        }
    }
}
