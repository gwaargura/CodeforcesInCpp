#include <iostream>
using namespace std;
int p(int a) {
    for(int i = 2; i <= a/2; i++) {
        if(a%i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;

    int a = n-4;
    int b = n-a;

    while(true) {
        if(p(a) == 0 && p(b) == 0) {
            break;
        }

        a -= 1;
        b += 1;
    }

    cout << a << " " << b;

    return 0;
}