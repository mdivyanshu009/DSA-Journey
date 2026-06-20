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

---

# 📌 Hashing & Binary Search

---

## Topic 10 — Hashing: unordered_map

**Core Idea:** Store key-value pairs for O(1) lookup. Use for frequency counting, storing indices, finding complements, and grouping elements.

**When to use:**
- "Find if complement exists" → store elements seen so far
- "Count frequency of elements" → map element to count
- "First occurrence / index" → map element to index
- "Group elements by property" → map property to list

**Key Insight:** HashMap trades space for time. O(n) space to get O(1) lookup instead of O(n) search. Whenever you're doing repeated lookups in an array, think hashmap first.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 1 | Two Sum | Complement finding | ⬜ |
| 2 | 217 | Contains Duplicate | Existence check | ⬜ |
| 3 | 383 | Ransom Note | Frequency counting | ⬜ |
| 4 | 169 | Majority Element | Frequency counting | ⬜ |
| 5 | 387 | First Unique Character in String | Frequency counting | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 6 | 49 | Group Anagrams | String as key | ⬜ |
| 7 | 347 | Top K Frequent Elements | Freq map + sorting | ⬜ |
| 8 | 128 | Longest Consecutive Sequence | Set + expand | ⬜ |
| 9 | 454 | 4Sum II | Complement + freq map | ⬜ |
| 10 | 36 | Valid Sudoku | Hashset per row/col/box | ⬜ |
| 11 | 299 | Bulls and Cows | Frequency counting | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 12 | 380 | Insert Delete GetRandom O(1) | Map + vector | ⬜ |
| 13 | 41 | First Missing Positive | Index as hash | ⬜ |

---

## Topic 11 — Hashing: unordered_set

**Core Idea:** Store unique elements for O(1) existence check. Use for duplicate detection, cycle detection, and membership queries.

**When to use:**
- "Does X exist in collection?" → set lookup O(1)
- "Remove duplicates" → insert into set
- "Find elements not in another array" → set difference
- "Detect cycle" → store visited nodes

**Key Insight:** Set is just a map without values. Use set when you only care about existence, not count. The Longest Consecutive Sequence trick — insert all into set, then only start counting from sequence beginners (num-1 not in set).

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 217 | Contains Duplicate | Set existence | ⬜ |
| 2 | 268 | Missing Number | Set / math | ⬜ |
| 3 | 202 | Happy Number | Cycle detection | ⬜ |
| 4 | 349 | Intersection of Two Arrays | Set intersection | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 128 | Longest Consecutive Sequence | Set + expand | ⬜ |
| 6 | 659 | Split Array into Consecutive Subsequences | Set/map greedy | ⬜ |

---

## Topic 12 — Prefix Sum + Hashmap Combined

**Core Idea:** Build running prefix sum. Store prefix sums in hashmap. At each index check if (currentSum - k) exists — if yes, valid subarray found.

**When to use:**
- "Count subarrays with sum = k" → prefix + freq map
- "Longest subarray with sum = k" → prefix + first index map
- "Subarrays divisible by k" → prefix + modulo map
- Has negative numbers → can't use sliding window → use this

**Key Insight:** freq[0]=1 before the loop. Always. This handles subarrays starting from index 0. Forget it and you'll get wrong answers on half the test cases.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 560 | Subarray Sum Equals K | Prefix + freq map | ⬜ |
| 2 | 525 | Contiguous Array | Replace 0→-1, sum=0 | ⬜ |
| 3 | 974 | Subarray Sums Divisible by K | Prefix + modulo | ⬜ |
| 4 | 1248 | Count Nice Subarrays | Replace odd→1 even→0 | ⬜ |
| 5 | 523 | Continuous Subarray Sum | Prefix + modulo map | ⬜ |
| 6 | 930 | Binary Subarrays With Sum | Prefix + freq map | ⬜ |

---

## Topic 13 — String as Hashmap Key

**Core Idea:** Use a string's sorted form or character frequency as a canonical key to group similar strings together.

**When to use:**
- "Group anagrams" → sorted string as key
- "Find all permutations" → freq array as key
- "Words with same character count" → freq signature as key

**Key Insight:** Two strings are anagrams if and only if their sorted forms are identical. Sorting takes O(k log k) but gives a universal grouping key. Alternative: use frequency array of size 26 as key — O(k) but more complex.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 49 | Group Anagrams | Sort + map | ⬜ |
| 2 | 438 | Find All Anagrams in String | Freq array as key | ⬜ |
| 3 | 249 | Group Shifted Strings | Shift pattern as key | ⬜ |
| 4 | 953 | Verifying an Alien Dictionary | Custom order map | ⬜ |

---

## Topic 14 — Top-K Pattern

**Core Idea:** Build frequency map. Then find top K elements by frequency using sorting or min-heap.

**When to use:**
- "Top K frequent elements" → freq map + heap
- "K closest points" → distance + heap
- "K most frequent words" → freq map + heap

**Key Insight:** For Top-K problems, a min-heap of size K is more efficient than sorting all elements. Push to heap, pop when size > K. Final heap contains K largest. O(n log k) vs O(n log n) for sorting.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 347 | Top K Frequent Elements | Freq map + heap | ⬜ |
| 2 | 692 | Top K Frequent Words | Freq map + heap | ⬜ |
| 3 | 451 | Sort Characters By Frequency | Freq map + sort | ⬜ |
| 4 | 973 | K Closest Points to Origin | Distance + heap | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 295 | Find Median from Data Stream | Two heaps | ⬜ |

---

## Topic 15 — Binary Search: Classic Template

**Core Idea:** On a sorted array, eliminate half the search space at every step. Compare middle element with target — go left or right accordingly. O(log n) instead of O(n).

**When to use:**
- Sorted array + find element → classic binary search
- Find first/last occurrence → binary search with condition
- "Search in rotated array" → modified binary search
- Any "find minimum/maximum satisfying condition" → binary search on answer

**Key Insight:** Always use `mid = lo + (hi - lo) / 2` NOT `(lo + hi) / 2`. The second form overflows for large values. This is a classic interview trap.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 704 | Binary Search | Classic template | ⬜ |
| 2 | 35 | Search Insert Position | Classic + boundary | ⬜ |
| 3 | 278 | First Bad Version | Binary search on answer | ⬜ |
| 4 | 374 | Guess Number Higher or Lower | Classic template | ⬜ |
| 5 | 69 | Sqrt(x) | Binary search on answer | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 6 | 34 | Find First and Last Position | First/last occurrence | ⬜ |
| 7 | 33 | Search in Rotated Sorted Array | Rotated binary search | ⬜ |
| 8 | 153 | Find Minimum in Rotated Sorted Array | Rotated binary search | ⬜ |
| 9 | 162 | Find Peak Element | Binary search on condition | ⬜ |
| 10 | 74 | Search a 2D Matrix | Flatten + binary search | ⬜ |

---

## Topic 16 — Binary Search on Answer

**Core Idea:** Instead of searching for a value IN the array, search for the ANSWER itself. Define a feasibility function — if condition is satisfied at mid, search left half; else search right half.

**When to use:**
- "Minimize the maximum" → binary search on answer
- "Maximize the minimum" → binary search on answer
- "Can we do X in Y days?" → binary search on Y
- Any problem where answer has monotonic property

**Key Insight:** The key question is — "is the answer monotonic?" If feasible(x) is true, is feasible(x+1) also true? If yes → binary search on answer. This pattern unlocks an entire class of hard problems.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 875 | Koko Eating Bananas | BS on speed | ⬜ |
| 2 | 1011 | Capacity to Ship Packages | BS on capacity | ⬜ |
| 3 | 1283 | Find Smallest Divisor | BS on divisor | ⬜ |
| 4 | 2187 | Minimum Time to Complete Trips | BS on time | ⬜ |
| 5 | 1482 | Minimum Number of Days to Make Bouquets | BS on days | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 6 | 410 | Split Array Largest Sum | BS on answer | ⬜ |
| 7 | 774 | Minimize Max Distance to Gas Station | BS on distance | ⬜ |
| 8 | 719 | Find K-th Smallest Pair Distance | BS + sliding window | ⬜ |

---
### Finding MINIMUM that satisfies condition:
→ condition met    → ans = mid, high = mid - 1  (try smaller)
→ condition fails  → low = mid + 1              (need bigger)
→ return ans

### Finding Maximum that satisfies condition
condition met   → ans = mid, low = mid + 1   (try bigger)
condition fails → high = mid - 1             (too big, go smaller)
return ans

## 🧠 Week 2 — Key Insights Summary

| Topic | The One Thing To Remember |
|-------|--------------------------|
| unordered_map | HashMap = space for speed. O(n) space → O(1) lookup. Think hashmap when doing repeated searches. |
| unordered_set | Set = map without values. Use when you only need existence, not count. |
| Prefix + Hashmap | freq[0]=1 ALWAYS before the loop. Non negotiable. |
| String as Key | Sorted string = canonical anagram key. Two strings are anagrams iff their sorted forms match. |
| Top-K Pattern | Min-heap of size K → O(n log k). Always better than sorting for Top-K. |
| Binary Search Classic | mid = lo + (hi-lo)/2. Never (lo+hi)/2. Overflow trap. |
| Binary Search on Answer | Ask: "is the answer monotonic?" Yes → binary search on answer. Unlocks hard problems. |

---

## 📊 Week 2 Problem Count

| Topic | Easy | Medium | Hard | Total |
|-------|------|--------|------|-------|
| unordered_map | 5 | 6 | 2 | 13 |
| unordered_set | 4 | 2 | 0 | 6 |
| Prefix + Hashmap | 0 | 6 | 0 | 6 |
| String as Key | 0 | 4 | 0 | 4 |
| Top-K Pattern | 0 | 4 | 1 | 5 |
| Binary Search Classic | 5 | 5 | 0 | 10 |
| Binary Search on Answer | 0 | 5 | 3 | 8 |
| **TOTAL** | **14** | **32** | **6** | **52** |

---

---

---

# 📌 WEEK 3 — Linked Lists

---

## Topic 17 — Linked List Basics & Traversal

**Core Idea:** A linked list is a chain of nodes where each node points to the next. Unlike arrays, there's no random access — you must traverse from head to reach any node. Master traversal before anything else.

**When to use:**
- Build/print/count nodes → simple traversal
- Find length → traverse and count
- Find kth node from start → traverse k steps

**Key Insight:** Always check `head == nullptr` before touching `head->next`. Null pointer dereference is the #1 crash cause in linked list problems. Draw the list on paper before coding — visualize pointers as arrows, not just variables.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 206 | Reverse Linked List | Iterative pointer reversal | ⬜ |
| 2 | 876 | Middle of the Linked List | Fast & slow pointer | ⬜ |
| 3 | 83 | Remove Duplicates from Sorted List | Single pass traversal | ⬜ |
| 4 | 234 | Palindrome Linked List | Fast/slow + reverse | ⬜ |
| 5 | 21 | Merge Two Sorted Lists | Two pointer merge | ⬜ |

---

## Topic 18 — Fast & Slow Pointers (Floyd's)

**Core Idea:** Two pointers move through the list at different speeds — slow moves 1 step, fast moves 2 steps. This reveals cycles, finds middles, and detects intersections without extra space.

**When to use:**
- "Find the middle node" → slow moves 1, fast moves 2
- "Detect a cycle" → if fast ever equals slow, there's a cycle
- "Find cycle start" → reset one pointer to head after detection
- "Find nth node from end" → two pointers with n gap

**Key Insight:** When fast pointer reaches the end, slow pointer is exactly at the middle. When fast meets slow inside a loop, a cycle exists. This is O(1) space — no hashset needed.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 141 | Linked List Cycle | Fast & slow | ⬜ |
| 2 | 876 | Middle of the Linked List | Fast & slow | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 3 | 142 | Linked List Cycle II | Fast & slow + reset | ⬜ |
| 4 | 19 | Remove Nth Node From End | Two pointer gap | ⬜ |
| 5 | 143 | Reorder List | Fast/slow + reverse + merge | ⬜ |
| 6 | 2095 | Delete the Middle Node | Fast & slow | ⬜ |

---

## Topic 19 — Reversal Patterns

**Core Idea:** Reverse a linked list (fully or partially) by changing the direction of `next` pointers as you traverse. Track previous, current, and next nodes at every step.

**When to use:**
- "Reverse the list" → classic iterative reversal
- "Reverse between positions m and n" → partial reversal
- "Reverse in groups of k" → reverse + recursive/iterative chaining
- "Check palindrome" → reverse second half, compare

**Key Insight:** The 3-pointer dance — prev, curr, next — is the foundation of every reversal problem. Save next BEFORE breaking the link, reverse the link, then move all 3 pointers forward. Never lose the reference to the rest of the list.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 206 | Reverse Linked List | Classic iterative | ⬜ |
| 2 | 234 | Palindrome Linked List | Reverse half + compare | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 3 | 92 | Reverse Linked List II | Partial reversal | ⬜ |
| 4 | 143 | Reorder List | Reverse + merge | ⬜ |
| 5 | 24 | Swap Nodes in Pairs | Pairwise reversal | ⬜ |

### 🔴 Medium-Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 6 | 25 | Reverse Nodes in k-Group | Group reversal | ⬜ |

---

## Topic 20 — Merging & Sorting

**Core Idea:** Combine two or more sorted lists using a two-pointer technique similar to merge sort's merge step. For sorting, apply merge sort (divide list in half using slow/fast, recursively sort, merge).

**When to use:**
- "Merge two sorted lists" → two pointer merge
- "Merge k sorted lists" → divide and conquer or min-heap
- "Sort a linked list" → merge sort (only O(n log n) option without O(n) space for arrays)

**Key Insight:** Use a dummy node before the head to avoid special-casing the first node. Merge sort is the only sorting algorithm that works well on linked lists because it doesn't need random access — unlike quicksort.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 21 | Merge Two Sorted Lists | Two pointer merge | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 2 | 148 | Sort List | Merge sort on list | ⬜ |
| 3 | 86 | Partition List | Two dummy lists | ⬜ |
| 4 | 2 | Add Two Numbers | Digit-by-digit merge | ⬜ |

### 🔴 Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 23 | Merge k Sorted Lists | Heap / divide & conquer | ⬜ |

---

## Topic 21 — Deletion & Modification

**Core Idea:** Removing nodes requires careful pointer rewiring — you must hold a reference to the node BEFORE the one you're deleting. Use a dummy node to simplify edge cases like deleting the head.

**When to use:**
- "Remove nth node from end" → two pointer gap technique
- "Remove duplicates" → compare adjacent nodes
- "Delete node given only that node" → copy next node's value, skip it
- "Remove elements equal to val" → dummy node + traversal

**Key Insight:** Dummy node trick — create a fake node pointing to head before you start. This eliminates all special-casing for "what if we delete the head itself." Always return `dummy->next`, not `head`.

### 🟢 Easy

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 83 | Remove Duplicates from Sorted List | Adjacent comparison | ⬜ |
| 2 | 203 | Remove Linked List Elements | Dummy node | ⬜ |
| 3 | 237 | Delete Node in a Linked List | Copy + skip trick | ⬜ |

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 4 | 19 | Remove Nth Node From End | Two pointer gap | ⬜ |
| 5 | 82 | Remove Duplicates from Sorted List II | Dummy + skip all dupes | ⬜ |
| 6 | 1171 | Remove Zero Sum Consecutive Nodes | Prefix sum + hashmap | ⬜ |

---

## Topic 22 — Advanced / Combination Problems

**Core Idea:** These problems combine multiple linked list techniques — reversal, fast/slow pointers, hashmap, and recursion — into a single solution. They simulate real interview difficulty.

**When to use:**
- "Copy list with random pointer" → hashmap for old-to-new node mapping
- "Intersection of two lists" → two pointer length equalization trick
- "Flatten multilevel list" → DFS/stack based traversal

**Key Insight:** For "find intersection point" type problems — walk both pointers to the end and switch to the other list's head. They'll meet at the intersection in exactly `lenA + lenB` steps, no length calculation needed.

### 🟡 Medium

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 1 | 160 | Intersection of Two Linked Lists | Two pointer switch | ⬜ |
| 2 | 138 | Copy List with Random Pointer | Hashmap mapping | ⬜ |
| 3 | 61 | Rotate List | Find length + reconnect | ⬜ |
| 4 | 328 | Odd Even Linked List | Two pointer separation | ⬜ |

### 🔴 Hard

| # | LC | Problem | Pattern | Status |
|---|----|---------|---------|--------|
| 5 | 430 | Flatten a Multilevel Doubly Linked List | DFS / stack | ⬜ |

---

## 🧠 Week 3 — Key Insights Summary

| Topic | The One Thing To Remember |
|-------|--------------------------|
| Basics & Traversal | Always check `head == nullptr` before dereferencing. Draw it on paper first. |
| Fast & Slow Pointers | Fast moves 2x slow. When fast hits end, slow is at middle. When they meet, there's a cycle. |
| Reversal Patterns | prev → curr → next dance. Save next BEFORE breaking the link. |
| Merging & Sorting | Dummy node before head eliminates edge cases. Merge sort is the only good sort for lists. |
| Deletion & Modification | Hold reference to node BEFORE the one you delete. Dummy node handles head deletion. |
| Advanced Combinations | Intersection trick — switch heads when reaching end, meet in lenA+lenB steps. |

---

## 📊 Week 3 Problem Count

| Topic | Easy | Medium | Hard | Total |
|-------|------|--------|------|-------|
| Basics & Traversal | 5 | 0 | 0 | 5 |
| Fast & Slow Pointers | 2 | 4 | 0 | 6 |
| Reversal Patterns | 2 | 3 | 1 | 6 |
| Merging & Sorting | 1 | 3 | 1 | 5 |
| Deletion & Modification | 3 | 3 | 0 | 6 |
| Advanced Combinations | 0 | 4 | 1 | 5 |
| **TOTAL** | **13** | **17** | **3** | **33** |

---