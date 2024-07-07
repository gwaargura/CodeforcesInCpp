#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int arr[n];
    int x= 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > x) {
            x = arr[i];
        }
    }

    int c = 0;
    for(int i = 0; i < n; i++) {
        c += x-arr[i];
    }

    cout << c;
    return 0;
}