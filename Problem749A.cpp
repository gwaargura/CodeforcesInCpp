#include <iostream>
using namespace std;

void r(int n) {
    if(n == 3) {
        cout << 1 << endl << 3 << endl;
        return;
    }
    if(n%2 == 0) {
        cout << n/2 << endl;
        for(int i = 0; i < n/2; i++) {
            if(i == n/2 - 1) {
                cout << 2;
                break;
            }
            cout << 2 << " ";
        }
        return;
    }
    int x = 2;
    int c = 0;
    while(x < n) {
        x += 2;
    }
    if(x > n) {
        x = x - 4;
        c = 1;
    }
    cout << x/2 + c << endl;
    for(int i = 0; i < x/2; i++) {
        if(i == n/2 - 1) {
            cout << 2;
            break;
        }
        cout << 2 << " ";
    }
    if(c == 1) {
        cout << 3;
    }
}

int main() {

    int n;
    cin >> n;
    r(n);

    return 0;
}