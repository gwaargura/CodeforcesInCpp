#include <iostream>
#include <unordered_map>
using namespace std;

int r(int a, string s) {
    unordered_map<char, int> map;
    for(int j = 0; j < a; j++) {
        if(map.find(s[j]) == map.end()) {
            map[s[j]] = j;
            // cout << "a: " << s[j] << ", b: " << map[s[j]] << endl;
        }
        else if (map.find(s[j]) != map.end()) {
            if(map[s[j]] != j-1) {
                return 0;
            }
                map[s[j]] = map[s[j]] + 1;

        }
    }
    return 1;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        string s;
        cin >> a >> s;

        if(r(a, s) == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}