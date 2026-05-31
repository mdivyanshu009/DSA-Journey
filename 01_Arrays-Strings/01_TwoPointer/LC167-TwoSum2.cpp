/*
 * LC 167 - Two Sum II - Input Array Is Sorted
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends
 *
 * Approach:
 * Initialize pointers at the beginning and end of the sorted array.
 * Calculate the sum of the elements at the two pointers.
 * If the sum matches the target, return 1-indexed positions.
 * If the sum is less than target, move the left pointer right to increase the sum.
 * If the sum is greater than target, move the right pointer left to decrease the sum.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};