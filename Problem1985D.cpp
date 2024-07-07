#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    int s[t * 2];
    for (int i = 0; i < t * 2; i += 2) {
        cin >> n >> m;
        char arr[n][m];
        for (int k = 0; k < n; k++) {
            for (int l = 0; l < m; l++) {
                cin >> arr[k][l];
            }
        }
        if (n == 1 && m == 1) {
            s[i] = 1;
            s[i + 1] = 1;
        } else {
            int max = 0;
            int a = 0, b = 0, d = 0;
            for (int k = 0; k < n; k++) {
                int c = 0;
                for (int j = 0; j < m; j++) {
                    if (arr[k][j] == '#') {
                        c++;
                        a = j;
                        // cout << "c: " << c << ", a: " << a << endl;
                    }
                }
                 if (c > max) {
                    max = c;
                    b = k;
                    d = a;
                     // cout << "max: " << max << ", b: " << b << ", d: " << d << endl;
                }
            }

            s[i] = b+1;
            s[i+1] = ((d+1-(max-1)) + (d+1))/2;
        }
    }
    for(int i =0; i < t*2 ; i += 2) {
        cout << s[i] << ' ' << s[i+1] << endl;
    }

    return 0;
}
