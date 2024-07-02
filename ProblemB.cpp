#include <iostream>
#include <vector>
using namespace std;

bool sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

vector<int> getB(int arr[], int n) {
    vector<int> array;
    int root = 0;

    for (int i = 1; i < n; i++) {
        if (arr[root] > arr[i]) {
            array.push_back(i);
        } else {
            root = i;
        }
    }
    return array;
}

int getA(int arr[], int n) {
    if (n == 1) {
        return 0;
    }
    if (sorted(arr, n)) {
        return 0;
    }
    int c = 0;
    while (!sorted(arr, n)) {
        vector<int> array;
        array = getB(arr, n);
        c += (array.size() > 0) ? array.size() + 1 : array.size();
        for (int j = 0; j < array.size(); j++) {
            arr[array[j]] += 1;
            cout << "c: " << c << ", arr: " << arr[array[j]] << endl;
        }
        c += array.size();
        if (sorted(arr, n)) {
            return c;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " -> ";
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr1[n];
        for (int j = 0; j < n; j++) {
            cin >> arr1[j];
        }
        arr[i] = getA(arr1, n);
    }
    for (int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
