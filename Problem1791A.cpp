#include<iostream>
using namespace std;

int r(char a) {
    string s = "codefrs";
    for(int j= 0; j < s.size(); j++) {
        if(s[j] == a) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        char a;
        cin >> a;
        if(r(a) == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}