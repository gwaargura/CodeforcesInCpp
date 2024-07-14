#include <iostream>
using namespace std;

void r(int a) {
    if(a == 1) {
        cout << "1 0" << endl;
        return;
    }

    if (a == 2) {
        cout << "0 1" << endl;
        return;
    }

    int x = a/3;
    int y = (a - x)/2;
    // cout << "a: " << a << ", x: " << x << ", y: " << y << endl;

    if(a - x - 2*y == 1) {
        cout << x+1 << " " << y << endl;
        return;
    }
    if(a - x - 2*y == 2) {
        cout << x << " " << y+1 << endl;
        return;
    }
    cout << x << " " << y << endl;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        r(a);
    }

    return 0;
}