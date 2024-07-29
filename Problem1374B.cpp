#include <iostream>
using namespace std;

int rr(long long n) {
    while(n > 1) {
        if(n%2 == 0) {
            n /= 2;
        }
        else {
            return 0;
        }
    }
    return 1;
}

int r(long long n) {
    int c = 0;
    while(n != 1) {
        if(rr(n) == 1) {
            return -1;
        }
        if(n%6 == 0) {
            n /= 6;
        }
        else {
            n *= 2;
        }
        c++;
    }

    return c;
}

int main() {

    int t;
    cin >> t;
    int a[t];
   for(int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        a[i] = r(n);
    }
    for(int i= 0; i < t;i++) {
        cout << a[i] << endl;
    }

    return 0;
}