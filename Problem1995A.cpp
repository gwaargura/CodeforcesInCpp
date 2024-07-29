#include<iostream>
using namespace std;

int r(int n, int k) {
    if(k == 0) {
        return 0;
    }
    k = k - n;
    if(k <= 0) {
        return 1;
    }
    int x = n-1;
    int c = 1;
    while(k > 0) {
        k -= x;
        c++;
        if(k <= 0 || x == 0) {
            break;
        }
        k -= x;
        c++;
        x--;
        if(k <= 0 || x == 0) {
            break;
        }
    }
    return c;

}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        cout << r(n, k) << endl;
    }

    return 0;
}