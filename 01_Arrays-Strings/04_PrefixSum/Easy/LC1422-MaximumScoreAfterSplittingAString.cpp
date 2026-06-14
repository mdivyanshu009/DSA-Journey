/*
 * LC 1422 - Maximum Score After Splitting a String
 * Difficulty: Easy
 * Pattern: Prefix Sum / Left-Right State Tracking
 *
 * Approach:
 * The score after splitting a string is the number of 0s in the left substring plus the 
 * number of 1s in the right substring.
 * First, calculate 'total1s' across the entire string. This serves as our initial pool of 1s.
 * Keep a running count of 'zeros' (initially 0) for the left side and 'ones' (initially 'total1s') 
 * for the right side.
 * Iterate through the string up to 's.size() - 1' (since both substrings must be non-empty).
 * At each index 'i', update the counts based on the current character:
 * - If 's[i] == '0'', it moves to the left substring, so increment 'zeros'.
 * - If 's[i] == '1'', it leaves the right substring, so decrement 'ones'.
 * Calculate the score at each split ('zeros + ones') and update 'maxScore'.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int total1s = count(s.begin(), s.end(), '1');
        int zeros = 0, ones = total1s, maxScore = 0;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') zeros++;
            else ones--;
            
            maxScore = max(maxScore, zeros + ones);
        }
        return maxScore;
    }
};