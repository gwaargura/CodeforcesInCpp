#include <iostream>
#include <vector>
#include <algorithm> // For std::max

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << 0;
        return 0;
    }

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; ++i) {
        if (a[i - 1] <= a[i]) {
            ++currentLength;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength);
    cout << maxLength;

    return 0;
}
