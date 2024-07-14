#include <iostream>
using namespace std;
int main() {

    int a,b, c = 0;
    cin >> a >> b;
    int d = max(a,b);
    while(d <= 6) {
        c++;
        d++;
    }
    if(6 % c == 0) {
        cout << 1 << "/" << 6/c;
        return 0;
    }
    if(c == 4) {
        cout << "2/3" << endl;
        return 0;
    }
    cout << c << "/6" << endl;
    return 0;
}