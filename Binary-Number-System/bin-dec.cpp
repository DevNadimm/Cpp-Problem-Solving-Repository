#include <iostream>
using namespace std;

int binToDec (int binNum){
    int sum = 0;
    int pow = 1;

    while(binNum) {
        int remainder = binNum % 10;
        binNum /= 10;

        sum += (remainder * pow);
        pow *= 2;
    }

    return sum;
}

int main() {
    int n = 10;
    cout << "Binery value of " << n << " is: "<< binToDec(n) << endl;
    return 0;
}