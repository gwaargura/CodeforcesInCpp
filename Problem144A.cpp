#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int min = 101, max = 0;
    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index1 = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            index2 = i;
        }
    }
    int left = index2, right = index1;

    // cout << left << "->" << right << endl;
    while (true) {
        if (left < n - 1) {
            if(left + 1 == right) {
                right--;
            }
            int temp = arr[left];
            arr[left] = arr[left + 1];
            arr[left + 1] = temp;
            left++;
            count++;
        }
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " - ";
        // }
        // cout << " count: " << count;
        // cout << endl;
        if (right > 0) {
            if(right-1 == left) {
                left++;
            }
            int temp = arr[right];
            arr[right] = arr[right - 1];
            arr[right - 1] = temp;
            right--;
            count++;
        }
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " - ";
        // }
        // cout << " count: " << count;
        // cout << endl;
        if(right == 0 && left == n-1) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
