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
            cin >> bus; //получаем номер маршрута
            vector<string> stopForBus; //хранит все остановки одного маршрута
            vector<string> stopBus;
            map<string, vector<string>> result;//для хранения результатов название остановки хранится в строке и маршруты проходящие через нее в векторе
            for (auto i : busCourse) {//пробегаемся по парам ключ значение
                buses = i.first;//ключ записываем в переменную string buses
                stopBus = i.second;//вектор-значение остановок маршрута
                if (buses == bus) {//если ключ который хранится в buses равен значению введенному пользователем хранящимся в bus то
                    for (auto f : stopBus) {//пробегаемся циклом по вектору остановок маршрута
                        stopForBus.push_back(f); //дописываем в конец вектора который был создан для хранения всех остановок одного маршрута
                    }
                    for (auto g : busCourse) { //пробегаемся по словарю для извлечения ключ:значение
                        buses = g.first;//записываем в переменную маршрут
                        stopBus = g.second;//заптсывает в переменную вектор остановок маршрута
                        for (auto d : stopForBus) {//пробегаемся по вектору куда мы собирали все остановки искомого мршрута в d хранится очередная остановка искомого маршрута
                            for (auto s : stopBus) { //пробегаемся по очередному вектору остановок маршрута
                                if (d == s) { //если d остановка искомого маршрута совпадает с s остановкой очердного маршрута. Есди истина в словарь result записываем ключ остановка искомого маршрута значение 
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
