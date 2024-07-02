#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int sum = 0, n;
    cin >> n;  // Read the number of inputs
    unordered_map<string, int> map;
    map["Tetrahedron"] = 4;
    map["Cube"] = 6;
    map["Octahedron"] = 8;
    map["Dodecahedron"] = 12;
    map["Icosahedron"] = 20;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;  // Read the input string
        if (map.find(s) != map.end()) {
            sum += map[s];  // Add the corresponding value to sum if the key exists in the map
        } else {
            cout << "Shape not found: " << s << endl;
        }
    }
    cout << sum << endl;  // Print the total sum

    return 0;
}
