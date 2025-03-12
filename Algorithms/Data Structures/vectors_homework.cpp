#include <iostream>
#include <vector>
using namespace std;

// Linear Search
bool search(vector<int> list, int target) {
    for (int val : list) {
        if (val == target) {
            return true;
        }
    }
    return false;
}

// Reverse Array (In-place)
void reverseArr(vector<int> &arr) {
    int size = arr.size();
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    vector<int> list = {1, 2, 3, 4, 5, 6, 7};
    int target = 12;

    cout << "BEFORE REVERSE:" << endl;
    for (int val : list) {
        cout << val << ", ";
    }
    cout << endl;

    reverseArr(list);

    cout << "AFTER REVERSE:" << endl;
    for (int val : list) {
        cout << val << ", ";
    }
    cout << endl;

    return 0;
}
