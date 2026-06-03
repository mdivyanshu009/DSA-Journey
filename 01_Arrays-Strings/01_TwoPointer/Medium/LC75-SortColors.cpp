/*
 * LC 75 - Sort Colors
 * Difficulty: Medium
 * Pattern: Three Pointer (Dutch National Flag Algorithm)
 *
 * Approach:
 * Use three pointers to partition the array into three regions:
 * 1. [0 ... low-1] contains all 0s (Red)
 * 2. [low ... mid-1] contains all 1s (White)
 * 3. [high+1 ... n-1] contains all 2s (Blue)
 * * The 'mid' pointer scans the array:
 * - If nums[mid] == 0: Swap it with nums[low], move both low and mid forward.
 * - If nums[mid] == 1: Element is in the right spot, just move mid forward.
 * - If nums[mid] == 2: Swap it with nums[high], decrement high (do not advance mid 
 * yet because the swapped element from high needs to be evaluated).
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};