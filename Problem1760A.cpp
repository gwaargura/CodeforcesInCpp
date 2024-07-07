#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int arr[3];
        for(int j = 0; j < 3; j++) {
            cin >> arr[j];
        }
        for(int j = 0; j < 3-j; j++) {
            for(int k = j+1; k < 3; k++) {
                if(arr[j] > arr[k]) {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        cout << arr[1] << endl;
    }
}