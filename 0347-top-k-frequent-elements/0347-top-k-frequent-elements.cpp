class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(int x : nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto x : mp){
            p.push({x.second , x.first});
        }
        while(k != 0){
        ans.push_back(p.top().second);
        p.pop();
        k--;
        }
        return ans;
    }
};