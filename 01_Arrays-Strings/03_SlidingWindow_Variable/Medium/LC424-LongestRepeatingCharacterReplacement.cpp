/*
 * LC 424 - Longest Repeating Character Replacement
 * Difficulty: Medium
 * Pattern: Sliding Window (Variable Size)
 *
 * Approach:
 * Use a variable-sized sliding window defined by 'left' and 'right' pointers, tracking the 
 * frequency of characters in the current window with an array of size 26.
 * Maintain 'maxCount', which stores the frequency of the most frequent character seen in any window so far.
 * The number of operations needed to make all characters in the current window identical is 
 * calculated as: (window_length - maxCount), which is equal to ((right - left + 1) - maxCount).
 * If this value exceeds 'k', the window is invalid. Shrink the window from the left by decrementing 
 * 'freq[s[left]]' and advancing 'left' until the window becomes valid.
 * Update 'maxLen' at each valid step with the maximum window size encountered.
 *
 * Time: O(n) | Space: O(1) (frequency array size is fixed at 26)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int> freq(26, 0);
        int left = 0;
        int maxCount = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            maxCount = max(maxCount, freq[s[right] - 'A']);
            
            while ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};