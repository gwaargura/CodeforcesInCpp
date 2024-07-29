#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int j = 0; j < t; j++) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max =-1;
        for(int i = 0; i < n; i += 2) {
            if(a[i] > max) {
                max = a[i];
            }
        }
        cout << max << endl;
    }

    return 0;
}