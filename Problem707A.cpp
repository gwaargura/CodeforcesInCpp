#include <iostream>
using namespace std;
int main() {

    int a, b;
    cin >> a >> b;
    char c[a*b];
    int x = 0;
    for(int i = 0; i < a*b; i++) {
        cin >> c[i];
        if(c[i] != 'B' && c[i] != 'W' && c[i] != 'G') {
            // cout << "c: " << c[i] << endl;
            x = 1;
        }
    }
    if(x == 0) {
        cout << "#Black&White" << endl;
    }
    else {
        cout << "#Color" << endl;
    }

    return 0;
}