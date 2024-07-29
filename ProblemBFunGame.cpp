#include <iostream>
#include <vector>
using namespace std;

bool canWinGame(const string s, const string t) {
    if(s[0] == '1') {
        return true;
    }
    if(s[0] == '0' && t[0] == '1') {
        return false;
    }
    char a = s[0];
    string s1 = s.substr(1);
    for (char ch : s1) {
        if(a == ch) {
            a = '0';
        }
        else {
            a = '1';
        }
    }

    char b = t[0];
    string t1 = t.substr(1);
    for (char ch : t1) {
        if(b == ch) {
            b = '0';
        }
        else {
            b = '1';
        }
    }

    return a == b;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        string s, t1;
        cin >> n >> s >> t1;
        if(canWinGame(s,t1)) {
            cout << "YES" <<endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}