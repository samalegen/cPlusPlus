#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    if (a != 0) {
        double discriminant = (b * b) - (4 * a * c);
        //cout << discriminant << endl;
        if (discriminant > 0) {
            double sqrt1 = (-b + sqrt(discriminant)) / (2 * a);
            double sqrt2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << sqrt1 << " " << sqrt2 << endl;
        } else if (discriminant == 0) {
        double sq1 = -(b / (2.0 * a));
        cout << sq1 << endl;
        }
    }
    
   
    else if (b != 0) {
        if (c != 0) {
            cout << (-c)/b;
        } else cout << 0;

    }
    
    return 0;
}