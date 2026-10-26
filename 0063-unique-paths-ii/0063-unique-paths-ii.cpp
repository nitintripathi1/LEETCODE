class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
      int ans[101][101];
      int m = obstacleGrid.size();
      int n = obstacleGrid[0].size();
      for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
             if(obstacleGrid[i][j] == 1){
                ans[i][j] = 0;
            }
            else if(i == 0 && j == 0) {
                ans[i][j] = 1;
            }
           
            else {
                int left = 0 , down = 0;
                if(i > 0) left = ans[i-1][j];
                if(j > 0) down = ans[i][j-1];
                ans[i][j] = left + down;
            }
        }
      }
      return ans[m-1][n-1];
    }
};