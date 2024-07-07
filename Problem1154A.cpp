#include <iostream>
#include <algorithm>

int main() {
    int x[4];

    // Read input
    for (int i = 0; i < 4; ++i) {
        std::cin >> x[i];
    }

    // Sort the array
    std::sort(x, x + 4);

    // Calculate the values of a, b, c
    int a = x[3] - x[2];
    int b = x[3] - x[1];
    int c = x[3] - x[0];

    // Print the results
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
