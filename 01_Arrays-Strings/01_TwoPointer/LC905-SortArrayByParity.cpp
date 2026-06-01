/*
 * LC 905 - Sort Array By Parity
 * Difficulty: Easy
 * Pattern: Two Pointer - Same Direction (Read/Write)
 *
 * Approach:
 * Use a 'reader' pointer to iterate through the array and a 'writer' pointer 
 * to track the position where the next even number should be placed.
 * When an even number is found at 'reader', swap it with the element at 'writer'.
 * This effectively pushes all even numbers to the front and odd numbers to the back.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int writer = 0, reader = 0;
        while (reader < nums.size()) {
            if (nums[reader] % 2 == 0) {
                swap(nums[reader], nums[writer]);
                reader++;
                writer++;
            }
            else {
                reader++;
            }
        }
        return nums;
    }
};