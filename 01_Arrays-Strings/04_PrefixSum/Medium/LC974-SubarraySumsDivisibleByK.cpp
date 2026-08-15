/*
 * LC 974 - Subarray Sums Divisible by K
 * Difficulty: Medium
 * Pattern: Prefix Sum + Hash Map (Modulo Arithmetic)
 *
 * Approach:
 * If two prefix sums have the same remainder when divided by 'k', the subarray between 
 * those two indices has a sum that is divisible by 'k' (since pref[j] % k == pref[i] % k 
 * implies (pref[j] - pref[i]) % k == 0).
 * Handle negative numbers in C++ by computing the normalized remainder:
 * 'rem = ((sum % k) + k) % k' to ensure the remainder is always non-negative in [0, k-1].
 * Use a hash map 'mp' to track remainder frequencies, initializing 'mp[0] = 1' to account for 
 * subarrays starting at index 0 that are directly divisible by 'k'.
 * Iterate through 'nums':
 * - Add the current element to the running 'sum'.
 * - Compute the normalized remainder 'rem'.
 * - If 'rem' exists in 'mp', add its frequency to 'count'.
 * - Increment the frequency of 'rem' in 'mp'.
 *
 * Time: O(n) | Space: O(min(n, k))
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        
        for (int num : nums) {
            sum += num;
            int rem = ((sum % k) + k) % k; 
            if (mp.count(rem)) {
                count += mp[rem];
            }
            mp[rem]++;
        }

        return count;
    }
};