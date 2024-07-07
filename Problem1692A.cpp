#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int at[t];
    for(int i = 0; i < t; i++) {
        int arr[4];
        int c = 0;
        cin >> arr[0];
        int x = arr[0];
        for(int j = 1; j < 4; j++) {
            cin >> arr[j];
            if(x < arr[j]) {
                c++;
            }
        }
        at[i] = c;
    }
    for(int i = 0; i < t; i++) {
        cout << at[i] << endl;
    }
    return 0;
}