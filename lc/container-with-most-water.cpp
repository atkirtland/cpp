class Solution {
public:
    int maxArea(vector<int>& height) {
        /** O(n^2)
        int ret = 0;
        for (int i = 0; i < height.size(); ++i) {
            for (int j = i+1; j < height.size(); ++j) {
                ret = std::max(ret, std::min(height[i], height[j])*(j-i));
            }
        }
        return ret;
        **/
        // O(n), O(1)
        int ret = 0;
        int i = 0;
        int j = height.size()-1;
        while (j != i) {
            ret = std::max(ret, std::min(height[i], height[j])*(j-i));
            if (height[i] < height[j]) {
                ++i;
            }
            else {
                --j;
            }
        }
        return ret;
    }
};
