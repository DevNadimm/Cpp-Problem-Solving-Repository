#include <iostream>
using namespace std;

bool isSingleDigit(int num) {
    return num >= 0 && num <= 9;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return isSingleDigit(sum) ? sum : sumOfDigits(sum);
}

int main() {
    int num;
    cin >> num;

    cout << (num > 0 ? sumOfDigits(num) : 0);

    return 0;
}
