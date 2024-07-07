#include <iostream>
using namespace std;

int r(int a) {
    if(a >= 1900) return 1;
    if(1600 <= a && a <= 1899) return 2;
    if(1400 <= a && a <= 1599) return 3;
    return 4;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        cout << "Division " << r(a) << endl;
    }

    return 0;
}