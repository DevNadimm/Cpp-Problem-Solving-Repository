#include <iostream>
#include <vector>
using namespace std;

bool isValueUnique(vector<int> existingValues, int target) {
    for (int value : existingValues) {
        if (value == target) {
            return false;
        }
    }
    return true;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> resultArray;

    for (int value1 : nums1) {
        bool existsInNums2 = false;

        for (int value2 : nums2) {
            if (value1 == value2) {
                existsInNums2 = true;
                break;
            }
        }

        if (existsInNums2 && isValueUnique(resultArray, value1)) {
            resultArray.push_back(value1);
        }
    }

    return resultArray;
}

int main () {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersection(nums1, nums2);

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}
