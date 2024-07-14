#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    int a1[t];
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int arr[a];
        cin >> arr[0];
        int c, d;
        c = d = arr[0];
        for(int j = 1; j < a; j++) {
            cin >> arr[j];
            if(arr[j] > c) {
                c = arr[j];
            }
            if(arr[j] < d) {
                d = arr[j];
            }
        }
        a1[i] = c-d;
    }
    for(int i = 0; i < t; i++) {
        cout << a1[i] << endl;
    }

    return 0;
}