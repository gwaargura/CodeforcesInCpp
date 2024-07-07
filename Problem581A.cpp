#include <iostream>
using namespace std;
int main() {

    int a,b,c1 = 0,c2 = 0;

    cin >> a >> b;
    while(a > 0 && b > 0) {
        a--;
        b--;
        c1++;
    }
    while(a > 0) {
        c2++;
        a -= 2;
        if(a < 0) {
            c2--;
        }
    }
    while(b > 0) {
        c2++;
        b -= 2;
        if(b < 0) {
            c2--;
        }
    }
    cout << c1 << " " << c2;

    return 0;
}
