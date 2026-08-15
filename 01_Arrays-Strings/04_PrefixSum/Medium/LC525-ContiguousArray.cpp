/*
 * LC 525 - Contiguous Array
 * Difficulty: Medium
 * Pattern: Prefix Sum + Hash Map (Zero-One Transformation)
 *
 * Approach:
 * Transform the problem into finding the longest contiguous subarray with a sum of 0.
 * Treat every 0 as -1 and every 1 as +1 while calculating a running prefix sum ('sum').
 * If a prefix sum value repeats at index 'i' after previously appearing at index 'j', 
 * the subarray between indices (j + 1) and 'i' has a net sum of 0 (equal numbers of 0s and 1s).
 * Use a hash map 'mp' to store the *first index* where each prefix sum was encountered.
 * Initialize 'mp[0] = -1' to account for valid subarrays that start from index 0.
 * Traverse 'nums':
 * - Update 'sum' (+1 for 1, -1 for 0).
 * - If 'sum' already exists in 'mp', calculate the subarray length ('i - mp[sum]') and update 'maxlen'.
 * - Otherwise, record the current index in 'mp' ('mp[sum] = i'). (Do not update existing indices 
 *   to maximize the subarray length).
 *
 * Time: O(n) | Space: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        mp[0] = -1;  
        int sum = 0, maxlen = 0;

        for (int i = 0; i < n; i++) {
            sum += (nums[i] == 0) ? -1 : 1; 
            
            if (mp.count(sum)) {
                maxlen = max(maxlen, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        return maxlen;
    }
};