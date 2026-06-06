/*
 * LC 209 - Minimum Size Subarray Sum
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window defined by 'left' and 'right' pointers.
 * Expand the window by iterating 'right' across the array and adding 'nums[right]' to 'sum'.
 * While 'sum' meets or exceeds the 'target', the current window condition is valid. 
 * Record the window length ('right - left + 1') and update 'minLen' with the minimum value.
 * Then, attempt to optimize (shrink) the window from the left by subtracting 'nums[left]' 
 * from 'sum' and advancing the 'left' pointer until the sum falls below the target.
 * Return 0 if no valid subarray is found, otherwise return 'minLen'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {  
                minLen = min(minLen, right - left + 1);
                sum -= nums[left]; 
                left++;
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};