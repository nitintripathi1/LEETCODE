class Solution {
public:
int solve(int i ,int count ,int ans, vector<int>&nums){
    if(i == nums.size()){
        return max(ans , count);
    }
    if(nums[i] > nums[i-1]){
        return solve(i+1 , count+1 , ans , nums);
    }
    ans = max(ans , count);
    return solve(i+1 , 1 , ans , nums);
}
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        return solve(1 , 1 , 1 ,nums);
    }
};