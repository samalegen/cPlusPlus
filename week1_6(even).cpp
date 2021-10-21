#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(auto i = a; i <= b; ++i) {
        if ((i % 2) == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}