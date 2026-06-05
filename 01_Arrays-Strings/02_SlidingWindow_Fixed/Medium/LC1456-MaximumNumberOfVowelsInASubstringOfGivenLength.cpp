/*
 * LC 1456 - Maximum Number of Vowels in a Substring of Given Length
 * Difficulty: Medium
 * Pattern: Sliding Window (Fixed Size)
 *
 * Approach:
 * Use a lambda helper function 'isVowel' to quickly check vowel conditions.
 * Initialize a fixed-size window of size 'k' and count the number of vowels in the first window.
 * Set 'maxc' to this initial count.
 * Slide the window across the string from index 'k' to 's.size() - 1'.
 * For each step, check the incoming character 's[i]'; if it's a vowel, increment 'count'.
 * Simultaneously, check the outgoing character 's[i - k]'; if it's a vowel, decrement 'count'.
 * Track and update the maximum vowel count ('maxc') seen during the iterations.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        int count = 0;
        for (int i = 0; i < k; i++)
            if (isVowel(s[i])) count++;
        
        int maxc = count;
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i]))   count++;
            if (isVowel(s[i - k])) count--;
            maxc = max(maxc, count);
        }
        return maxc;
    }
};