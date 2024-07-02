#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

int main() {

    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    set<int> map1Key;
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if(map1.find(a) == map1.end()) {
            map1[a] = 1;
        }
        else {
            map1[a] = map1[a] + 1;
        }

        if(map2.find(b) == map2.end()) {
            map2[b] = 1;
        }
        else {
            map2[b] = map2[b] + 1;
        }
    }

    int count = 0;

    for (const auto& pair : map1) {
        map1Key.insert(pair.first); // for vector use keySet.push_back(pair.first);
    }
    for(const int& key : map1Key) {
        if(map2.find(key) != map2.end()) {
            count += map2[key] * map1[key];
        }
    }
    cout << endl;
    cout << count;
    return 0;
}

