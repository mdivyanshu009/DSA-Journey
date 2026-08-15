/*
 * LC 238 - Product of Array Except Self
 * Difficulty: Medium
 * Pattern: Prefix/Suffix Accumulation (Space-Optimized)
 *
 * Approach:
 * Construct the target array in O(n) time without using division by splitting the product 
 * into prefix products and suffix products.
 * Use the output array 'ans' to store prefix products first:
 * - Initialize 'ans[0] = 1'.
 * - Pass left-to-right: 'ans[i] = ans[i - 1] * nums[i - 1]', so 'ans[i]' holds the total product 
 *   of all elements strictly to the left of index 'i'.
 * Use a single variable 'right' (initialized to 1) to accumulate suffix products:
 * - Pass right-to-left: multiply 'ans[i]' by 'right', then update 'right *= nums[i]'.
 * This combines prefix and suffix products in-place within 'ans' to achieve O(1) auxiliary space.
 *
 * Time: O(n) | Space: O(1) auxiliary space (output array does not count toward complexity)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }
        
        return ans;
    }
};