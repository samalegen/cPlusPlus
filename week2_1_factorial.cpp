#include <iostream>

using namespace std;

int Factorial(int x) {

    int n = 1;
    if(x < 0) {
        return 1;
    }
    else {
    for(int i = 1; i <= x; ++i) {
        n *= i;
    }
    }
    return n;
}   

int main() {
    int t;
    cin >> t;

    cout << Factorial(t);

    return 0;
}
