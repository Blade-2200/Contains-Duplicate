// Contains Duplicate

// **Problem Statement**
// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// ## **Approach**  
// ### **1. Brute Force (if applicable)**  
// - Iterate through every pair of elements and check if their sum equals `target`.
// - Time Complexity: O(n^2)  
// - Space Complexity: O(1)

// ### **2. Optimized Approach**  
// - Use a hash map (dictionary) to store seen numbers and their indices.
// - For each number `num` in `nums`, check if `target - num` exists in the hash map.
// - If found, return the indices.
// - Time Complexity: O(n) (one pass through `nums`)  
// - Space Complexity: O(n) (for storing numbers in the dictionary)

// Final Implementation Using Hash Map:

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;

        for (int i = 0; nums.size() > i; i++) {
            int target = nums[i];

            if (seen.find(target) != seen.end()) {
                return true;
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
