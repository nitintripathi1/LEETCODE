class Solution {
public:
int m ,n;
 vector<vector<vector<int>>> dp;
bool solve(int i , int j ,int count, vector<vector<char>>&grid){
if(count  < 0) return false;
if(i >= m || j >= n) return false;
if(grid[i][j] =='('){
    count++;
}
else {
    count--;
}
if(count < 0) return false;
if(i == m -1 && j == n-1) return count == 0;
if (dp[i][j][count] != -1)
            return dp[i][j][count];
bool down = solve(i+1 , j , count , grid);
bool right = solve(i , j+1 , count , grid);
return dp[i][j][count] =     right || down;
}
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if((m+n-1) % 2 == 1) return false;
        dp.assign(m, vector<vector<int>>(
            n, vector<int>(m + n, -1)
        ));

        return solve(0 , 0 , 0 , grid);
    }
};