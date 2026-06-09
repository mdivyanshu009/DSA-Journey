/*
 * LC 724 - Find Pivot Index
 * Difficulty: Easy
 * Pattern: Prefix Sum / Left-Right Sum Tracking
 *
 * Approach:
 * The pivot index is defined as the index where the sum of all elements strictly to the left 
 * of the index is equal to the sum of all elements strictly to the right of it.
 * First, calculate the 'totalSum' of all elements in the array.
 * Maintain a running 'leftSum', which starts at 0.
 * Iterate through the array. At each index 'i', the 'rightSum' can be derived dynamically 
 * in O(1) time using the equation: rightSum = totalSum - leftSum - nums[i].
 * If 'leftSum' matches 'rightSum', return the current index 'i' as the pivot.
 * Otherwise, update 'leftSum' by adding 'nums[i]' to include it for the next iteration.
 * If no such index satisfies the balance condition, return -1.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (int num : nums) totalSum += num;

        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};