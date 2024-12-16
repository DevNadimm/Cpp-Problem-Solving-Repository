#include <iostream>
using namespace std;

/*
    Expected Output:
    
        *
       * *
      *   *
     *     *
    *       *
     *     *
      *   *
       * *
        *
*/

int main(){
    int n = 5;

    // First part (Top Half of the Diamond)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * (i - 1) + 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Second part (Bottom Half of the Diamond)
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != n - 2) {
            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
