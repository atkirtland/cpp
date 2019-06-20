// faster than 100%
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        return helper(digits);
    }
private:
    vector<string> helper(string digits) {
        if (digits.size() == 0) {
            return {};
        }
        if (digits.size() == 1) {
            return maps[digits[0]-'0'-2];
        }
        vector<string> poss = maps[digits[0]-'0'-2];
        vector<string> ret;
        vector<string> nextpart = helper(digits.substr(1));
        for (string c : poss) {
            for (string str : nextpart) {
                ret.push_back(c+str);
            }
        }
        return ret;
    }
    vector<vector<string>> maps = {
        {"a","b","c"},
        {"d","e","f"},
        {"g","h","i"},
        {"j","k","l"},
        {"m","n","o"},
        {"p","q","r","s"},
        {"t","u","v"},
        {"w","x","y","z"}
    };
};
