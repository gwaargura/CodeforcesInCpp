#include <iostream>
using namespace std;

void solve(int n) {
    for (int k = 2; ; k++) {
        int x = (1 << k) - 1; // 2^k - 1
        if (n % x == 0) {
            cout << n / x << endl;
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
