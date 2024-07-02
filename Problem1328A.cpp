#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    long long arr[t];
    for(int i = 0; i < t; i++) {
        long long a,b;
        cin >> a >> b;
        arr[i] = (a%b==0)? 0 : b*((a/b)+1)-a;
    }
    for(int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}