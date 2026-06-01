/*
 * LC 125 - Valid Palindrome
 * Difficulty: Easy
 * Pattern: Two Pointer - Opposite Ends
 *
 * Approach:
 * Use two pointers from both ends.
 * Skip non-alphanumeric characters.
 * Compare lowercase versions.
 *
 * Time: O(n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left]))  left++;
        while (left < right && !isalnum(s[right])) right--;
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++; right--;
    }
    return true;
}
