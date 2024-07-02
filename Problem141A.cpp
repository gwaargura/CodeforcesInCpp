#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;


bool isBlank(const std::string& str) {
    // Use std::all_of to check if all characters are whitespace
    return std::all_of(str.begin(), str.end(), [](unsigned char c) { return std::isspace(c); });
}
int main() {

    string a,b,c;
    cin >> a >> b >> c;

    if(b.size() + a.size() > c.size()) {
        cout << "NO" << endl;
        return 0;
    }
    for(int j = 0; j < a.size(); j++) {
        for(int i = 0; i < c.size(); i++) {
            if(c[i] == a[j]) {
                c[i] = ' ';
                break;
            }
        }
    }
    for(int j = 0; j < b.size(); j++) {
        for(int i = 0; i < c.size(); i++) {
            if(c[i] == b[j]) {
                c[i] = ' ';
                break;
            }
        }
    }
    if(!isBlank(c)) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES";
    return 0;
}