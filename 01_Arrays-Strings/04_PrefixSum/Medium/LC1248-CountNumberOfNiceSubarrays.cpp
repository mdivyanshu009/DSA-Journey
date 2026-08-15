/*
 * LC 1248 - Count Number of Nice Subarrays
 * Difficulty: Medium
 * Pattern: Prefix Sum + Hash Map (Parity Transformation)
 *
 * Approach:
 * Transform the problem into finding the number of subarrays with a sum equal to 'k' (identical to LC 560).
 * First, convert all elements in 'nums' to 1 if odd, or 0 if even ('nums[i] % 2').
 * Now, any subarray with exactly 'k' odd numbers corresponds to a subarray sum of 'k'.
 * Use a hash map 'mp' to track the frequency of prefix sums encountered, initializing 'mp[0] = 1'.
 * Iterate through the transformed array while keeping a running 'sum':
 * - Add the transformed value to 'sum'.
 * - Check if ('sum - k') exists in 'mp'. If so, add its frequency to 'count'.
 * - Increment the frequency of 'sum' in 'mp'.
 *
 * Time: O(n) | Space: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }
        
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        for (int num : nums) {
            sum += num;
            if (mp.count(sum - k))
                count += mp[sum - k];
            mp[sum]++;
        }

        return count;
    }
};