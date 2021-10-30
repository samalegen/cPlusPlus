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
            string bus, buses;
            cin >> bus;
            vector<string> stopForBus;
            vector<string> stopBus;
            map<string, vector<string>> result;
            for (auto i : busCourse) {
                buses = i.first;
                stopBus = i.second;
                if (buses == bus) {
                    for (auto f : stopBus) {
                        stopForBus.push_back(f); 
                    }
                    for (auto g : busCourse) {
                        buses = g.first;
                        stopBus = g.second;
                        for (auto d : stopForBus) {
                            for (auto s : stopBus) {
                                if (d == s) { 
                                    result[buses] = stopForBus;
                                }
                            }
                        }
                
                    }
                }
            }
//            if (stopForBus.size() == 0) {
//                cout << "No bus" << endl;
//            } else if (stopForBus.size() == 1) {
//                cout << "no interchange" << endl;
//            } else {
//                for (auto i : busCourse) {
//                    stops = i.second;
//                    if (i == bus) {
//                        for (auto j : stops) {
//                            stopBus.push_back(j);
//                        }
//                    }
//                }
//                for (auto i : stopBus) {
//                    cout << "Stop " << i << ": ";
//                    for
//                }
//            }
                
        }
    }
}
