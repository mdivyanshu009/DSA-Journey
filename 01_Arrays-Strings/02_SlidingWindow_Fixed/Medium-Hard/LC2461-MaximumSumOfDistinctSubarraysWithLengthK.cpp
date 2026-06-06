/*
 * LC 2461 - Maximum Sum of Distinct Subarrays With Length K
 * Difficulty: Medium
 * Pattern: Sliding Window + Hash Map (Fixed Size)
 *
 * Approach:
 * Use a fixed-size sliding window of length 'k' along with a hash map to maintain character frequencies.
 * The hash map ensures we can track the count of unique elements within our current window in O(1) time.
 * First, populate the frequency map and calculate the total sum for the initial window of size 'k'.
 * If the size of the map equals 'k', it implies all elements in the window are distinct, so update 'maxsum'.
 * Slide the window from index 'k' to 'nums.size() - 1'. At each step:
 * - Insert the incoming element ('nums[i]') into the map and add it to the running sum.
 * - Decrement the frequency of the outgoing element ('nums[i - k]') and subtract it from the sum.
 * - If the frequency of the outgoing element drops to 0, completely erase it from the map.
 * Check if map.size() == k at the end of each shift to update the maximum distinct subarray sum.
 *
 * Time: O(n) | Space: O(k) (hash map stores at most k + 1 elements)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0, maxsum = 0;
        
        for (int i = 0; i < k; i++) {
            mp[nums[i]]++;
            sum += nums[i];
        }
        if (mp.size() == k) maxsum = sum;
        
        for (int i = k; i < nums.size(); i++) {
            mp[nums[i]]++;
            sum += nums[i];

            mp[nums[i - k]]--;
            sum -= nums[i - k];
            if (mp[nums[i - k]] == 0) {
                mp.erase(nums[i - k]); 
            }

            if (mp.size() == k) maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};