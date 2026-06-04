/*
 * LC 567 - Permutation in String
 * Difficulty: Medium
 * Pattern: Sliding Window / Hash Map Frequency (Fixed Size)
 *
 * Approach:
 * A permutation of s1 in s2 means a substring in s2 must have the exact same character counts as s1.
 * Use two frequency arrays of size 26 to track character counts for s1 and the current window in s2.
 * Populate the target frequency array for s1 and the initial window of size 'n1' in s2.
 * If the initial frequencies match, return true.
 * Slide the window across s2 from index 'n1' to 'n2-1'. For each step, add the incoming character 
 * to the window frequency and remove the outgoing character ('s2[i - n1]').
 * Compare the two frequency arrays at each step. If they match at any point, a valid permutation is found.
 *
 * Time: O(n2) | Space: O(1) (frequency arrays are fixed at size 26)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        vector<int> s1freq(26, 0);
        vector<int> s2freq(26, 0);
        
        if (n1 > n2) return false;
        
        for (int i = 0; i < n1; i++) {
            s1freq[s1[i] - 'a']++;
            s2freq[s2[i] - 'a']++;
        }
        
        if (s1freq == s2freq) return true;
        
        for (int i = n1; i < n2; i++) {
            s2freq[s2[i] - 'a']++;
            s2freq[s2[i - n1] - 'a']--;
            if (s1freq == s2freq) return true;
        }
        
        return false;
    }
};