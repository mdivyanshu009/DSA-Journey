/*
 * LC 1493 - Longest Subarray of 1's After Deleting One Element
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window defined by 'left' and 'right' pointers.
 * Maintain a 'count' of 1s currently inside the window. 
 * The number of 0s inside the window that must be deleted is given by: (window_length - count_of_1s), 
 * which corresponds to ((right - left + 1) - count).
 * Since we must delete exactly one element, the window is invalid if the count of 0s exceeds 1.
 * When invalid, shrink the window from the left by checking if 'nums[left]' is a 1 (decrementing 'count' if so) 
 * and advancing 'left'.
 * Track the maximum valid window size ('maxlen'). Since one element must be deleted from the final subarray, 
 * return 'maxlen - 1'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int count = 0;
        int maxlen = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 1) {   
                count++;
            }
            
            while ((right - left + 1) - count > 1) {
                if (nums[left] == 1) {   
                    count--;
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen - 1;
    }
};