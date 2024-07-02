#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int arr[s.size()];

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != t[i]) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }
        cout << arr[i];
    }
    return 0;
}