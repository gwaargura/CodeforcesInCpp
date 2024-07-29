#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int r(string a, string b, int aa, int bb) {
    aa--;
    a = a.substr(aa, bb-aa);
    b = b.substr(aa, bb-aa);
    pmr::unordered_map<char, int> countB;
    for (char c : a) {
        countB[c]++;
    }
    int x = a.length();
    cout << x << endl;
    for(int i = 0; i < b.length();i++) {
        if(countB.find(b[i]) != countB.end()) {
            if(countB[b[i]] != 0) {
                countB[b[i]]--;
                x--;
                //cout << b[i] << endl;
            }
        }
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < k; i++) {
            int aa, bb;
            cin >> aa >> bb;
            cout << r(a, b, aa, bb) << endl;
        }
    }

    return 0;
}
