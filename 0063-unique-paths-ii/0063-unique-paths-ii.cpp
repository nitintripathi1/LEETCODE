class Solution {
public:
int dp[100][100];
    int solve(int i, int j, vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if (i >= m || j >= n)
            return 0;
        if (obstacleGrid[i][j] == 1)
            return 0;
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int down = solve(i + 1, j, obstacleGrid);
        int right = solve(i, j + 1, obstacleGrid);
        return dp[i][j] = down + right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp , -1 , sizeof(dp));
        return solve(0, 0, obstacleGrid);
    }
};