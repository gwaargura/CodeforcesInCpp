#include <algorithm>
#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        int arr1[3];
        cin >> arr1[0] >> arr1[1] >> arr1[2];
        int min = 1000;
        for(int j = 0; j < 3; j++) {
            int a = arr1[0] - arr1[j];
            int b = arr1[1] - arr1[j];
            int c = arr1[2] - arr1[j];

            if(a < 0) {
                a = a * -1;
            }
            if (b < 0) {
                b = b * -1;
            }
            if( c < 0) {
                c = c * -1;
            }
            int d = a + b + c;
            if(min > d) {
                min = d;
            }
        }
        arr[i] = min;
    }
    for(int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}