#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    int count = 0;
    int index = 0;
    for(auto i : s) {
        if (i == 'f') {
            count++;
            if (count == 2) {
                cout << index;
                break;
            }
        }
        index ++;
    }
    if (count == 0) {
        cout << -2 << endl;
    }
    else if (count < 2) {
        cout << -1 << endl;
    }
    return 0;
}