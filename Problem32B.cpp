#include <iostream>
using namespace std;
int main() {

    string s, t;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            t += "0";
        }
        else if (s[i] == '-') {
            if(s[i+1] == '-') {
                t += "2";
            }
            else if (s[i+1] == '.') {
                t += "1";
            }
            i++;
        }
    }
    cout << t;

    return 0;
}