class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // O(n^2)
        /**
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {0};
        **/
        // O(n) 99.91 / 24.98
        std::unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            auto idx = m.find(target - nums[i]);
            if (idx != m.end()) {
                return {idx->second, i};
            }
            m.insert(std::pair(nums[i], i));
        }
        return {0};
    }
};
