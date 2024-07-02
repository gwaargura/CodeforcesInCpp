#include <iostream>
using namespace std;
int main() {

    int a,b;
    cin >> a >> b;

    char map[a][b];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            map[i][j] = '#';
        }
    }

    int c = 1;
    while(c < a) {
        for(int i = 0; i < b-1; i++) {
            map[c][i] = '.';
        }
        c += 2;
        if( c >= a) {
            break;
        }
        for(int i = 1; i < b; i++) {
            map[c][i] = '.';
        }
        c += 2;
        if( c >= a) {
            break;
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}