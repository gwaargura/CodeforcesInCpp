#include <iostream>
using namespace std;
int main() {

    int t,s,b = -1,c = 0;
    cin >> t >> s;

    char a[t];
    for(int i = 0; i < t; i++) {
        cin >> a[i];
        if(a[i] == 'B' && b == -1) {
            b = i;
        }
    }
    if(b == -1) {
        for(int i = 0; i < t; i++) {
            cout << a[i];
        }
        return 0;
    }
    for(int i = b; i < t; i++) {
        if(a[i+1] == 'B') {
            c++;
        }
        if(c == s) {
            char temp = a[b];
            a[b] = a[i];
            a[i] = temp;
        }
        c++;
    }
    for(int i = 0; i < t; i++) {
        cout << a[i];
    }
    return 0;
}
