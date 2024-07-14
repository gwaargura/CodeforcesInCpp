#include <iostream>
using namespace std;

string r(string s, int a, int b, int c) {
    string a1 = "";
    a1 += s[a];
    a1 += s[b];
    a1 += s[c];
    // cout << "a1: " << a1 << endl;
    return a1;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;

        if(s == "abc") {
            cout << "YES" << endl;
        }
        else if(r(s, 2, 1, 0) == "abc") {
            cout << "YES" << endl;
        }
        else if(r(s, 1, 0, 2) == "abc") {
            cout << "YES" << endl;
        }else if (r(s, 0, 2, 1) == "abc") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}