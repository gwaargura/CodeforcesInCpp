#include <iostream>
using namespace std;

int r(int m) {
    for(int i = 2; i <= m/2; i++) {
        if(m % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n, m;
    cin >> n >> m;
    if(r(m) == 0) {
        cout << "NO" << endl;
        return 0;
    }

    for(int i = n+1; i < m; i++) {
        if(r(i) == 1) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}