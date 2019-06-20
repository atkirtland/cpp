class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // O(#strs*min_str_size)
        if (strs.size() == 0) {
            return "";
        }
        int minsize = strs[0].size();
        for (std::string str : strs) {
            minsize = std::min(minsize, (int) str.size());
        }
        int i;
        for (i = 0; i < minsize; ++i) {
            for (std::string str : strs) {
                if (str[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, i);
    }
};
