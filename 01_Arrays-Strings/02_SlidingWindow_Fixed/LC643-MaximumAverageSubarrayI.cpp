/*
 * LC 643 - Maximum Average Subarray I
 * Difficulty: Easy
 * Pattern: Sliding Window (Fixed Size)
 *
 * Approach:
 * First, compute the sum of the initial window of size 'k' by adding the first 'k' elements.
 * Initialize 'maxsum' with this initial 'windowsum'.
 * Slide the window across the array from index 'k' to 'n-1'. 
 * Update the window sum efficiently in O(1) time by adding the incoming element ('nums[i]') 
 * and subtracting the outgoing element ('nums[i - k]').
 * Track the maximum window sum encountered, and finally return it divided by 'k' as a double.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double windowsum = 0;
        
        for (int i = 0; i < k; i++) {
            windowsum += nums[i];
        }
        
        double maxsum = windowsum;
        
        for (int i = k; i < n; i++) {
            windowsum += nums[i] - nums[i - k];
            maxsum = max(maxsum, windowsum);
        }
        
        return maxsum / k;
    }
};