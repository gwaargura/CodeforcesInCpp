#include <iostream>
#include <math.h>
using namespace std;

int r(int a)
{
    if(a == 1) return 1;
    if(a == 2) return 2;
    int c = 2, d = 2; // Start with c = 2 and d = 2 to handle the first two numbers correctly
    while(c < a) {
        d++;
        if(d % 10 == 3 || d % 3 == 0) {
        } else {
            c++;
        }
    }
    return d;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        cout << r(a) << endl;
    }

    return 0;
}