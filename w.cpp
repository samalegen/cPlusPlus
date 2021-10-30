#include <iostream>

using namespace std;

void foo(int& n) {
    int i;
    cin >> i;
    cout << n << "  " << i <<  endl;
    ++n;
}

int main() {
    int q;
    int n = 1;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        foo(n);
    }
}
