#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    int a = 24;
    for(int i = 0; i < t; i++) {
        int h,m;
        cin >> h >> m;
        cout << (a-h)*60 - m << endl;
    }


    return 0;
}