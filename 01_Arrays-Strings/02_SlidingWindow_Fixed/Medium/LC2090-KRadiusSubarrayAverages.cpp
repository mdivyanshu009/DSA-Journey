/*
 * LC 2090 - K Radius Subarray Averages
 * Difficulty: Medium
 * Pattern: Sliding Window (Fixed Size)
 *
 * Approach:
 * The window size required to calculate a k-radius average centered at index 'i' is exactly (2 * k + 1).
 * Initialize the result vector 'ans' with size 'n' filled with -1, covering cases where a radius cannot fit.
 * If the required window size exceeds the array length, return 'ans' immediately.
 * Calculate the sum of the first window of size (2 * k + 1) using a 'long long' variable to prevent overflow.
 * Place the average of this first window at its center index, which is exactly 'k'.
 * Slide the window forward across the rest of the array. Maintain the window sum efficiently in O(1) 
 * by adding the incoming element ('nums[i]') and subtracting the outgoing element ('nums[i - sizee]').
 * Compute the average for each valid center index ('i - k') as the window slides.
 *
 * Time: O(n) | Space: O(1) (ignoring output array allocation)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int sizee = 2 * k + 1;
        vector<int> ans(n, -1);
        
        if (sizee > n) return ans;
        
        long long sum = 0;

        for (int i = 0; i < sizee; i++)
            sum += nums[i];
        
        ans[k] = sum / sizee;
        
        for (int i = sizee; i < n; i++) {
            sum += nums[i] - nums[i - sizee];
            ans[i - k] = sum / sizee;
        }
        
        return ans;
    }
};