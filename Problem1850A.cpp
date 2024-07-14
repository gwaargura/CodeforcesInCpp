#include <iostream>
using namespace std;

int r(int arr[]) {
    for(int i = 0; i < 2; i++) {
        // cout << arr[i] << endl;
        for(int j = i+1; j < 3; j++) {
            if(arr[i] + arr[j] >= 10) {
                return 1;
            }
        }
        // cout << arr[i] << " - " << arr[i+1] << endl;
    }

    return 0;
}

int main() {

    int t;
    cin >> t;
    int arr1[t];
    for(int k = 0; k < t; k++) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        arr1[k] = r(arr);
    }
    for(int i = 0; i < t; i++) {
        if(arr1[i] == 0) {
            cout << "NO" << endl;
        }
        if(arr1[i] == 1) {
            cout << "YES" << endl;
        }
    }

    return 0;
}