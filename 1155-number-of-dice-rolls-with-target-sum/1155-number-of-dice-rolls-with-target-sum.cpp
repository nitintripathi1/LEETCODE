class Solution {
public:
#define mod 1000000007   
int tt(int n , int k , int t , vector<vector<int>>&ans){
    int sum = 0; 
    if(n == 0 && t == 0) return 1;
    if(n == 0) return 0;
    if(ans[n][t] != -1) return ans[n][t];
    for(int i = 1; i <= k; i++){
        if(t-i < 0) continue;  
        sum = ((sum%mod) + tt(n -1 , k , t -i ,ans)%mod)%mod;
    }
    return ans[n][t] = sum;
}
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>ans(n+1 , vector<int>(target+1,-1));
        return tt(n , k , target , ans);
    }
};