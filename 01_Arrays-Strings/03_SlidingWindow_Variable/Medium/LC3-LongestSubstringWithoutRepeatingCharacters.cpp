/*
 * LC 3 - Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window with 'left' and 'right' pointers, alongside an 
 * unordered_set to keep track of unique characters in the current window.
 * Iterate the 'right' pointer across the string to expand the window. 
 * If 's[right]' is already in the set, a duplicate is detected. Shrink the window from 
 * the left by removing 's[left]' from the set and advancing 'left' until 's[right]' becomes unique.
 * Insert 's[right]' into the set and calculate the window length ('right - left + 1') to update 'maxLen'.
 *
 * Time: O(n) | Space: O(min(m, n)) where m is the alphabet size
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; 
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};