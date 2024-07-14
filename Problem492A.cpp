#include <iostream>
using namespace std;

int s(int b) {
    int s = 0;
    for(int i = 1; i <= b; i++) {
        s += i;
    }
    return s;
}

int main() {

    int n;
    cin >> n;
    int a = 0, b = 1;
    while(a < n) {
        a += s(b);
        if(a >= n) {
            break;
        }
        b++;
        // cout << "a: " << a << ", b: " << b << endl;
    }
    if(a > n) {
        b--;
    }
    cout << b << endl;

    return 0;
}