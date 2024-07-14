#include <iostream>
using namespace std;

void r(int arr[], int n) {
    int a = 0,b = 0,c = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            a++;
        }
        if(arr[i] == 2) {
            b += arr[i];
            c++;
        }
    }
    // cout << "a: " << a << ":, b:" << b;
    if(a % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    if(a == 0 && c%2 != 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int arr[a];
        for(int j = 0; j < a; j++) {
            cin >> arr[j];
        }
        r(arr,a);
    }

    return 0;
}