#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // swap(arr[left], arr[right]);   -> Using swap function.
        
        left++;
        right--;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
