#include <iostream>

using namespace std;

int main() {
	int a, b, factor;
	cin >> a >> b;
	int min;

	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}


	for(int i = 1; i <= min; ++i) {
		if (a % i == 0 && b % i == 0) {
			factor = i;
		}
	}
		
	cout << factor << endl;
	
	return 0;
}
