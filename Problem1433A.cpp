#include<iostream>
using namespace std;

int r(int a) {
    int arr[] = {1, 11, 111, 1111};
    int arr1[] = {1, 11, 111, 1111};
    int d = 1;
    int c = 0;
    while(true) {
        for(int i = 0; i < 4; i++) {
            c += d;
            d++;
            if(d == 5) {
                d = 1;
            }
            if(a == arr1[i]) {
                return c;
            }
        }
        for(int i = 0; i < 4; i++) {
            arr1[i] += arr[i];
        }
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        cout << r(a) << endl;
    }
    return 0;
}