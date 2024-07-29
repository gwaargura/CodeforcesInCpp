#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a = n/4;
        int b = n%4;
        b = b/2;
        cout << a+b << endl;
    }

    return 0;
}