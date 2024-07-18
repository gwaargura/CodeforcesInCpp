#include <iostream>
using namespace std;
int main() {

    long long n, k;
    cin >> n >> k;
    if(n == 1) {
        cout << 1;
        return 0;
    }
    if(k == n) {
        if(n % 2 == 0) {
            cout << n;
            return 0;
        }
        if(n % 2 != 0) {
            cout << n-1 ;
            return 0;
        }
    }
    long long a = n/2;
    if(n % 2 != 0) {
        a++;
    }

    long long b = (k > a)? k-a : a-k;
    //cout << "a : " << a << ", k: " << k << ", b: " << b << endl;
    if (a < k) {
        cout << 2*b;
    }
    if( a > k) {
        if(n % 2 == 0) {
            cout << (n-1) - 2*b;
        }
        else {
            cout << n - 2*b;
        }
    }
    if (a == k) {
        if(n % 2 == 0) {
            cout << n-1;
        }
        if(n % 2 != 0) {
            cout << n;
        }
    }

    return 0;
}