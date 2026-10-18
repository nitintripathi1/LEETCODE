class Solution {
public:
int dp[20];
int solve(int n ){
    if(n <= 1) return 1;
    int ans = 0;
    if(dp[n] != -1) return dp[n];
    for(int i = 1; i <= n; i++){
        int left = solve(i-1);
        int right = solve(n- i);
        ans += left*right;
    }
    return dp[n] = ans;
}
    int numTrees(int n) {
        memset(dp , -1 , sizeof(dp));
        return solve(n);
    }
};