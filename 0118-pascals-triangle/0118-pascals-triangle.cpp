class Solution {
public:
    vector<vector<int>> solve(int i, int numRows, vector<vector<int>>& ans) {
        if (i == numRows) {
            return ans;
        }
        vector<int> temp;
        if (i == 0) {
            temp.push_back(1);
        } else {
            temp.push_back(1);
            for (int j = 1; j < i; j++) {
                temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            temp.push_back(1);
        }
        ans.push_back(temp);
        return solve(i + 1, numRows, ans);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        return solve(0, numRows, ans);
    }
};