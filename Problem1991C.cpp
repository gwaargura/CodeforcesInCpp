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
        sort(a, a+n);
        int x = 0;
        int c = 0;
        for(int i = 0; i < n; i++) {
            int aa = abs(a[i] - a[i+1]);
            if(aa > x && c == 0) {
                x = aa;
                c++;
            }
            else if (aa > x && c != 0) {
                cout << -1 << endl;
                break;
            }
        }
        if(c == 1) {
            cout << "YES" << endl;
        }
    }


    return 0;
}