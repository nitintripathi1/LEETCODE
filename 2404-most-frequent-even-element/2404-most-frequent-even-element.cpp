class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        int mini = 0;

        for(auto x : mp) {
            if(x.first % 2 == 0) {
                if(x.second > mini) {
                    mini = x.second;
                }
            }
        }
        int ans = INT_MAX;
        for(auto x : mp){
            if(x.first % 2 == 0 && x.second == mini){
                ans = min(ans , x.first);
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};