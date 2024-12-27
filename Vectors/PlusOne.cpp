#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &arr) {
    int size = arr.size();
    
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 9) {
            arr[i] = 0;
        } else {
            arr[i]++;
            return arr;
        }
    }
    
    arr.insert(arr.begin(), 1);
    return arr;
}

int main() {
    vector<int> arr = {9, 9, 9};
    plusOne(arr);

    for (int val : arr) {
        cout << val << ", ";
    }
    cout << endl;
    
    return 0;
}
