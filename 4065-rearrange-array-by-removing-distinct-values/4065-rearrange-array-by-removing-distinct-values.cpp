class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int , int>mp;
        vector<int>ans;
        for(int i : nums){
            mp[i]++;
        }
        while(!mp.empty()){
            vector<int>temp;
            for(auto &y : mp){
                ans.push_back(y.first);
                y.second--;
                if(y.second == 0){
                    temp.push_back(y.first);
                }
            }
            for(auto y : temp){
                mp.erase(y);
            }
        }
        return ans;
    }
};