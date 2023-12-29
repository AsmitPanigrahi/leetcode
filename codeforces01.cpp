#include <iostream>

// Function to find the digit that occurs exactly once
int findUniqueDigit(int a, int b, int c) {
    if (a == b) {
        return c;
    } else if (a == c) {
        return b;
    } else {
        return a;
    }
}

int main() {
    // Number of test cases
    int t;
    std::cin >> t;

    // Process each test case
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        // Output the value that occurs exactly once
        std::cout << findUniqueDigit(a, b, c) << std::endl;
    }

    return 0;
}
