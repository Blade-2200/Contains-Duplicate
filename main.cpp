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
