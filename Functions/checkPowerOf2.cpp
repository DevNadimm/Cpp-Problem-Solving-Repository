#include <iostream>
using namespace std;

void isPowerOf2(int n) {
    if ((n & (n - 1)) == 0 && n > 0)
        cout << n << " is a power of 2" << endl;
    else
        cout << n << " is not a power of 2" << endl;
}

int main() {
    int num = 50;
    isPowerOf2(num);
    return 0;
}
