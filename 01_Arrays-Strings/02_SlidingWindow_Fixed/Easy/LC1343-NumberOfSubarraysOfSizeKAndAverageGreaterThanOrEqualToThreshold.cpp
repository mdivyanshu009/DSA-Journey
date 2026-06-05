/*
 * LC 1343 - Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 * Difficulty: Medium
 * Pattern: Sliding Window (Fixed Size)
 *
 * Approach:
 * Maintain a sliding window of fixed size 'k'. 
 * First, calculate the sum of the first 'k' elements. If their average is greater than or 
 * equal to the threshold, increment 'count'.
 * Slide the window across the remaining elements of the array. Update the window sum in O(1) 
 * time by adding the new element entering the window ('arr[i]') and subtracting the element 
 * leaving the window ('arr[i - k]').
 * Check the average condition at each step and update 'count' accordingly.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        double windowsum = 0;
        
        for (int i = 0; i < k; i++) {
            windowsum += arr[i];
        }
        
        if (windowsum / k >= threshold) count++;
        
        for (int i = k; i < arr.size(); i++) {
            windowsum = windowsum + arr[i] - arr[i - k];
            if (windowsum / k >= threshold) count++;
        }
        
        return count;
    }
};