/*
 * LC 16 - 3Sum Closest
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends (with Sorting)
 *
 * Approach:
 * Sort the input array to enable the two-pointer technique.
 * Iterate through the array using a fixed pointer 'i'.
 * For each position 'i', initialize two pointers: 'left' at i + 1 and 'right' at the end of the array.
 * Calculate the current sum at each step. If the distance to the target is smaller than our 
 * recorded closest sum, update 'closestSum'.
 * Move the 'left' pointer forward if the current sum is less than the target, or the 'right'
 * pointer backward if it is greater, to approach the target.
 *
 * Time: O(n^2) | Space: O(1) (ignoring sorting overhead)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
                
                if (currentSum < target) {
                    left++;
                } else if (currentSum > target) {
                    right--;
                } else {
                    return currentSum;
                }
            }
        }
        return closestSum;
    }
};