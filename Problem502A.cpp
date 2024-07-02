#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> map;
    int t;
    cin >> t;
    char s[t];
    for(int i = 0; i < t; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < t; i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
        if(map.find(s[i]) == map.end()) {
            map[s[i]] = 1;
        }
    }
    for(int i = 97; i <= 122; i++) {
        if(map.find(i) == map.end()) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}