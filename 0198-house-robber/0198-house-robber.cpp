class Solution {
public:
int dp[101];
int solve(int i , vector<int>&nums){
    if(i < 0) return 0;
    if(dp[i] != -1) return dp[i];
    int take = nums[i] + solve(i -2 , nums);
    int skip = solve(i -1 , nums);
    return dp[i] = max(take , skip);

}
    int rob(vector<int>& nums) {
        int n = nums.size() -1; 
        memset(dp , -1 , sizeof(dp));
        return solve(n, nums);
    }
};