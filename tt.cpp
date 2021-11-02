#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    map<string, vector<string>> busCourse;
    int Q;
    string operation;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        cin >> operation;
        if (operation == "NEW_BUS") {
            string bus, stop;
            int stop_count;
            vector<string> stops;
            cin >> bus >> stop_count;
            for (int i = 0; i < stop_count; ++i) {
                cin >> stop;
                stops.push_back(stop); 
            }
            busCourse[bus] = stops;
        } else if (operation == "BUSES_FOR_STOP") {
            string bus, stop;
            cin >> stop;
            vector<string> stops;
            vector<string> buses;
            bool flag = true;
            for (auto i : busCourse) {
                bus = i.first;
                stops = i.second;
                for (auto j : stops) {
                    if (j == stop) {
                        flag = false;
                        buses.push_back(bus);
                    }
                }
            }
            if (flag) {
                cout << "No stop" << endl;
            }
            for(auto k : buses) {
                cout << k << " ";
            }
            cout << endl;
        } else if (operation == "STOP_FOR_BUS") {
            string foudBus;
            cin >> foudBus;
            for (auto i: busCourse) {

            }
        }
    }
}
