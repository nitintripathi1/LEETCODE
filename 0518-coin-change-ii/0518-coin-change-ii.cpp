class Solution {
public:
int solve(int amount , vector<int>&coins , int index , vector<vector<int>>&ans){
    if(amount == 0) return 1;
    if(amount < 0) return 0;
    if(index >= coins.size()) return 0;
    if(ans[index][amount] != -1) return ans[index][amount];
    int take = solve(amount - coins[index] , coins , index , ans);
    int skip = solve(amount , coins ,index+1 , ans);
    return ans[index][amount] = take + skip;
}
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>ans(n,vector<int>(amount+1 , -1));
        return solve(amount , coins, 0 ,ans);
        
    }
};