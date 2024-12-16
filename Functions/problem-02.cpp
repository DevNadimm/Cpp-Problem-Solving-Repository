#include <iostream>
using namespace std;

// Question: Write a function in C++ to calculate the factorial of a given number `n`.

int factorialOfN(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    cout << "Factorial = " << factorialOfN(5) << endl;
    return 0;
}
