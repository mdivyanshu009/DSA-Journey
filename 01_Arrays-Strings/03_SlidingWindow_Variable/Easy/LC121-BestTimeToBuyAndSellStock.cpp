/*
 * LC 121 - Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * This problem can be viewed as a variable-sized sliding window where the left boundary 
 * represents the optimal buying day and the right boundary scans for the selling day.
 * Instead of explicitly using left/right index variables, 'mini' implicitly tracks the 
 * best left boundary (lowest buy price seen so far).
 * For each element, we compute the current window's profit ('prices[i] - mini'). 
 * If we find a lower price, the window shifts its left boundary to this new minimum.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            int cost = prices[i] - mini;
            profit = max(cost, profit);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};