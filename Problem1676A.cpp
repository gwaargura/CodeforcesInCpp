#include <iostream>
using namespace std;

int r(int a) {
    int x = a/1000;
    int y = a%1000;
    int z = 0, t = 0;
    while(x > 0) {
        z += x%10;
        x /= 10;
    }
    while(y > 0) {
        t += y%10;
        y /= 10;
    }
    if(z == t) {
        return 1;
    }
    return 0;
}

int main() {

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        arr[i] = r(a);
    }

    for(int i = 0; i < t; i++) {
        if(arr[i] == 0) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}