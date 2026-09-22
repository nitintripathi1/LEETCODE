class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<double>ans;
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            double k = (nums[i] + nums[j])/2.0;
            ans.push_back(k);
            i++;
            j--;        
        }
        double small = DBL_MAX;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] < small){
                small = ans[i];
            }
        }
        return small;
    }
};