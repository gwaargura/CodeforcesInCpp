#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, a, b;
    unordered_map<int, int> map;
    cin >> n;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int f;
        cin >> f;
        if (map.find(f) == map.end()) {
            map[f] = 1;
        }
    }
    cin >> b;
    for (int i = 0; i < b; i++) {
        int f;
        cin >> f;
        if (map.find(f) == map.end()) {
            map[f] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (map.find(i) == map.end()) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}
