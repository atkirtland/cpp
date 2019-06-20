# O(n\log(n))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int count = 0;
        int curr = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == curr) {
                ++count;
            }
            else {
                if (count > nums.size()/2) {
                    return curr;
                }
                else {
                    count = 1;
                    curr = nums[i];
                }
            }
        }
        return curr;
    }
};
