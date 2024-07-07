#include <iostream>
using namespace std;
int main() {

    int n, k;
    cin >> n >> k;
    int s = 1;
    int a = n;
    while(n%10 != 0) {
        if((n - k) % 10 == 0) {
            cout << s;
            return 0;
        }
        s++;
        n = n+a;
        // cout << "s: " << s << ", n: " << n << endl;
    }
    cout << s;

    return 0;
}
