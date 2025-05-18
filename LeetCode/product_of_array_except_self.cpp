// Problem: https://leetcode.com/problems/product-of-array-except-self

#include <iostream>
#include <vector>
using namespace std;

// 🛠️ Brute Force Approach - Time: O(n²), Space: O(1)
vector<int> calculateProductArrayBruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    
    for(int i = 0; i < n; i++) {
        int productExceptCurrent = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                productExceptCurrent *= nums[j];
            }
        }
        result[i] = productExceptCurrent;
    }
    return result;
}

// 🚀 Optimized Approach using Extra Space - Time: O(n), Space: O(n)
vector<int> calculateProductArrayWithExtraSpace(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    vector<int> leftProducts(n, 1);    // Products of elements to the left
    vector<int> rightProducts(n, 1);   // Products of elements to the right
    
    // Calculate products of all elements to the left of each element
    for (int i = 1; i < n; i++) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }

    // Calculate products of all elements to the right of each element
    for (int i = n - 2; i >= 0; i--) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }

    // Combine left and right products
    for (int i = 0; i < n; i++) {
        result[i] = leftProducts[i] * rightProducts[i];
    }
    
    return result;
}

// 🚀 Most Optimized Approach - Time: O(n), Space: O(1)
// Uses the result array to store left products and calculates right products on the fly
vector<int> calculateProductArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    
    // Calculate left products and store in result array
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] * nums[i - 1];
    }

    // Calculate right products on the fly and multiply with left products
    int rightProduct = 1;
    for (int i = n - 2; i >= 0; i--) {
        rightProduct *= nums[i + 1];
        result[i] *= rightProduct;
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = calculateProductArray(nums);
    
    cout << "Product array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}