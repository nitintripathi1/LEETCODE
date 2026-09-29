class Solution {
public:
int solve(string &s1 , string &s2 , int i , int j , vector<vector<int>>&ans){
    if(i < 0 || j < 0) return 0;
    if(ans[i][j] != -1) return ans[i][j];

    if(s1[i] == s2[j]){
        return ans[i][j] = 1 + solve(s1, s2, i-1 , j -1, ans);
    }
    return ans[i][j] = max(solve(s1 , s2 , i-1, j, ans) , solve(s1 , s2 , i , j -1, ans));

}
    int minDistance(string word1, string word2) {
        int i = word1.length() -1;
        int j = word2.length() -1;
        vector<vector<int>>ans(i + 1 , vector<int>(j+1 , -1));
        int common = solve(word1 , word2 , i , j , ans);
        int n = word1.length() - common;
        int m = word2.length() - common;
        return n + m;
    }
};