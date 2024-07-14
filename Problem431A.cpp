#include <iostream>
using namespace std;
int main() {
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]-48 == 1) {
            c += arr[0];
        }
        if(s[i]-48 == 2) {
            c += arr[1];
        }
        if(s[i]-48 == 3) {
            c += arr[2];
        }
        if(s[i]-48 == 4) {
            c += arr[3];
        }
    }
    cout << c;
    return 0;
}