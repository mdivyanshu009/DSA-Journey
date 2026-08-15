/*
 * LC 560 - Subarray Sum Equals K
 * Difficulty: Medium
 * Pattern: Prefix Sum + Hash Map
 *
 * Approach:
 * A contiguous subarray sum between indices i and j equals (pref[j] - pref[i - 1]).
 * Re-arranging gives: pref[i - 1] = pref[j] - k.
 * Thus, as we iterate and maintain a running prefix sum ('sum'), any previous prefix sum 
 * equal to ('sum - k') forms a valid subarray ending at the current index.
 * Use a hash map 'mp' to store the frequencies of all prefix sums encountered so far.
 * Initialize 'mp[0] = 1' to handle cases where a prefix sum itself directly equals 'k'.
 * For each number in 'nums':
 * - Add it to the running 'sum'.
 * - Check if ('sum - k') exists in 'mp'. If so, add its frequency to 'count'.
 * - Increment the frequency of the current 'sum' in 'mp'.
 *
 * Time: O(n) | Space: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        
        for (int num : nums) {
            sum += num;
            if (mp.count(sum - k)) {
                count += mp[sum - k];
            }
            mp[sum]++;
        }

        return count;
    }
};