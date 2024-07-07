#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        if(s[0] == 'y' || s[0] == 'Y') {
            if(s[1] == 'e' || s[1] == 'E') {
                if(s[2] == 's' || s[2] == 'S') {
                    arr[i] = 1;
                }
                else {
                    arr[i] = 0;
                }
            }
            else {
                arr[i] = 0;
            }
        }
        else {
            arr[i] = 0;
        }
    }
    for(int i = 0; i < t; i++) {
        if(arr[i] == 0) {
            cout << "NO" << endl;
        }
        if(arr[i] == 1) {
            cout << "YES" << endl;
        }
    }
}