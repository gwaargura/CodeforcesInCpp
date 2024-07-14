#include <iostream>
#include<unordered_map>
using namespace std;

int r(int a, int n) {

    int count = 0;
    for(int i = a; i < n; i++) {

    }
}

int main() {
    string s = "012345";
    cout << s.substr(0,5);
    return 0;
}
string MinWindowSubstring(string strArr[], int arrLength) {
    string s;
    int c = 0;
    string a;
    int l = 0; int r = strArr[0].size()-1;
    int min = r + 1;
    while(l < r){
        s = strArr[0].substr(l, r);
        // int c = r(s, strArr[1]);
        // if(c != 0){
        //     if(c < min){
        //         a = s;
        //         min = c;
        //     }
        // }
        l++;
        r--;
    }
    return a;

}