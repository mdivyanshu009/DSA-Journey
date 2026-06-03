/*
 * LC 881 - Boats to Save People
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends (Greedy Strategy)
 *
 * Approach:
 * Sort the array to pair the heaviest and lightest individuals efficiently.
 * Initialize two pointers: 'i' at the lightest person (0) and 'j' at the heaviest person (n - 1).
 * In each iteration, evaluate if the lightest and heaviest person can share a boat:
 * - If their combined weight fits within the 'limit', pair them up by advancing 'i' and decrementing 'j'.
 * - If they exceed the limit, the heaviest person must take a boat alone; decrement 'j'.
 * Increment the boat 'count' in every step since at least one person is processed per iteration.
 *
 * Time: O(n log n) | Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int count = 0;
        int i = 0, j = people.size() - 1;
        
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
            }
            else {
                j--;
            }
            count++;
        }
        return count;
    }
};