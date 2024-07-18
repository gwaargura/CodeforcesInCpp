#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[k];
    for(int i = 0; i < k; i++) {
        cin >> a[i];
    }

    sort(a, a+k);

    int c = 2000000000;
    for(int i = 0; i <= k-n; i++) {
        c = min(c, a[i+n-1] - a[i]);
    }
    cout << c;
    return 0;
}