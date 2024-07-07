#include <iostream>

using namespace std;

int result(int arr[]) {

    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            if(i == j);
            else {
                sum += arr[j];
            }
        }
        if(sum == arr[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int t, a, b, c;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        int arr1[3];
        cin >> arr1[0] >> arr1[1] >> arr1[2];
        arr[i] = result(arr1);
    }
    for(int i = 0; i < t; i++) {
        if(arr[i] == 0) {
            cout << "NO" << endl;
        }
        if(arr[i] == 1) {
            cout << "YES" << endl;
        }
    }

}