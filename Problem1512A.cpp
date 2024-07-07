#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int r(int arr[], int e) {
    int c= 0;
    for(int i = 1; i < e; i++) {
        if(arr[i] != arr[0]) {
            c++;
        }
    }
    if(c == e-1) {
        return 1;
    }
    for(int i = 1; i < e; i++) {
        if(arr[i] != arr[0]) {
            return i+1;
        }
    }
    return 1;
}

int main() {

    int t;
    cin >> t;
    int arr1[t];
    for(int i = 0; i < t; i++) {
        int e ;
        cin >> e;
        int arr[e];
        int x = 0;
        int c = 0;
        for(int j = 0; j < e; j++) {
            cin >> arr[j];
        }
        arr1[i] = r(arr, e);
    }
    for(int i = 0; i < t; i++) {
        cout << arr1[i] << endl;
    }

    return 0;
}