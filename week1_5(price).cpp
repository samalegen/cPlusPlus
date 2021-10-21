#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    double price = 0;
    if (n > a && n <= b) {
        //price = (n - (n * (x / 100.0)));
        cout << (n - (n * (x / 100.0))) << endl;
    }
    else if (n > b) {
        //price = (n - (n * (y / 100.0)));
        cout << (n - (n * (y / 100.0))) << endl;
    }
    else {
        cout << n << endl;
    }
    
    
    return 0;
}