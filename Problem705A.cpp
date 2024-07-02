#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    string f[2] = {"I hate ", "I love "};
    string s = "";
    string t = "that ";
    string j = "it";
    for(int i = 0; i < n; i++) {
        if(i%2 != 0) {
            s.append(f[1]);
        }
        else {
            s.append(f[0]);
        }
        if(i != n -1) {
            s.append(t);
        }
        else {
            s.append(j);
        }
    }
    cout << s;

    return 0;
}