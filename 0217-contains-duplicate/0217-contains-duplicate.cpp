class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto x : mp){
            if(x.second > 1) return true;
        }
        return false;
    }
};