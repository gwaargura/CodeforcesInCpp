#include <iostream>
using namespace std;

void r(long long n) {
    if (n % 2 == 1) {
        cout << "YES" << endl;
        return;
    }
    while (n > 2) {
        if (n % 2 == 1) {
            cout << "YES" << endl;
            return;
        }
        n /= 2;
    }
    cout << "NO" << endl;
}
int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        r(n);
    }

    return 0;
}