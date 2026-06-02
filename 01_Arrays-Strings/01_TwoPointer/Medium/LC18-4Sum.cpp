/*
 * LC 18 - 4Sum
 * Difficulty: Medium
 * Pattern: Two Pointer - Opposite Ends (with Sorting & Nested Loops)
 *
 * Approach:
 * Sort the array to efficiently handle duplicates and apply the two-pointer technique.
 * Use two nested loops to fix the first two elements: 'nums[i]' and 'nums[j]'.
 * To ensure unique quadruplets, skip duplicate values for both 'i' and 'j' loops.
 * Inside the nested loops, initialize a 'left' pointer at j + 1 and a 'right' pointer at n - 1.
 * Use a 'long long' type for the sum calculation to safely avoid integer overflow errors.
 * If the sum matches the target, record the quadruplet and shift both pointers inward,
 * continuing to skip adjacent duplicate values for both 'left' and 'right'.
 * If the sum is lower than the target, advance 'left'; if higher, decrement 'right'.
 *
 * Time: O(n^3) | Space: O(1) (ignoring sorting overhead)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        while (left < right && nums[left] == nums[left + 1])
                            left++;

                        while (left < right && nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum < target) left++;
                    else right--;
                }
            }
        }
        return ans;
    }
};