#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> s = {}, w = {};
    int x;
    cin >> x;
    s.push_back(x);
    w.push_back(x % 2);
    int n = x;

    while (n != 0) {
        n /= 2;
        w.push_back(n % 2);
    }
    for (int i = (w.size() - 2); i >= 0; --i) {
        cout << w[i];
    }
    cout << endl;

    return 0;
}
