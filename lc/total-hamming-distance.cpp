# O(n^2)
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ret = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = i+1; j < nums.size(); ++j) {
                int z = nums[i] ^ nums[j];
                int total = 0;
                while (z != 0) {
                    if (z & 1 == 1) {
                        total += 1;
                    }
                    z >>= 1;
                }
                ret += total;
            }
        }
        return ret;
    }
};

# O(n)
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        vector<int> bits(32, 0);
        for (int num : nums) {
            int t = 0;
            while (num != 0) {
                bits[t] += num&1;
                num >>= 1;
                t += 1;
            }
        }
        for (int& bit : bits) {
            bit = bit*(nums.size()-bit);
        }
        return std::accumulate(bits.begin(), bits.end(), 0);
    }
};
