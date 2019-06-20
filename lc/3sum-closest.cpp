// O(n^3)
// we can make an O(n^2) soln by sorting, then for each elt, use double pointers to find the pair closest to (target-nums[i]) and (nums[i]-target) and update best soln if necessary
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = abs(nums[0]+nums[1]+nums[2] - target);
        int ret = nums[0]+nums[1]+nums[2];
        for (int i = 0; i < nums.size()-2; ++i) {
            for (int j = i+1; j < nums.size()-1; ++j) {
                for (int k = j+1; k < nums.size(); ++k) {
                    int poss = abs(nums[i]+nums[j]+nums[k] - target);
                    if (poss < diff) {
                        diff = poss;
                        ret = nums[i]+nums[j]+nums[k];
                    }
                }
            }
        }
        return ret;
    }
};
