// Solution Currently Takes too long

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; nums.size() > i; i++) {
            for (int j = i + 1; nums.size() > j; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
