#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> map;
    string s;
    for(int i = 0; i < 4; i++) {
        int c;
        cin >> c;
        if(map.find(c) == map.end()) {
            map[c] = 1;
        }
    }
    cout << 4-map.size();
    
    return 0;
}