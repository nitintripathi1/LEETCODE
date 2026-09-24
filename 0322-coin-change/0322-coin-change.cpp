class Solution {
public:
int solve(vector<int>&coins, int amount , int i , vector<vector<int>>&ans){
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;
    if(i >= coins.size()) return INT_MAX;

    if(ans[i][amount] != -1) return ans[i][amount];

    int take = solve(coins, amount - coins[i], i , ans);
     if (take != INT_MAX) take += 1; 
    int skip = solve(coins , amount , i+1 , ans);
     return ans[i][amount] = min(take , skip);
    
}

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>ans(n , vector<int>(amount+1 , -1));
        int res = solve(coins, amount, 0, ans);
        return res == INT_MAX ? -1 : res;
        
    }
};