class Solution {
public:

static bool compp(string &words1  , string &words2){
    return words1.length() < words2.length();
}
bool isValid(string &prev , string &curr){
    int n = prev.length();
    int m = curr.length();
    if((m -n) != 1) return false;
    int i = 0;
    int j =0;
    while(i < n && j <m ){
        if(prev[i] == curr[j]){
            i++;
        }
        j++;
    }
    return i == n;
}
int solve(int prev_idx ,int curr_idx , vector<string>&words , vector<vector<int>>&ans){
    if(curr_idx == words.size()) return 0;

    if(ans[prev_idx+1][curr_idx] != -1) return ans[prev_idx+1][curr_idx];

    int take = 0;
    if(prev_idx == -1 || isValid(words[prev_idx] , words[curr_idx])){
        take = 1 + solve(curr_idx , curr_idx + 1 , words ,ans);
    }
    int N_take = solve(prev_idx , curr_idx + 1 , words , ans);

    return ans[prev_idx+1][curr_idx]= max(take , N_take);
}
    int longestStrChain(vector<string>& words) {
        sort(words.begin() , words.end(), compp);
        int n = words.size();
        vector<vector<int>>ans(n , vector<int>(n+1 , -1));
        return solve(-1 , 0 , words , ans);
    }
};