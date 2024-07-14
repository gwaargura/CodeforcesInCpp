#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        if(s.size()%2 != 0) {
            cout << "NO" << endl;
        }
        else {
            string a = s.substr(0, s.size()/2);
            string b = s.substr(s.size()/2);
            // cout << "a: " << a << ", b: " << b << endl;
            if(a == b) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}