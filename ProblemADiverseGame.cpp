#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int k = 0; k < t; k++) {
        int n, m;
        cin >> n >> m;

        int arr[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        if( n== 1 && m == 1) cout << -1 << endl;
        else {
            for(int i = 1; i < n; i++) {
                for(int j = 1; j < m; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << arr[i][0] << endl;
            }
            for(int j = 1; j < m; j++) {
                cout << arr[0][j] << " ";
            }
            cout << arr[0][0] << endl;
        }
    }

    return 0;
}