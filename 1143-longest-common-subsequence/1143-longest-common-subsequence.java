class Solution {
    int[][] dp = new int[1001][1001];

    int solve(int i, int j, String s1, String s2) {
        if (i < 0 || j < 0) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s1.charAt(i) == s2.charAt(j)) {
            return dp[i][j] = 1 + solve(i - 1, j - 1, s1, s2);
        } else {
            return dp[i][j] = Math.max(solve(i - 1, j, s1, s2), solve(i, j - 1, s1, s2));
        }
    }

    public int longestCommonSubsequence(String text1, String text2) {
        int n = text1.length() - 1;
        int m = text2.length() - 1;
        for (int i = 0; i < 1001; i++) {
            for (int j = 0; j < 1001; j++) {
                dp[i][j] = -1;
            }
        }
        return solve(n ,m, text1, text2);
    }
}