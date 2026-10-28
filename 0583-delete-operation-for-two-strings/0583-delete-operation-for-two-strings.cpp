class Solution {
public:
    int common;
    int dp[501][501];
    int solve(int i, int j, string& word1, string& word2) {
       
        if(i < 0 || j < 0) {
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if (word1[i] == word2[j]) {
            return dp[i][j] = 1 + solve(i - 1, j - 1, word1, word2);
        } else {
            return dp[i][j] = max(solve(i - 1, j, word1, word2),
                                solve(i, j - 1, word1, word2));
        }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        memset(dp , -1 , sizeof(dp));
        common = solve(n -1, m -1, word1, word2);
        int r = n - common;
        int q = m - common;
        return r + q;
    }
};