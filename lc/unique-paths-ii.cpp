// faster than 88.22
// less mem than 40.91
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        size_t M = obstacleGrid.size();
        size_t N = obstacleGrid[0].size();
        vector<vector<long long>> ret(M, vector<long long>(N, 0));
        ret[0][0] = 1;
        for (size_t m = 0; m < M; ++m) {
            for (size_t n = 0; n < N; ++n) {
                if (obstacleGrid[m][n]) {
                    ret[m][n] = 0;
                    continue;
                }
                if (m == 0 && n == 0) {
                    continue;
                }
                ret[m][n] = ((m == 0) ? 0 : ret[m-1][n]) + ((n == 0) ? 0 : ret[m][n-1]);
            }
        }
        return ret[M-1][N-1];
    }
};
