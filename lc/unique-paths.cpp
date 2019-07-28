// 100.00% speed
// 91.64% memory
class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ret = 1;
        int ma = std::max(m, n);
        int mi = std::min(m, n);
        for (long long i = ma; i <= n+m-2; ++i) {
            ret *= i;
        }
        return ret/factorial(mi-1);
    }
private:
    long long factorial(int n) {
        long long ret = 1;
        for (long long i = 2; i <= n; ++i) {
            ret *= i;
        }
        return ret;
    }
};
