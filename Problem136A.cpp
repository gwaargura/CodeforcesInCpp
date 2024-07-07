#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> p(n + 1);  // We use n+1 to use 1-based indexing
    std::vector<int> q(n + 1);

    // Read the input array p
    for (int i = 1; i <= n; ++i) {
        std::cin >> p[i];
    }

    // Reverse the mapping
    for (int i = 1; i <= n; ++i) {
        q[p[i]] = i;
    }

    // Print the result array q
    for (int i = 1; i <= n; ++i) {
        std::cout << q[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
