#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 🛠️ Brute Force Approach (O(n^2))
vector<int> pairSumBruteForce(const vector<int>& nums, int target) {
    for (size_t i = 0; i < nums.size(); i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {nums[i], nums[j]};
            }
        }
    }
    return {};
}

// 🚀 Optimized Approach (Two-Pointer - O(n log n) due to sorting)
vector<int> pairSumOptimized(vector<int> nums, int target) {
    sort(nums.begin(), nums.end()); // Ensure the array is sorted

    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum < target) left++;
        else if (sum > target) right--;
        else return {nums[left], nums[right]};
    }

    return {};
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 11;

    vector<int> result = pairSumOptimized(nums, target);

    if (result.empty()) {
        cout << "No pair sum available!" << endl;
    } else {
        cout << "Pair found: " << result[0] << ", " << result[1] << endl;
    }

    return 0;
}
