#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to add two binary numbers
string addBinary(const string &a, const string &b) {
    string result;
    int carry = 0;
    int maxLength = max(a.size(), b.size());

    // Pad the shorter string with leading zeros
    string aPadded = string(maxLength - a.size(), '0') + a;
    string bPadded = string(maxLength - b.size(), '0') + b;

    // Perform binary addition from right to left
    for (int i = maxLength - 1; i >= 0; --i) {
        int sum = (aPadded[i] - '0') + (bPadded[i] - '0') + carry;
        result += (sum % 2) + '0'; // Append the result bit
        carry = sum / 2; // Calculate the carry
    }

    // If there's a carry left, append it
    if (carry) {
        result += '1';
    }

    // Reverse the result string to get the final binary sum
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string binary1, binary2;

    // Input two binary numbers
    cout << "Enter first binary number: ";
    cin >> binary1;
    cout << "Enter second binary number: ";
    cin >> binary2;

    // Add the two binary numbers
    string sum = addBinary(binary1, binary2);

    // Output the result
    cout << "Sum of " << binary1 << " and " << binary2 << " is " << sum << endl;

    return 0;
}

