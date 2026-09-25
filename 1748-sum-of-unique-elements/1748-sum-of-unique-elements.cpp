class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int ,int>m;
        int sum = 0;
       for(auto x : nums){
        m[x]++;
        }
        for(auto x : m){
            if(x.second == 1) {
            sum += x.first;
            }
        }
        return sum;
    }
};