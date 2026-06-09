/*
 * LC 303 - Range Sum Query - Immutable
 * Difficulty: Easy
 * Pattern: Prefix Sum
 *
 * Approach:
 * To answer multiple range sum queries efficiently, we precompute a prefix sum array 'pref'.
 * Each index 'i' in 'pref' stores the cumulative sum of elements from 'nums[0]' up to 'nums[i]'.
 * During initialization:
 * - 'pref[0]' is set to 'nums[0]'.
 * - For any subsequent element, 'pref[i] = pref[i - 1] + nums[i]'.
 * To calculate the sum of a range [left, right] in O(1) time:
 * - If 'left == 0', the sum is simply 'pref[right]'.
 * - Otherwise, the sum is 'pref[right] - pref[left - 1]', which subtracts the prefix sum 
 * lying entirely before the requested window.
 *
 * Time: O(n) for Initialization, O(1) per Query | Space: O(n) to store the prefix sum array
 */

#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> pref;
    
    NumArray(vector<int>& nums) {
        int n = nums.size();
        pref.resize(n);
        pref[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return pref[right];
        return pref[right] - pref[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */