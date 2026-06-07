/*
 * LC 1004 - Max Consecutive Ones III
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window defined by 'left' and 'right' pointers.
 * Keep a running 'count' of the number of 1s inside the current window.
 * The number of 0s that need to be flipped within the window is calculated as: 
 * (window_length - count_of_1s), which corresponds to ((right - left + 1) - count).
 * If the number of 0s exceeds 'k', the window becomes invalid. Shrink the window from the left 
 * by checking if 'nums[left]' is a 1 (and decrementing 'count' if so) and then advancing 'left'.
 * Update 'maxlen' at each valid step with the maximum consecutive length found.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;
        int maxlen = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 1) {   
                count++;
            }
            
            while ((right - left + 1) - count > k) {
                if (nums[left] == 1) {   
                    count--;
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};