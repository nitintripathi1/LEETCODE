class Solution {
public:
    int solve(int curr, int prev, vector<int>& nums , vector<vector<int>>&ans) {
        if (curr >= nums.size())
            return 0;

        int pick = 0;
        int Npick = 0;
        if(ans[curr][prev+1] != -2) return ans[curr][prev+1];
        if (prev == -1 || nums[curr] > nums[prev]) {
            pick = 1 + solve(curr + 1, curr, nums , ans);
        }

        Npick = solve(curr + 1, prev, nums , ans);
        return ans[curr][prev + 1] = max(pick, Npick);
    }
    int lengthOfLIS(vector<int>& nums) { 
        int n = nums.size();
        vector<vector<int>>ans(n , vector<int>(n+1, -2));
        return solve(0, -1, nums , ans ); 
        }
};