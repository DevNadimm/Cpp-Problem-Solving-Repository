// Problem: https://leetcode.com/problems/powx-n/

#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    if (x == 1) return 1;
    if (x == 0) return 0;

    long long power = n;
    double result = 1.0;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    while (power > 0) {
        if (power & 1) {
            result *= x;
        }
        x *= x;
        power >>= 1;
    }

    return result;
}

int main() {
    double x = 10;
    int n = -3;
    double dig = myPow(x, n);
    cout << "Pow(" << x << ", " << n << ")" << " is: " << dig << endl;
    return 0;
}
