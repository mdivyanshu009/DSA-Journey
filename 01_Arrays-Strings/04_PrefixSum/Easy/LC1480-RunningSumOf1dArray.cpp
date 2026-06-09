/*
 * LC 1480 - Running Sum of 1d Array
 * Difficulty: Easy
 * Pattern: Prefix Sum (In-Place)
 *
 * Approach:
 * Compute the running sum directly inside the input array 'nums' to optimize space complexity.
 * Initialize a 'reader' pointer at index 1.
 * Traverse the array from left to right. At each step, update the element at the 'reader' 
 * index by adding the value of the previous element ('nums[reader - 1]') to it.
 * This dynamically transforms the array into its own prefix sum array in-place.
 *
 * Time: O(n) | Space: O(1) (modifying the input array in-place)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int reader = 1;
        while (reader < nums.size()) {
            nums[reader] += nums[reader - 1];
            reader++;
        }
        
        return nums;
    }
};