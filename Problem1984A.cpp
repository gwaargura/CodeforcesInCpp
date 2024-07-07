#include <iostream>

using namespace std;

string result(int arr[], int a) {
    if(arr[0] == arr[a-1]) {
        return "NO";
    }
    if(a == 0) {
        return "NO";
    }
    string s = "";
    for(int i = 0; i < a; i++) {
        if(i == 1) {
            s += "R";
        }
        else {
            s += "B";
        }
    }
    return "YES\n" + s;
}

int main(){

    int t;
    cin >> t;
    string c = "";
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int arr[a];
        for(int j = 0; j < a; j++) {
            cin >> arr[j];
        }
        if(i == t-1) {
            c += result(arr, a);
        }
        else {
            c += result(arr, a) + "\n";
        }
    }
    cout << c << endl;

    return 0;
}