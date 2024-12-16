#include <iostream>
using namespace std;

// Question: Write a function in C++ to calculate the sum of the first `n` natural numbers.

int sumOfN (int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum = " << sumOfN(5) << endl;
    return 0;
}