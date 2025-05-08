// Problem: https://leetcode.com/problems/container-with-most-water/

#include <iostream>
#include <vector>
using namespace std;

// ✅ Brute Force (Commented Out)
// int maxArea(vector<int> &height){
//     int ans = 0;
//     for (int i = 0; i < height.size(); i++){
//         for (int j = i + 1; j < height.size(); j++){
//             int ht = min(height[i], height[j]);
//             int w = j - i;
//             int currArea = w * ht;
//             ans = max(ans, currArea);
//         }
//     }
//     return ans;
// }

// ✅ Optimal Approach (Two Pointer Technique)
int maxArea(vector<int> &height){
    int left = 0, right = height.size() - 1, maxWater = 0;
    while (left < right) 
    {
        int w = right - left;
        int ht = min(height[left], height[right]);
        int currentWater = w * ht;
        maxWater = max(maxWater, currentWater);
        height[left] < height[right] ? left++ : right--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(height);
    cout << "Max area: " << ans << endl;
    return 0;
}