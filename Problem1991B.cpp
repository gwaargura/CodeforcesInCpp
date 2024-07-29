#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int r(int n, int n1) {
    int x = 1;
    while((n&x) != n1) {
        cout << x << " ";
        x++;
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    for(int j = 0; j < t; j++) {
        int n;
        cin >> n;
        int a[n-1];
        int b[n];
        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
            if(i == 0) {
                b[0] = a[i];
                b[1] = r(a[i], a[i]);
            }
            else {
                //cout << b[i] << " " << a[i];
                b[i+1] = r(b[i], a[i]);
            }
        }
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
