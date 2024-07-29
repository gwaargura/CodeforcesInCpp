#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    if(n >= 0) {
        cout << n << endl;
    }
    else {
        int a = 0, b = 0;
        a = (n%100)/-10;
        b = (n%10)/-1;
        if(a > b) {
            n = n / 10;
            //cout << n << endl;
            n = n + a;
            //cout << n << endl;
            n = n - b;
            //cout << n << endl;
        }
        else {
            n = n/10;
        }
        cout << n ;
    }

    return 0;
}