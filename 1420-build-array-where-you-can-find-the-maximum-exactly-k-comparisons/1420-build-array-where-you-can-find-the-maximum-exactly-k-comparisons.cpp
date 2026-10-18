class Solution {
public:
    int N, M, K;
    int mod = 1e9 + 7;
    int t[51][51][101];
    int solve(int idx, int searchCost, int maxCost) {
        if (idx == N) {
            if (searchCost == K) {
                return 1;
            }
            return 0;
        }
        if (t[idx][searchCost][maxCost] != -1) {
            return t[idx][searchCost][maxCost];
        }
        int result = 0;
        for (int i = 1; i <= M; i++) {
            if (i > maxCost) {
                result = (result + solve(idx + 1, searchCost + 1, i)) % mod;
            } else {
                result = (result + solve(idx + 1, searchCost, maxCost)) % mod;
            }
        }
        return t[idx][searchCost][maxCost] = result % mod;
    }
    int numOfArrays(int n, int m, int k) {
        N = n;
        M = m;
        K = k;
        memset(t, -1, sizeof(t));
        return solve(0, 0, 0);
    }
};