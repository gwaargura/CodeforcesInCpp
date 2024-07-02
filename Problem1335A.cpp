#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++) {
        cout << arr[i]-arr[i]/2-1 << endl;
    }

    return 0;
}