#include<iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string a = "codeforces";
        int c = 0;
        for(int i = 0; i < 10; i++) {
            if(s[i] != a[i]) {
                c++;
            }
        }
        cout << c << endl;
        if(t == 0) {
            break;
        }
    }
    return 0;
}