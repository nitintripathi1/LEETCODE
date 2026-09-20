class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>s;
        for(auto x : nums){
            s.insert(x);
        }
        for(int i = 1; i <=nums.size(); i++){
            if(!s.count(i)) ans.push_back(i);
        }
        return ans;
    }
};