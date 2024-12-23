#include <iostream>
#include <climits>
using namespace std;

int largest(int arr[], int size) {
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    return largest;
}

int lowest(int arr[], int size){
    int lowest = INT_MAX;
    for (int i = 0; i < size; i++){
        if (lowest > arr[i]){
            lowest = arr[i];
        }
    }
    return lowest;
}

int main() {
    int arr[] = {10, 12, 334, -300, 34, -56, 2494};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << largest(arr, size) << endl;
    cout << "Lowest element: " << lowest(arr, size) << endl;
    return 0;
}
