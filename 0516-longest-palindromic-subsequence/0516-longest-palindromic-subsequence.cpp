    class Solution {
    public:
    int solve(string &s , int i , int j , int n , vector<vector<int>>&ans){
        if(i > j) return 0;
        if(i == j) return 1;
        if(ans[i][j] != -1) return ans[i][j];

        if(s[i] == s[j]){
            
            return ans[i][j] = 2 + solve(s , i+1 , j-1, n , ans);
        }
        return ans[i][j] = max(solve(s , i+1 , j , n, ans) , solve(s , i , j-1 , n , ans));
    }
        int longestPalindromeSubseq(string s) {
            int i = 0;
            int j = s.length()-1;
            int n = s.length();
            vector<vector<int>>ans(n+1, vector<int>(n+1, -1));
            return solve(s, i , j , n-1 , ans);
        }
    };