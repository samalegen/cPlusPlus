#include <iostream>
#include <string> 
#include <vector>

using namespace std;
/*bool isPalindrom(string s) {
    for(int i = 0; i < s.size() / 2; ++i) {
        if(s[i] != s[s.size() - i - 1]) {
            return false;
        }
        else {
            return true;
        }
    }
}
*/

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

vector<string> PalindromFilter(vector<string> words, int minLength) {

    vector<string> s = {};
    

    for(auto v : words) {
        if(IsPalindrom(v) && v.size() >= minLength) {
            s.push_back(v);
        } 
    } 
    return s;
}

int main() {
/*
    vector<string> s1 = {"weew", "bro", "code" };
    vector<string> s2 = {"abacaba", "aba"};
    vector<string> s3 = {"abacaba", "aba"};
    int x1 = 4;
    int x2 = 2;
    int x3 = 5;
    vector<string> s;
    
    s = PalindromFilter(s1, x1);
    for(auto v : s) {
        cout << v << " ";
    }
    cout << endl;

    s = PalindromFilter(s2, x2);
    for(auto v : s) {
        cout << v << " ";
    }
    cout << endl;

    s = PalindromFilter(s3, x3);
    for(auto v : s) {
        cout << v << " ";
    }
    cout << endl;
*/
    return 0;
}


