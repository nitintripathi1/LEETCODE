class Solution {
public:
int left = 0;
int up = 1;
int MOD = 1e9 + 7;
int dp[501][501][2];
int solve(int i , int j ,int m , int n, vector<vector<int>>&grid , int came){
    if(i >= m  || j >= n) return 0;
    if(i == m -1 && j == n-1) return 1;
    if(dp[i][j][came] != -1) return dp[i][j][came];
    if(grid[i][j] == 1){
        if(came == left){
           return dp[i][j][came] = solve(i+1 , j , m ,n , grid , up);
        }
        else {
            return dp[i][j][came] = solve(i , j+1 , m , n , grid , left);
        }
    }
    int totalPossiblePath = 0;
    totalPossiblePath = (totalPossiblePath + solve(i + 1, j , m ,n , grid , up)%MOD);
    totalPossiblePath = (totalPossiblePath + solve(i , j + 1 , m ,n , grid , left)%MOD);
    return dp[i][j][came] = (totalPossiblePath)%MOD;
}
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(dp , -1 , sizeof(dp));
        return solve(0 , 0 , m , n , grid , left);
    }
};