#include <iostream>
using namespace std;

int rr(int n, int m) {
    int x = n;
    while(x / m != 0) {
        n += x%m;
        x /= m;
        n += x;
    }
    return n;
}

int main() {

    int n, m;
    cin >> n >> m;
    cout << rr(n, m);



    return 0;
}