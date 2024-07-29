#include <algorithm>
#include <iostream>
using namespace std;


int main() {

    int a, b;
    cin >> a >> b;
    int arr[a];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+a);

    int s = 0;
    for(int i = 0; i < b; i++) {
        if(arr[i] >= 0) {
            break;
        }
        s+= arr[i];
    }
    cout << s*-1;
    return 0;
}