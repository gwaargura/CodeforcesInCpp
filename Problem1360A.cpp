#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int x = min(a,b)*2;
        a = max(a,b);
        if(x >= a) {
            cout << (int)pow(x,2) << endl;
        }
        else {
            cout << (int)pow(a,2) << endl;
        }
    }

    return 0;
}