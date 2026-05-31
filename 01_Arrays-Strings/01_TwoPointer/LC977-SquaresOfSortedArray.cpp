/*
 * LC 977 - Squares of a Sorted Array
 * Difficulty: Easy
 * Pattern: Two Pointer - Opposite Ends
 *
 * Approach:
 * Use two pointers starting at both ends of the input array.
 * Compare the absolute values at both pointers since the largest squares 
 * will come from either the largest positive or smallest negative numbers.
 * Place the larger square at the end of the result array and move the respective pointer.
 * Repeat until all positions are filled from right to left.
 *
 * Time: O(n) | Space: O(1) (ignoring output array)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int l = 0, r = n - 1;
        int pos = n - 1;
        
        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                ans[pos] = nums[l] * nums[l];
                l++;
            } else {
                ans[pos] = nums[r] * nums[r];
                r--;
            }
            pos--;
        }
        
        return ans;
    }
};