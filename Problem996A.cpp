#include <iostream>

using namespace std;

int main() {

    int x = 1,a = 5, b = 10, c = 20, d = 100, bill = 0, n;
    cin >> n;

    while(true) {
        if(n >= d) {
            n -= d;
        }
        else if(n >= c) {
            n -= c;
        }
        else if(n >= b) {
            n -= b;
        }
        else if(n >= a) {
            n -= a;
        }
        else if(n >= x) {
            n -= x;
        }
        bill++;
        if(n <= 0) {
            break;
        }
    }

    cout << bill;

    return 0;
}