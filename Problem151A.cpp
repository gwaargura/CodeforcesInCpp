#include <iostream>
using namespace std;

int main() {

    int n;
    int k, l;
    int c, d;
    int p;
    int nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = k*l/nl;
    int y = c*d;
    int z = p/np;
    // cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    int f = min (x/n, y/n);
    f = min(f , z/n);
    cout << f;
    return 0;
}