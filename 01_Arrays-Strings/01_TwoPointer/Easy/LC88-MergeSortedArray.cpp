/*
 * LC 88 - Merge Sorted Array
 * Difficulty: Easy
 * Pattern: Two Pointer - Opposite Ends (Backwards Merge)
 *
 * Approach:
 * Start from the end of both arrays using pointers 'i' (for nums1) and 'j' (for nums2).
 * Use a 'pos' pointer initialized to the very end of nums1 (m + n - 1) to place elements.
 * Compare elements from the back and place the larger one at 'pos', moving pointers backward.
 * If any elements remain in nums2 after nums1 is exhausted, copy them over.
 *
 * Time: O(m + n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, pos = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[pos--] = nums1[i--];
            }
            else {
                nums1[pos--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[pos--] = nums2[j--];
        }
    }
};