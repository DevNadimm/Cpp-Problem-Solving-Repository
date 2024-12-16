#include <iostream>
using namespace std;

/*
Expected Output:
A B C D
A B C D
A B C D
A B C D
*/

int main(){
    int n = 4;

    for (int i = 0; i < n; i++){

        char ch = 'A';

        for (int j = 0; j < n; j++){
            cout << ch << " ";
            ch += 1;
        }

        cout << endl;
    }
    return 0;
}