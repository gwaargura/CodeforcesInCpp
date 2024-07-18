#include <iostream>
using namespace std;
int main() {

    string s;
    cin >> s;
    if(s.find('H') != std::string::npos) {
        cout << "YES";
        return 0;
    }
    if(s.find('Q') != std::string::npos) {
        cout << "YES";
        return 0;
    }
    if(s.find('9') != std::string::npos) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
