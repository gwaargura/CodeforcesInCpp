#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> map;
    string s;
    getline(cin , s);
    for(char i : s) {
        if(i >= 'a'  && i <= 'z') {
            if(map.find(i) == map.end()) {
                map[i] = 1;
            }
        }
    }
    cout << map.size();
    return 0;
}