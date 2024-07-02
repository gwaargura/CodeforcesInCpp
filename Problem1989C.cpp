#include <iostream>

using namespace std;

int getSum(int arr[], int n) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
        cin >> arr[j];
        sum += arr[j];
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        int  n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        int sum1 = getSum(arr1, n);
        int sum2 = getSum(arr2, n);
        int max = (sum1 + sum2);
        arr[i] = max;
    }
    for(int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}