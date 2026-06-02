/*
 * LC 11 - Container With Most Water
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends
 *
 * Approach:
 * Initialize two pointers at the extreme ends of the array (`lb` and `rb`).
 * The width of the container is the distance between the two pointers (`rb - lb`).
 * The height of the water is limited by the shorter of the two vertical lines (`min(height[lb], height[rb])`).
 * Calculate the area at each step, update `maxarea`, and move the pointer pointing to the shorter line inward.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int width, hght;
        int lb = 0, rb = n - 1, maxarea = INT_MIN;
        while (lb < rb) {
            width = rb - lb;
            hght = min(height[lb], height[rb]);
            maxarea = max(maxarea, hght * width);
            if (height[lb] < height[rb]) {
                lb++;
            }
            else {
                rb--;
            }
        }
        return maxarea;
    }
};