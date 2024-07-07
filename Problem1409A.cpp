#include <iostream>
using namespace std;

int r(int a, int  b) {

    if(a == b) {
        return 0;
    }
    if(a > b) {
        int temp = a;
         a = b;
         b = temp;
    }
    // cout << "a: " << a << ", b: " << b << endl;
    int c = (b-a+1)/10;
        if(a+(10*c) < b) {
            // cout << "a1: " << a*c << endl;
            c++;
        }
    // cout << "a: " << a + (10 * c) << endl;
    return c;
}

int main() {

    int t, a, b;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        arr[i] = r(a, b);
    }

    for(int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }


    return 0;
}