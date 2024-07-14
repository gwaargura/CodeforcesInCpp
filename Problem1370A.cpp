#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // The maximum GCD for the set {1, 2, ..., n} is n / 2
        cout << n / 2 << endl;
    }

    return 0;
}
