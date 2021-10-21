#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPolindrome(string s){
    string p = s;
     reverse(p.begin(), p.end());

    if(s == p){
        return true;
    }
    else {
        return false;
    }
}



int main() {
    string str;
    cin >> str;

    cout << isPolindrome(str);

    return 0;
}
