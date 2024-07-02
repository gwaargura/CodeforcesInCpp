#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    int arr[t];
    int max = 0;
    int min = 10000;
    int c = 0;
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
        // cout << "A: "<< arr[i] << endl;
        if(arr[i] > max) {
            max = arr[i];
            c++;
            // cout << "max: " << max << " c: " << c << endl;
        }
        if(arr[i] < min) {
            min = arr[i];
            c++;
            // cout << "min: " << min << " c: " << c << endl;
        }
        if(i == 0) {
            c = 0;
        }
    }
    cout << c;

    return 0;
}
