#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> s, w;
    int x;
    cin >> x;
    s.push_back(x);
    w.push_back(x % 2);
    int n = x;
    while(n > 0) {
//        cout << n << endl << n % 2 << endl;
        n /= 2;
        s.push_back(n);
        w.push_back(n % 2);
    }
    for (auto i = w.size(); i > 0; --i) {
        cout << w[i];
    }
    cout << endl;
    for (auto i = 0; i < ((w.size()) - 1); ++i) {
        cout << w[i];
    }

    cout << endl;
    for (auto i = w.size(); i > 0; --i) {
        cout << w[i];
    }
    cout << endl;
    return 0;
}
