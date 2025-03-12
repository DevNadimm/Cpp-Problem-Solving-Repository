#include <iostream>
#include <vector>
using namespace std;

// Linear Search Function
bool search(vector<int> list, int target) {
    for (int val : list) {
        if (val == target) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> list = {1, 2, 3, 4, 5, 6, 7};
    int target = 12;

    if (search(list, target)) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
