#include <iostream>

using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    // Read the integer n
    cout << "Enter an integer n: ";
    cin >> n;

    // Check for non-negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and print factorial
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }

    return 0;
}