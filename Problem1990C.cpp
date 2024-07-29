#include <algorithm>
#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    for(int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        std::sort(a, a + n, greater<int>());

        int sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                sum += a[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}