class Solution {
public:
int solve(int i , int j , string &text1 ,string &text2 , vector<vector<int>>&ans){
    if(i <0 || j < 0) return 0;
    if(ans[i][j]!= -1) return ans[i][j];

    if(text1[i] == text2[j]){
        return ans[i][j] = 1 + solve(i-1 , j-1 , text1 , text2 , ans);
    }
    return ans[i][j] = max(solve(i-1, j , text1 , text2 , ans) , solve(i , j-1 , text1 , text2 , ans));
    
}
    int longestCommonSubsequence(string text1, string text2) {
        int i = text1.length()-1;

        int j = text2.length()-1;
        vector<vector<int>>ans(i+1 ,vector<int>(j +1 , -1));
        return solve(i , j , text1 , text2 , ans);
    }
};