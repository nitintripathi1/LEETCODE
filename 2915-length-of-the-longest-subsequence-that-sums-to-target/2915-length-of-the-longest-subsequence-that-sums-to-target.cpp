class Solution {
public:
int solve(vector<int>&nums , int target , int i , vector<vector<int>>&ans){
    if(target == 0) return 0;
    if(target < 0 || i >= nums.size()) return -1;
    if(ans[i][target] != -2) return ans[i][target];
    int take = solve(nums , target - nums[i] , i+1 , ans);
    if(take != -1) take = take + 1;
    int skip = solve(nums , target , i +1 , ans);
    
    return ans[i][target] = max(take , skip);


}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>ans(nums.size() + 1 , vector<int>(target+1 , -2));
        
        return solve(nums , target ,0 , ans);
    }
};