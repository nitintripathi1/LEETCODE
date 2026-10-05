class Solution {
public:
long long solve(int i , bool flag , vector<int>&nums , vector<vector<long long>>&ans){
    if(i == nums.size()) return 0;
    long long take;
    if(ans[i][flag] != -1) return ans[i][flag];
    if(flag == true){
        take = nums[i] + solve(i+1 , !flag , nums , ans);
    }
    else{
        take = -nums[i] + solve(i+1 , !flag , nums , ans);
    }
    long long skip = solve(i+1, flag , nums , ans);
    return ans[i][flag] = max(take , skip);
}
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>>ans(n + 1 , vector<long long>(2 , -1));
        return solve(0, true, nums , ans);
    }
};