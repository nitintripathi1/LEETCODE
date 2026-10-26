class Solution {
public:
int dp[201][201];
int solve(int i, int j ,int n ,vector<vector<int>>& triangle){
    if(i == n-1) return triangle[i][j];
    if(dp[i][j] != INT_MAX) return dp[i][j];
    int d = triangle[i][j] + solve(i + 1 ,j, n  , triangle);
    int r = triangle[i][j] + solve(i + 1 , j + 1 , n , triangle);
    return dp[i][j] = min(d , r);

}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for (int i = 0; i < 201; i++) {
            for (int j = 0; j < 201; j++) {
                dp[i][j] = INT_MAX;
            }
        }
        return solve(0 , 0 , n , triangle);
    }
};