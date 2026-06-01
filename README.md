# 🚀 DSA Journey

> **Goal:** Master DSA for product-based company interviews — Google, Amazon, Flipkart, 
>
> **Target:** 400+ LeetCode problems in 6 months | SDE/ML Internship
>
> **Profile:** BTech CSE AI | GL Bajaj Institute | 3rd Year

---

## 📊 Overall Progress

| Topic | Problems | Solved | Status |
|-------|----------|--------|--------|
| Arrays + Strings | 84 | 0 | 🔄 In Progress |
| Hashing + Binary Search | — | — | ⏳ Upcoming |
| Linked Lists | — | — | ⏳ Upcoming |
| Stacks + Queues | — | — | ⏳ Upcoming |
| Trees + Heaps | — | — | ⏳ Upcoming |
| Graphs | — | — | ⏳ Upcoming |
| Dynamic Programming | — | — | ⏳ Upcoming |
| Advanced DP, Tries, Backtracking, Bit Manipulation | — | — | ⏳ Upcoming |

**Total Solved: 0 / 400+**

---

## 📁 Folder Structure

```
dsa-journey/
├── README.md
├── Arrays-Strings/
│   ├── 01_TwoPointer/
│   ├── 02_SlidingWindow_Fixed/
│   ├── 03_SlidingWindow_Variable/
│   ├── 04_PrefixSum/
│   ├── 05_KadanesAlgorithm/
│   ├── 06_DutchNationalFlag/
│   ├── 07_Anagram_Palindrome/
│   ├── 08_SlidingWindow_Strings/
│   └── 09_StringHashing/
├── Hashing-BinarySearch/
├── LinkedLists/
├── Stacks-Queues/
├── Trees-Heaps/
├── Graphs/
├── DP-Intro/
└── Advanced/
```

---

## Topic 1 — Two Pointer

**Core Idea:** Two fingers scanning the array — either from both ends converging inward, or both moving in the same direction at different speeds. Turns O(n²) pair-checking into O(n).

**When to use:**
- Sorted array + find pair/triplet with target sum → Opposite ends
- Remove duplicates / partition in-place → Fast & Slow
- Merge two sorted arrays → One pointer per array

**Key Insight:** Sorted order gives you DIRECTION. Sum too big → moving right inward GUARANTEES decrease. Sum too small → moving left inward GUARANTEES increase. That certainty is what makes it O(n).

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 125 | Valid Palindrome | Opposite ends | ✅ |
| 2 | 167 | Two Sum II — Input Array Is Sorted | Opposite ends | ✅ |
| 3 | 977 | Squares of a Sorted Array | Opposite ends | ✅ |
| 4 | 26 | Remove Duplicates from Sorted Array | Fast & Slow | ✅ |
| 5 | 283 | Move Zeroes | Fast & Slow | ✅ |
| 6 | 905 | Sort Array By Parity | Fast & Slow | ✅ |
| 7 | 88 | Merge Sorted Array | Two Arrays | ✅ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 8 | 11 | Container With Most Water | Opposite ends | ⬜ |
| 9 | 16 | 3Sum Closest | Opposite ends | ⬜ |
| 10 | 15 | 3Sum | Fix one + Two Pointer | ⬜ |
| 11 | 18 | 4Sum | Fix two + Two Pointer | ⬜ |
| 12 | 259 | 3Sum Smaller | Fix one + count pairs | ⬜ |
| 13 | 80 | Remove Duplicates from Sorted Array II | Fast & Slow | ⬜ |
| 14 | 75 | Sort Colors | 3-pointer (DNF preview) | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 15 | 42 | Trapping Rain Water | Disguised two pointer | ⬜ |
| 16 | 845 | Longest Mountain in Array | Expand from peak | ⬜ |
| 17 | 881 | Boats to Save People | Greedy + opposite ends | ⬜ |

---

## Topic 2 — Sliding Window (Fixed Size)

**Core Idea:** Window of fixed size k slides across array. Instead of recomputing sum of k elements each time (O(n*k)), ADD the entering element and SUBTRACT the leaving element. One pass = O(n).

**When to use:**
- "Find max/min/avg of every subarray of size k" → Fixed window sum
- "Find anagram / permutation of pattern in string" → Fixed window freq map
- Window size is explicitly given in the problem

**Key Insight:** Never recompute — just update. Element enters from right, element leaves from left. If you're looping inside the window, you're doing it wrong.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 643 | Maximum Average Subarray I | Fixed window sum | ⬜ |
| 2 | 1343 | Number of Subarrays of Size K and Avg ≥ Threshold | Fixed window sum | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 3 | 567 | Permutation in String | Fixed window freq map | ⬜ |
| 4 | 438 | Find All Anagrams in a String | Fixed window freq map | ⬜ |
| 5 | 1052 | Grumpy Bookstore Owner | Fixed window + logic | ⬜ |
| 6 | 2090 | K Radius Subarray Averages | Fixed window sum | ⬜ |
| 7 | 1456 | Maximum Number of Vowels in a Substring of Given Length | Fixed window count | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 8 | 2461 | Maximum Sum of Distinct Subarrays With Length K | Fixed window + hashmap | ⬜ |
| 9 | 1888 | Minimum Number of Flips to Make Binary String Alternating | Fixed window | ⬜ |

---

## Topic 3 — Sliding Window (Variable Size)

**Core Idea:** Window size changes dynamically. Expand right pointer to grow window. When condition breaks, shrink from left until condition is valid again. The window breathes in and out.

**When to use:**
- "Longest subarray/substring satisfying a condition" → expand until invalid, shrink
- "Shortest subarray/substring satisfying a condition" → expand until valid, shrink to optimize
- No fixed window size given — you find it

**Key Insight:** The while-inside-for looks like O(n²) but is O(n). Left pointer ONLY moves forward, never back. Total left moves ≤ n. Total right moves = n. So 2n = O(n). Trust the math.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 121 | Best Time to Buy and Sell Stock | Variable window / one pass | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 2 | 209 | Minimum Size Subarray Sum | Variable window | ⬜ |
| 3 | 3 | Longest Substring Without Repeating Characters | Variable + hashset | ⬜ |
| 4 | 424 | Longest Repeating Character Replacement | Variable window | ⬜ |
| 5 | 1004 | Max Consecutive Ones III | Variable window | ⬜ |
| 6 | 713 | Subarray Product Less Than K | Variable window | ⬜ |
| 7 | 1493 | Longest Subarray of 1s After Deleting One Element | Variable window | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 8 | 76 | Minimum Window Substring | Variable + freq map | ⬜ |
| 9 | 992 | Subarrays with K Different Integers | Variable — atMost trick | ⬜ |
| 10 | 1838 | Frequency of the Most Frequent Element | Variable + sorting | ⬜ |

---

## Topic 4 — Prefix Sum

**Core Idea:** Build prefix[i] = sum of arr[0..i]. Then any range sum query [l,r] = prefix[r] - prefix[l-1]. Precompute once in O(n), answer every query in O(1).

**When to use:**
- Multiple range sum queries on same array → Build prefix, answer in O(1)
- "Count subarrays with sum = k" → Prefix + hashmap
- "Equilibrium index / split array" → Prefix from left + suffix from right

**Key Insight:** sum(l,r) = prefix[r] - prefix[l-1]. Tattoo this on your brain. It converts a range problem into a single subtraction.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 303 | Range Sum Query — Immutable | Basic prefix | ⬜ |
| 2 | 1480 | Running Sum of 1D Array | Basic prefix | ⬜ |
| 3 | 724 | Find Pivot Index | Prefix + suffix | ⬜ |
| 4 | 1422 | Maximum Score After Splitting a String | Prefix count | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 560 | Subarray Sum Equals K | Prefix + hashmap | ⬜ |
| 6 | 525 | Contiguous Array | Prefix + hashmap | ⬜ |
| 7 | 1248 | Count Number of Nice Subarrays | Prefix + hashmap | ⬜ |
| 8 | 974 | Subarray Sums Divisible by K | Prefix + modulo hashmap | ⬜ |
| 9 | 238 | Product of Array Except Self | Prefix + suffix product | ⬜ |
| 10 | 304 | Range Sum Query 2D — Immutable | 2D prefix sum | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 11 | 1074 | Number of Submatrices That Sum to Target | 2D prefix + hashmap | ⬜ |

---

## Topic 5 — Kadane's Algorithm

**Core Idea:** At every position, make one decision — extend the current subarray OR start fresh from here. If running sum goes negative, it's dead weight. Drop it, restart. Track the global best throughout.

**When to use:**
- Maximum subarray sum → Classic Kadane
- Circular array max sum → Kadane + total sum trick
- Maximum product subarray → Track both max and min (negatives flip sign)

**Key Insight:** Negative prefix = dead weight. currentSum = max(arr[i], currentSum + arr[i]). If your past is hurting you — cut it.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 53 | Maximum Subarray | Classic Kadane | ⬜ |
| 2 | 1800 | Maximum Ascending Subarray Sum | Kadane variant | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 3 | 152 | Maximum Product Subarray | Kadane — track min too | ⬜ |
| 4 | 918 | Maximum Sum Circular Subarray | Kadane + total — min trick | ⬜ |
| 5 | 1191 | K-Concatenation Maximum Sum | Kadane + math | ⬜ |
| 6 | 2393 | Count Strictly Increasing Subarrays | Kadane variant | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 7 | 689 | Maximum Sum of 3 Non-Overlapping Subarrays | Kadane + DP | ⬜ |

---

## Topic 6 — Dutch National Flag

**Core Idea:** Sort 0s, 1s, 2s in one pass without counting. Three pointers — LOW (0s zone), MID (current), HIGH (2s zone). MID walks forward, swapping elements into correct zones.

**When to use:**
- Sort array with exactly 3 distinct values in-place
- Partition array around a pivot into 3 regions
- Separate negatives, zeros, positives

**Key Insight:** Swap with HIGH → don't move MID forward (element unknown). Swap with LOW → move both LOW and MID (LOW zone already verified).

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 75 | Sort Colors | Classic DNF | ⬜ |
| 2 | 905 | Sort Array By Parity | 2-way partition | ⬜ |
| 3 | 2161 | Partition Array According to Given Pivot | 3-way partition | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 4 | 2149 | Rearrange Array Elements by Sign | Partition | ⬜ |
| 5 | 1356 | Sort Integers by The Number of 1 Bits | Custom sort / partition | ⬜ |

---

## Topic 7 — Anagram + Palindrome

**Core Idea:** Anagram = same characters, same frequency, different order. Palindrome = reads same forwards and backwards.

**When to use:**
- "Are these two strings anagrams?" → freq map comparison
- "Group words that are anagrams?" → sorted string as hashmap key
- "Is this string a palindrome?" → two pointer from both ends
- "Longest palindromic substring?" → expand from every center

**Key Insight:** For anagrams, sorting gives the same canonical key — "listen" and "silent" both sort to "eilnst". For palindromes, expand from center handles both odd and even length in one shot.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 242 | Valid Anagram | Freq map | ⬜ |
| 2 | 125 | Valid Palindrome | Two pointer | ⬜ |
| 3 | 9 | Palindrome Number | Math / two pointer | ⬜ |
| 4 | 383 | Ransom Note | Freq map | ⬜ |
| 5 | 387 | First Unique Character in a String | Freq map | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 6 | 49 | Group Anagrams | Sort + hashmap | ⬜ |
| 7 | 5 | Longest Palindromic Substring | Expand from center | ⬜ |
| 8 | 647 | Palindromic Substrings | Expand from center | ⬜ |
| 9 | 680 | Valid Palindrome II | Two pointer + skip | ⬜ |
| 10 | 438 | Find All Anagrams in a String | Sliding window + freq | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 11 | 336 | Palindrome Pairs | Hashmap + palindrome check | ⬜ |

---

## Topic 8 — Sliding Window on Strings

**Core Idea:** Apply variable sliding window on strings. Maintain a frequency map of characters in the window. Expand right to include more. Shrink left when constraint breaks.

**When to use:**
- "Longest substring with at most k distinct characters" → variable window + freq map
- "Smallest window containing all characters of t" → variable + two freq maps
- "Find all permutations of p in s" → fixed window + freq map

**Key Insight:** Freq map IS your window's state. Expand to find valid. Shrink to optimize. This expand-then-shrink rhythm is the heartbeat of every string sliding window problem.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 3 | Longest Substring Without Repeating Characters | Variable + hashset | ⬜ |
| 2 | 567 | Permutation in String | Fixed window + freq | ⬜ |
| 3 | 438 | Find All Anagrams in a String | Fixed window + freq | ⬜ |
| 4 | 424 | Longest Repeating Character Replacement | Variable window | ⬜ |
| 5 | 1004 | Max Consecutive Ones III | Variable window | ⬜ |
| 6 | 340 | Longest Substring with At Most K Distinct Characters | Variable + freq map | ⬜ |
| 7 | 904 | Fruit Into Baskets | Variable + freq map | ⬜ |

### 🔴 Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 8 | 76 | Minimum Window Substring | Variable + two freq maps | ⬜ |
| 9 | 30 | Substring with Concatenation of All Words | Fixed window + word freq | ⬜ |

---

## Topic 9 — String Hashing

**Core Idea:** Convert a string to a number (hash) so you can compare strings in O(1). Uses polynomial rolling hash. Slide the hash across the string to find pattern matches in O(n).

**When to use:**
- "Find if pattern exists in text" → Rabin-Karp rolling hash
- "Find duplicate substrings" → Hash substrings + hashset
- "Compare many substrings efficiently" → Precompute prefix hashes

**Key Insight:** Hashing trades certainty for speed. Always verify after a hash match to handle collisions. Never trust hash alone.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 28 | Find the Index of First Occurrence in a String | KMP / Rabin-Karp | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 2 | 49 | Group Anagrams | Hash as canonical key | ⬜ |
| 3 | 187 | Repeated DNA Sequences | Rolling hash / hashset | ⬜ |
| 4 | 686 | Repeated String Match | Hashing / string matching | ⬜ |

### 🔴 Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 1044 | Longest Duplicate Substring | Binary search + rolling hash | ⬜ |

---

## 🧠 Key Insights

| Topic | The One Thing To Remember |
|-------|--------------------------|
| Two Pointer | Sorted order gives DIRECTION. Guaranteed movement = O(n). |
| Sliding Window Fixed | Never recompute. Subtract leaving, add entering. |
| Sliding Window Variable | While-inside-for is still O(n). Left never goes back. |
| Prefix Sum | sum(l,r) = prefix[r] - prefix[l-1]. One formula, dozens of problems. |
| Kadane's | Negative prefix = dead weight. Drop it. Restart fresh. |
| Dutch National Flag | Swap with HIGH → don't move MID. Swap with LOW → move both. |
| Anagram + Palindrome | Anagram = same freq map. Palindrome = expand from center. |
| String Sliding Window | Freq map = window state. Expand to find valid. Shrink to optimize. |
| String Hashing | Hash for speed, verify for correctness. Never trust hash alone. |

---

## 📊 Problem Count

| Topic | Easy | Medium | Hard | Total |
|-------|------|--------|------|-------|
| Two Pointer | 7 | 7 | 3 | 17 |
| Sliding Window Fixed | 2 | 5 | 2 | 9 |
| Sliding Window Variable | 1 | 6 | 3 | 10 |
| Prefix Sum | 4 | 6 | 1 | 11 |
| Kadane's | 2 | 4 | 1 | 7 |
| Dutch National Flag | 3 | 2 | 0 | 5 |
| Anagram + Palindrome | 5 | 5 | 1 | 11 |
| String Sliding Window | 0 | 7 | 2 | 9 |
| String Hashing | 1 | 3 | 1 | 5 |
| **TOTAL** | **25** | **45** | **14** | **84** |

---

## 🔗 Resources

- [LeetCode](https://leetcode.com)
- [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/)
- [CP-Algorithms](https://cp-algorithms.com/)
- [Visualgo](https://visualgo.net/en)
- [NeetCode Roadmap](https://neetcode.io/roadmap)

---
