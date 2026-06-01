/*
 * LC 26 - Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Pattern: Two Pointer - Same Direction (Slow & Fast)
 *
 * Approach:
 * Use a slow pointer 'i' and a fast pointer 'j'.
 * The fast pointer scans through the array looking for unique elements.
 * When a new unique element is found (nums[i] != nums[j]), increment the slow pointer 
 * and copy the unique element to that position.
 * Return the count of unique elements, which is i + 1.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};