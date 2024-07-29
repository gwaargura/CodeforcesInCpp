#include <iostream>
using namespace std;
int main() {

    int a, b;
    cin >> a >> b;

    if(a == 1 || b == 1) {
        cout << "Akshat";
        return 0;
    }

    if(a%2 == 0 && b%2 == 0) {
        cout << "Malvika";
        return 0;
    }
    cout << "Akshat";
    return 0;
}