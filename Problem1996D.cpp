#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long count_triplets(long long n, long long x) {
    long long count = 0;
    for (long long a = 1; a <= min(x, (long long)sqrt(n)); ++a) {
        for (long long b = 1; b <= min(x - a, n / a); ++b) {
            long long max_c = min(x - a - b, n / (a + b + 1));
            if (max_c > 0) {
                count += max_c;
            }
        }
    }
    return count;
}

int main() {
    long long t;
    cin >> t;
    vector<pair<long long, long long>> test_cases(t);

    for (long long i = 0; i < t; ++i) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }

    for (const auto& tc : test_cases) {
        cout << count_triplets(tc.first, tc.second) << endl;
    }

    return 0;
}
