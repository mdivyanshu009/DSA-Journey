/*
 * LC 438 - Find All Anagrams in a String
 * Difficulty: Medium
 * Pattern: Sliding Window / Hash Map Frequency (Fixed Size)
 *
 * Approach:
 * An anagram means a substring in 's' must have the exact same character counts as string 'p'.
 * Use two frequency arrays of size 26 to track character counts for 'p' and the current window in 's'.
 * Populate the target frequency array for 'p' and the initial window of size 'n2' in 's'.
 * If the initial frequencies match, store index 0 in the result.
 * Slide the window across 's' from index 'n2' to 'n1-1'. For each step, add the incoming character 
 * to the window frequency and remove the outgoing character ('s[i - n2]').
 * Compare the two frequency arrays at each step. If they match, calculate the starting index of 
 * the window ('i - n2 + 1') and add it to the result vector.
 *
 * Time: O(n1) | Space: O(1) (frequency arrays are fixed at size 26)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans = {};
        int n1 = s.size(), n2 = p.size();
        if (n1 < n2) return ans;
        
        vector<int> pfreq(26, 0);
        vector<int> sfreq(26, 0);
        
        for (int i = 0; i < n2; i++) {
            pfreq[p[i] - 'a']++;
            sfreq[s[i] - 'a']++;
        }
        
        if (sfreq == pfreq) ans.push_back(0);
        
        for (int i = n2; i < n1; i++) {
            sfreq[s[i] - 'a']++;
            sfreq[s[i - n2] - 'a']--;
            if (sfreq == pfreq) ans.push_back(i - n2 + 1);
        }
        
        return ans;
    }
};