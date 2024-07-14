#include <iostream>
using namespace std;

void r(string s, int n) {
    if(n != 5) {
        cout << "NO" << endl;
        return;
    }

    int t, i, m, u, r;
    t = i = m = u = r = 0;
    for(int j = 0; j < n; j++) {
        if(s[j] == 'T') {
            t++;
        }
        if(s[j] == 'i') {
            i++;
        }
        if(s[j] == 'm') {
            m++;
        }
        if(s[j] == 'u') {
            u++;
        }
        if(s[j] == 'r') {
            r++;
        }
    }
    if(t == 1 && i == 1 && m == 1 && u == 1 && r == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        r(s, n);
    }

    return 0;
}