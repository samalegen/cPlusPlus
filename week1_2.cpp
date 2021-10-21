#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
    
    string s1, s2, s3;
    cin >> s1; 
    cin >> s2; 
    cin >> s3;
    string min = s1;

    if (s2 <= min) {
        min = s2;
    }
    if (min >= s3) {
        min = s3;
    }
    cout << min << endl;



    return 0;

}