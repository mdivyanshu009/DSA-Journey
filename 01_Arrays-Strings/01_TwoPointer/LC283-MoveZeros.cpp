/*
 * LC 283 - Move Zeroes
 * Difficulty: Easy
 * Pattern: Two Pointer - Same Direction (Read/Write)
 *
 * Approach:
 * Use a 'reader' pointer to scan the array and a 'writer' pointer to track where 
 * the next non-zero element should go.
 * First pass: Copy all non-zero elements forward using the writer pointer.
 * Second pass: Fill the remaining positions from the writer pointer to the end of the array with zeroes.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writer = 0;
        for (int reader = 0; reader < nums.size(); reader++) {
            if (nums[reader] != 0) {
                nums[writer] = nums[reader];
                writer++;
            }
        }
        
        while (writer < nums.size()) {
            nums[writer] = 0;
            writer++;
        }
    }
};