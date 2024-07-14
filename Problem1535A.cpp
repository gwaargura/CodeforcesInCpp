#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int j = 0; j < t; j++) {
        int arr[4];
        for(int i = 0; i < 4; i++) {
            cin >> arr[i];
        }
        int x = (arr[0] > arr[1])? 0 : 1;
        int y = (arr[2] > arr[3])? 2 : 3;
        int a = 0;
        for(int i = 0; i < 4; i++){
            if(arr[i] > arr[x] && i != y) {
                a = 1;
                break;
            }
            if(arr[i] > arr[y] && i != x) {
                a = 1;
                break;
            }
        }
        if(a == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}