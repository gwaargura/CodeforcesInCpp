#include <algorithm>
#include<iostream>
using namespace std;
int main() {


    int t;
    cin >> t;
    for(int j = 0; j < t; j++) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a+b+c+5;
        int x = sum/3 ;
        int y = x;
        int z = sum - x - y;
        cout << sum << " - " <<  x << " - " << y << " - " << z << endl;
    }
    return 0;
}