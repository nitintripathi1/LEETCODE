class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
               vector<int>temp;
            while(nums[i] > 0){
             
                int a = nums[i]%10;
                temp.push_back(a); 
                nums[i] /= 10;
            }
            reverse(temp.begin() , temp.end());
            for(auto x : temp){
                ans.push_back(x);
                
            }

        }

        return ans;
    }
};