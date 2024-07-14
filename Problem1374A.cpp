#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int x, y, n;
        cin >> x >> y >> n;
        if(n%x == y) {
            cout << n << endl;
        }
        else {
            int a = n%x;
            // cout << "a1: " << a << endl;
            if(a < y) {
                a = x - (y-a);
                // cout << "a2: " << a << endl;
            }
            else if (a > y) {
                a = a - y;
                // cout << "a3: " << a << endl;
            }
            cout << n-a << endl;
        }
    }
    return 0;
}