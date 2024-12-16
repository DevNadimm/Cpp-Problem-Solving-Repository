#include <iostream>
using namespace std;

/*
    Expected Output:
    
    *    *
    **  **
    ******
    ******
    **  **
    *    *
*/

int main() {
    int n = 3;

    // Top half (including the middle line)
    for (int i = 0; i < n; i++) {
        int stars = i + 1;
        int spaces = (2 * n) - (2 * stars);

        // Print stars for the left pyramid
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        // Print spaces between the pyramids
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print stars for the right pyramid
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 0; i--) {
        int stars = i + 1;
        int spaces = (2 * n) - (2 * stars);

        // Print stars for the left pyramid
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        // Print spaces between the pyramids
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print stars for the right pyramid
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
