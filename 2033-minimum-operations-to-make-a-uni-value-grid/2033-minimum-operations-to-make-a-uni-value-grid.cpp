class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        int ans = 0;
        for(int i =0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                v.push_back(grid[i][j]);
            }

        }
        sort(v.begin() , v.end());
        int target = v[v.size()/2];
        for(int i : v){
            if(abs(i - target) % x != 0) return -1;
            ans += abs(i - target)/x;
        }
        return ans;
    }
};