#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool IsPalindrom(string s){
    string p;
    vector<char> v = {};

    for(int i = s.size() - 1; i >= 0; i--) {
        v.push_back(s[i]);
    }
   

    for(auto i : v) {
        p += i;
    //    cout << i;
    }
    
   // cout << p << endl;

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

    cout << IsPalindrom(str);

    return 0;
}
