class Solution {
public:
    // 99.37% time, 84.77% memory
    int searchInsert(vector<int>& nums, int target) {
        if (target > nums.back()) {
            return nums.size();
        }
        if (target < nums[0]) {
            return 0;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (target == nums[i]) {
                return i;
            }
            if (i < nums.size()-1 && target > nums[i] && target < nums[i+1]) {
                return i+1;
            }
        }
        return 0;
    }
};
