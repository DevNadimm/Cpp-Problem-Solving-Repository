#include <iostream>
using namespace std;

// Question:
// Write a C++ function sumOfDigits that takes an integer and returns the sum of its digits.
// For example, for input 12345, the output should be 15.

int sumOfDigits(int num) {
    int sum = 0;
    int digit;

    if (num < 0) {
        num = -num;
    }

    while (num) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    return sum;
}

int main() {
    int n = 12345;
    cout << "Sum of digits of " << n << " is: " << sumOfDigits(n) << endl;
    return 0;
}
