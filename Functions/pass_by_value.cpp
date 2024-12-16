#include <iostream>
using namespace std;

// Note: Pass by value means the function gets a copy of the variable's value.
// Changes made to the parameter inside the function do not affect the original variable.

void modifyValue(int num) {
    // The parameter 'num' is a copy of the argument passed from main().
    num = 20; // Changing the value of 'num' here won't affect the original variable.
    cout << "Inside modifyValue function, num = " << num << endl;
}

int main() {
    int original = 10; // Declare and initialize the original variable
    cout << "Before calling modifyValue, original = " << original << endl;

    modifyValue(original); // Pass the value of 'original' to the function

    cout << "After calling modifyValue, original = " << original << endl;
    // The value of 'original' remains unchanged because the function worked with a copy.
    return 0;
}
