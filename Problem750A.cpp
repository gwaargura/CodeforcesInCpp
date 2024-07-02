#include <iostream>
using namespace std;
int main() {

    const int x = 240;
    const int t = 5;

    int n, k;
    cin >> n >> k;

    int r = x - k;
    int c = 1, p = 0;
    while(r > 0) {
        r -= c*t;
        c++;
        // cout << "r: " << r << " c: " << c << endl;
        if(r < 0) {
            break;
        }
        p++;
        if(p == n) {
            break;
        }
    }
    cout << p;

    return 0;
}