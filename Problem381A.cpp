#include<iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int l = 0;
    int r = t-1;
    int a = 0, b= 0;
    int c = 0;
    while(l <= r) {
        if(arr[l] > arr[r]) {
            if(c % 2 == 0) {
                a += arr[l];
            }
            else {
                b+= arr[l];
            }
            l++;
        }
        else if (arr[l] <= arr[r]) {
            if(c % 2 == 0) {
                a += arr[r];
            }
            else {
                b += arr[r];
            }
            r--;
        }
        c++;
    }
    cout << a << " "<< b;

    return 0;
}