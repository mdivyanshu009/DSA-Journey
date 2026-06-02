/*
 * LC 15 - 3Sum
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends (with Sorting)
 *
 * Approach:
 * Sort the array first to handle duplicates efficiently and enable the two-pointer technique.
 * Fix one element 'nums[i]' sequentially using a loop. To avoid duplicate triplets, 
 * skip 'i' if it matches the previous element.
 * For each fixed element, set up 'left' (i + 1) and 'right' (n - 1) pointers.
 * If the sum of the triplet equals 0, add it to the result and move both pointers inward, 
 * continuing to skip duplicate values for both 'left' and 'right' to maintain uniqueness.
 * Adjust the pointers accordingly if the sum is less than or greater than 0.
 *
 * Time: O(n^2) | Space: O(1) (ignoring sorting overhead)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++, right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return result;
    }
};