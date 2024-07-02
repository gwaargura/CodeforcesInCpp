#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n,k;
        cin >> n >> k;
        cout << endl;
        int m = 0;
        int c= k;
        while(m < n-1) {
            m++;
            c += k;
        }
        cout << c-(k-1) << endl;
    }
}
