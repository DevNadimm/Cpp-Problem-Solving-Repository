#include <iostream>
using namespace std;

int decimalToBin (int decNum){
    int pow = 1;
    int sum = 0;

    while (decNum) {
        int remainder = decNum % 2;
        decNum /= 2;
        
        sum += remainder * pow;
        pow *= 10;
    }

    return sum;
}

int main() {
    int n = 10;
    
    for (int i = 1; i <= n; i++){
        cout << "Binary value of " << i << " is: " << decimalToBin(i) << endl;
    }

    return 0;
}
