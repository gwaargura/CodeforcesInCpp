#include <iostream>
using namespace std;

void r(int n) {
    if(n < 2020) {
        cout << "NO" << endl;
        return;
    }
    int a = n%2020;
    int b = n/2020;
    //cout << a << " - " << b << endl;
    if(a <= b) {
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
        r(n);
    }

    return 0;
}