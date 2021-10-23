#include <iostream>

void UpdateIfGreater(int a, int& b) {
    if (a > b) {
        b = a;
    }
}

int main() {
    int x = 6;
    int y = 9;
    UpdateIfGreater(x, y);
    std::cout << y << std::endl;

}
