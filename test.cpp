#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "Imposible" << endl;
    } 
    else {
        cout << a / b << endl;
    }
    
    return 0;
}