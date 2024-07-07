#include <algorithm>
#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        for(int j = 2; j < s.size(); j += 2) {
            // cout << "j: " << j << ", s[j]: " << s[j] << " - ";
            s[j] = ' ';
        }
        auto newEnd = remove(s.begin(), s.end(), ' ');

        // Erase the 'removed' part from the string
        s.erase(newEnd, s.end());
        cout << s << endl;
    }

    return 0;
}