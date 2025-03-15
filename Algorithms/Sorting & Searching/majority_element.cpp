#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 🛠️ Brute Force Approach (O(n^2))
int majorityElementBruteForce(vector<int>& nums) {
    for (int num : nums) {
        int count = 0;

        for (int elem : nums) {
            if (elem == num) {
                count++;
            }
        }

        if (count > nums.size() / 2) {
            return num;
        }
    }

    return -1;
}

// 🚀 Optimized Approach (Sorting - O(n log n))
int majorityElementOptimized(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int freq = 0, ans = nums[0];
    
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == ans){
            freq++;
        } else {
            ans = nums[i];
            freq = 1;
        }

        if(freq > nums.size() / 2){
            return ans;
        }
    }
    
    return -1;
}

// 🚀 Moore's Voting Algorithm (O(n)) - Most Optimized Approach
int majorityElementWithMooreVotingAlgorithm(vector<int>& nums) {
    int count = 0, ans = nums[0];

    for(int num : nums){
        if(count == 0){
            ans = num;
        }

        if(num == ans) count++;
        else count--;
    }

    return ans;
}

// Another approach using sorting and directly returning the middle element of the sorted array 
// Time complexity: O(n log n)
// int majorityElementOptimized(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     return nums[nums.size() / 2];
// }



int main() {
    vector<int> nums = {4, 1, 9, 1, 2, 1, 2, 1, 1};
    int ans = majorityElementWithMooreVotingAlgorithm(nums);
    cout << ans << endl;
    return 0;
}