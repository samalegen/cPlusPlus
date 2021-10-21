#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
    
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 < s2 && s1 < s3) {
        cout << s1;
    }
    if (s2 < s1 && s2 < s3) {
        cout << s2;
    }
    if (s3 < s2 && s3 < s1) {
        cout << s3;
    }


    return 0;

}