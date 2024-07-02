#include <iostream>
using namespace std;
int main() {

    int n, a = 0, b = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == -1) {
            a += arr[i];
        }
        if(arr[i] > 0) {
            if(i == n-1) {
                break;
            }
            b = arr[i];
            while(b > 0) {
                i++;
                if(i >= n) {
                    if( b < 0) {
                        a += b;
                    }
                    break;
                }
                b += arr[i];
                // cout << "b: " << b << endl;
                // cout << "arr: " << arr[i] << endl;
                // cout << "i: " << i << endl;
            }
        }
    }

    cout << -1*a;;
    return 0;
}