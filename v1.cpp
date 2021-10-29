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
        else if (command == "RENAME") {
            string old_country_name, new_country_name;
            cin >> old_country_name >> new_country_name;
            if (old_country_name == new_country_name || capitals.count(old_country_name) == 0 || capitals.count(new_country_name) != 0) {
                cout << "Incorrect rename, skip" << endl;
            } else {
                cout << "Country " << old_country_name << " with capital " << capitals[old_country_name] << " has been renamed to " << new_country_name << endl;
                capitals[new_country_name] = capitals[old_country_name];
                capitals.erase(old_country_name);
            }
        } else if (command == "ABOUT") {
            string country;
            cin >> country;
            if (capitals.count(country) == 0) {
                cout << "Country " << country << " doesn't exist" << endl;
            } else {
                cout << "Country " << country << " has capital " << capitals[country] << endl;
            }
        } else if (command == "DUMP") {
            if (capitals.empty()) {
                cout << "There are no countries in the world" << endl;
            } else {
                for (const auto& item : capitals) {
                    cout << item.first << "/" << item.second << " ";
                }
                cout << endl;
            }
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
