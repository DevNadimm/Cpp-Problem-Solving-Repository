#include <iostream>
using namespace std;

int main(){
    int n = 11;
    bool isPrime = true;

    // We only need to check divisibility up to the square root of n.
    // If n has a divisor larger than its square root, the corresponding smaller divisor would have already been checked.
    // The loop starts from 2 because all numbers are divisible by 1, which is not useful for prime checking.
    for (int i = 2; i * i <= n; i++){  
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "Prime" : "Non Prime") << endl;

    return 0;
}
