#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// LC - 136
// Question: Write a program to find the single number in an array where every element appears twice except for one.

int singleNumber(vector<int>& nums) {
    int result = 0;

    for(int num: nums){
        // a ^ a = 0
        // a ^ 0 = a
        result ^= num;
    }

    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums) << endl;
    return 0;
}