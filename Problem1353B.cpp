#include <algorithm>
#include <iostream>
using namespace std;

void inp(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void s(int arr1[], int arr2[], int n, int k) {
    int su = 0;
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= 0; j--) {
            if(arr1[i] < arr2[j] && k > 0) {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                // cout << "a: " << arr1[i] << ", b: " << arr2[j] << ", k: " << endl;
                k--;
            }
            if(k == 0) {
                break;
            }
        }
        su+=arr1[i];
    }
    cout << su << endl;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int arr1[n];
        int arr2[n];
        inp(arr1, n);
        inp(arr2, n);
        s(arr1, arr2, n, k);
    }

    return 0;
}