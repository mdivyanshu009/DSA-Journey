/*
 * LC 80 - Remove Duplicates from Sorted Array II
 * Difficulty: Medium
 * Pattern: Two Pointer - Same Direction (Slow & Fast)
 *
 * Approach:
 * Since each element can appear at most twice, the first two elements are always allowed.
 * Initialize an 'index' pointer at 2, which acts as our writer pointer for valid positions.
 * Use a reader pointer 'i' starting from index 2 to scan the rest of the array.
 * For each element at 'i', compare it with the element two positions behind our writer ('nums[index - 2]').
 * If they are different, it means the current element hasn't appeared more than twice yet.
 * Overwrite 'nums[index]' with 'nums[i]' and advance 'index'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; 
        
        int index = 2; 
        
        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[index - 2]) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};