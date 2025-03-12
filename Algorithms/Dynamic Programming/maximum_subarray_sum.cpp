#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// Question: Write a program to find the maximum sum of a subarray from the given array of integers.

// 🛠️ Brute Force Approach (O(n^2))
int findMaxSubarraySumBruteForce(vector<int> nums) {
    int maxSum = INT_MIN;
    int n = nums.size();

    for (int start = 0; start < n; start++) {
        int currentSum = 0;
        for (int end = start; end < n; end++) {
            currentSum += nums[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    return maxSum;
}

// 🚀 Optimized Approach (O(n)) - Kadane's Algorithm
int findMaxSubarraySumOptimized(vector<int> nums) {
    int maxSum = INT_MIN, currentSum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1};
    
    int maxSubarraySum = findMaxSubarraySumOptimized(arr);

    cout << "Maximum subarray sum is " << maxSubarraySum << endl;
    return 0;
}