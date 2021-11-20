#include <iostream>
#include <string>

using namespace std;

void getMiddle(string s) {
    string rez;
    if(s.size() % 2 == 0) {
        rez = s[(s.size() / 2) + 1];
        cout << rez;
    }
    else {
        rez =  s[s.size() / 2] + s[s.size() / 2 + 1];
        cout << rez;
    }
    cout << endl;
}
int main() {

    int a = 2, b = 3;
    int x = 1, y = 1;
    x = y += 1;
    cout << x << endl;
    cout << y << endl;
    int c = false ? a : b;
    cout << c << endl;
    x > 2 ? x = 33: x = 44;
    cout << x;
    x > 2 ? x = 33: x = 44;
    cout << x;
    x = (b == 3 ? 1:2);
}
