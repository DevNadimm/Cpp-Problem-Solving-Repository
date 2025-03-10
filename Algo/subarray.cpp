#include <iostream>
using namespace std;

// Question: Write a program that prints all possible subarrays of a given array of integers.

int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};

    for (int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            cout << "{";
            for (int i = start; i <= end; i++){
                cout << arr[i];
                if (i != end){
                    cout << ", ";
                }
            }
            cout << "}" << endl;            
        }
    }
    
    return 0;
}