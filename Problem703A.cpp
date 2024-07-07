#include <iostream>
using namespace std;
int main() {

    int g;
    cin >> g;
    int c = 0, d = 0;
    for(int i = 0; i < g; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            c++;
        }
        else if (a < b) {
            d++;
        }
    }
    if (c > d) {
        cout << "Mishka" << endl;
    }
    else if (c < d) {
        cout << "Chris" << endl;
    }
    else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}