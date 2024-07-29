#include <algorithm>
#include <iostream>
using namespace std;

long long r(int a[], int n, long long m) {

    sort(a, a+n);

    long long max = 0;
    for(int i = n-1; i >= 0; i--) {
        long long sum = a[i];
        if(sum < m) {
            for(int j = i-1; j >= 0; j--) {
                if(a[i] - a[j] <= 1) {
                    sum += a[j];
                    if( sum > m) {
                        sum -= a[j];
                        break;
                    }
                }
                else {
                    break;
                }
            }
        }
        max = std::max(max, sum);
    }
    return max;
}

int main() {

    int t;
    cin >> t;
    for(int j = 0; j < t; j++) {
        int n;
        long long m;
        cin >> n >> m;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << r(a, n, m) << endl;
    }

    return 0;
}