/*
 * LC 845 - Longest Mountain in Array
 * Difficulty: Medium
 * Pattern: Two Pointer / Peak Finding
 *
 * Approach:
 * A mountain must have a single peak that is strictly greater than its neighbors.
 * Iterate through the array from index 1 to n - 2 to find potential peak elements where 
 * arr[i] > arr[i - 1] and arr[i] > arr[i + 1].
 * Once a peak is found, expand outwards using two pointers:
 * - Move the left pointer 'l' backward as long as the array is strictly decreasing (arr[l] > arr[l - 1]).
 * - Move the right pointer 'r' forward as long as the array is strictly decreasing (arr[r] > arr[r + 1]).
 * Calculate the length of the current mountain as (r - l + 1) and update 'maxLen'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int maxLen = 0;

        for (int i = 1; i < n - 1; i++) {

            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int l = i, r = i;

                while (l > 0 && arr[l] > arr[l - 1]) {
                    l--;
                }

                while (r < n - 1 && arr[r] > arr[r + 1]) {
                    r++;
                }

                maxLen = max(maxLen, r - l + 1);
            }
        }

        return maxLen;
    }
};