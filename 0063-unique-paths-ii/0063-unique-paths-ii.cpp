class Solution {
public:
int obstacle(int i , int j ,int m , int n, vector<vector<int>>&obstacleGrid, vector<vector<int>>&ans){


if(i >= m || j >= n) return 0;
if(obstacleGrid[i][j] == 1) return 0;
if(i == m -1 && j == n -1) return 1;
if(ans[i][j] != -1) return ans[i][j];
int l = obstacle(i + 1 , j ,m ,n, obstacleGrid , ans);
int r = obstacle(i , j + 1 ,m ,n, obstacleGrid , ans);
return ans[i][j] = l + r;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>ans(m , vector<int>(n , -1));

      return  obstacle(0 , 0 , m ,n ,obstacleGrid , ans);
     
    }
};