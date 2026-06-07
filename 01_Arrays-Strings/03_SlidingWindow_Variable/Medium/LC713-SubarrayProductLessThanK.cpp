/*
 * LC 713 - Subarray Product Less Than K
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window defined by 'left' and 'right' pointers to find contiguous subarrays.
 * Since all elements in 'nums' are strictly positive, if 'k <= 1', no product can be strictly less than 'k', 
 * so we return 0 immediately.
 * Iterate the 'right' pointer to expand the window, multiplying 'nums[right]' to the running product 'prod'.
 * While 'prod' is greater than or equal to 'k', the window condition is invalid. Shrink the window from 
 * the left by dividing 'prod' by 'nums[left]' and advancing 'left'.
 * Once the window is valid, the number of valid subarrays ending at the current 'right' index is exactly 
 * equal to the window size, which is (right - left + 1). Add this size to 'count' at each step.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, count = 0;
        long long prod = 1;
        if (k <= 1) return 0;
        
        for (int right = 0; right < nums.size(); right++) {
            prod *= nums[right];
            
            while (prod >= k) {
                prod /= nums[left];
                left++;
            }
            
            count += right - left + 1;
        }
        return count;
    }
};