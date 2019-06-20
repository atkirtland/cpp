class Solution {
public:
    vector<int> grayCode(int n) {
        std::set<int> S = {0};
        vector<int> ret = {0};
        int curr = 0;
        
        while (ret.size() < (1 << n)) {
            int temp = curr;
            for (int i = 0; i < n; ++i) {
                int mod = temp % 2;
                if (mod == 0) {
                    int poss = curr + (1 << i);
                    if (S.find(poss) == S.end()) {
                        curr = poss;
                        ret.push_back(poss);
                        S.insert(poss);
                        break;
                    }
                }
                else {
                    int poss = curr - (1 << i);
                    if (S.find(poss) == S.end()) {
                        curr = poss;
                        ret.push_back(poss);
                        S.insert(poss);
                        break;
                    }
                }
                temp >>= 1;
            }
        }
        return ret;
    }
};
