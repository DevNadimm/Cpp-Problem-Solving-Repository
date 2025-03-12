#include <iostream>
using namespace std;

int main()
{
    /*
    There are two types of Type Casting in C++:
    1. Implicit Conversion: Automatically handled by the compiler (e.g., int to float).
    2. Explicit Casting: Manually performed by the programmer using cast operators.
    */

    double mark = 75.5;
    int markInInt = mark; // Implicit Conversion. When maximum byte to min byte.
    cout << "Implicit Conversion (double to int): " << markInInt << endl;

    char gender = 'M';
    int genderInInt = (int)gender; // Explicit Casting. When min byte to maximum byte.
    cout << "Explicit Casting (char to int): " << genderInInt << endl;

    return 0;
}
