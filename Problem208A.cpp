#include <iostream>
using namespace std;
int main() {

    string s;
    cin >> s;
    while(s.find("WUB") != std::string::npos) {
        int c = s.find("WUB");
        if(c == 0) {
            s = s.substr(3);
        }
        else {
            s = s.substr(0, c) + " " + s.substr(c+3);
        }
    }
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] == ' ' && s[i+1] == ' ') {
            s = s.substr(0, i) + s.substr(i+1);
        }
    }
    cout << s << endl;
    return 0;
}