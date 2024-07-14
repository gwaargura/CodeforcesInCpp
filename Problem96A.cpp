#include <iostream>
using namespace std;
int main() {

    string s;
    cin >> s;
    int c = 0, d = 1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]-48 != c) {
            c = s[i] - 48;
            d = 1;
        }
        else {
            d++;
        }
        if(d == 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}