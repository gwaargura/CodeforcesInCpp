#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        int alice_sum = 0;
        int bob_sum = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                alice_sum += a[i];
            } else {
                bob_sum += a[i];
            }
        }

        if (alice_sum > bob_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
