#include <iostream>

using namespace std;

int  main() {
    int i;
    cin >> i;
    for(int t = 0; t < i; ++t) {
        for(int j = 0; j < i; ++j) {
            cout << "*   ";
        }
        cout << "\n";
        for(int j = 0; j < i; ++j) {
            cout << "   *";
        }
        cout << "\n";
    }
}
