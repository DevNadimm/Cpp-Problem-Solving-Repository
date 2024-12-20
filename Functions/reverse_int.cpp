#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int reversedNum = 0;
    
    while (num){
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    cout << "Reversed Num:" << endl;
    cout << reversedNum << endl;
    
    return 0;
}