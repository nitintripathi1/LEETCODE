class Solution {
public:
int dp[1001][1001];
int solve(int i , int j , vector<vector<int>>& dungeon){
    int m = dungeon.size();
    int n = dungeon[0].size();
    if(i == m -1 && j == n -1){
        return max(1 , 1 - dungeon[i][j]);
    }
    if(i >= m || j >= n) {
        return INT_MAX;
    }
    
    if(dp[i][j] != -1) return dp[i][j];
    
    int right  = solve(i , j + 1 , dungeon);
    int left = solve(i+1 , j , dungeon);
    int result = min(right , left);
    return dp[i][j] = max(1 , result - dungeon[i][j]);
}
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        memset(dp , -1 , sizeof(dp));
        return solve(0 , 0 , dungeon);
    }
};