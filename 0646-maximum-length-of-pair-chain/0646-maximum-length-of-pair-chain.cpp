class Solution {
public:
int solve(int prev_idx , int curr_idx , vector<vector<int>>&pairs, vector<vector<int>>&ans){
    if(curr_idx == pairs.size()) return 0;
    int take = 0;
    int Ntake = 0;
    if(ans[curr_idx][prev_idx + 1] != -1) return ans[curr_idx][prev_idx+1];
    if(prev_idx ==  -1 || pairs[curr_idx][0]  > pairs[prev_idx][1]){
        take = 1 + solve(curr_idx , curr_idx + 1 , pairs , ans);
    }
    Ntake = solve(prev_idx , curr_idx + 1, pairs, ans);

    return ans[curr_idx][prev_idx+1] = max(take , Ntake);

}
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin() , pairs.end());
         vector<vector<int>>ans(pairs.size(), vector<int>(pairs.size() + 1, -1));
         return solve(-1 , 0 , pairs , ans);
    }
};