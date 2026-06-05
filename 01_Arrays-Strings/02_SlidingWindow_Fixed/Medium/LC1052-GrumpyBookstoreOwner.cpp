/*
 * LC 1052 - Grumpy Bookstore Owner
 * Difficulty: Medium
 * Pattern: Sliding Window (Fixed Size)
 *
 * Approach:
 * First, calculate the 'base' number of customers who are naturally satisfied when the 
 * owner is not grumpy (grumpy[i] == 0).
 * Use a fixed-size sliding window of length 'minutes' to track the maximum number of additional 
 * customers we can satisfy by using the secret technique to suppress the owner's grumpiness.
 * Calculate the initial extra 'happy' customers in the first window of size 'minutes'.
 * Slide the window across the array. For each step, add the incoming customer if the owner 
 * was grumpy, and subtract the outgoing customer ('i - minutes') if the owner was grumpy.
 * Keep track of the maximum extra customers saved ('maxcust') and return 'base + maxcust'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int base = 0;
        int happy = 0;
        
        for (int i = 0; i < grumpy.size(); i++) {
            if (grumpy[i] == 0) {
                base += customers[i];
            }
        }
        
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) happy += customers[i];
        }
        
        int maxcust = happy;
        
        for (int i = minutes; i < grumpy.size(); i++) {
            if (grumpy[i - minutes] == 1) happy -= customers[i - minutes];
            if (grumpy[i] == 1) {
                happy += customers[i];
            }
            maxcust = max(happy, maxcust);
        }
        
        return maxcust + base;
    }
};