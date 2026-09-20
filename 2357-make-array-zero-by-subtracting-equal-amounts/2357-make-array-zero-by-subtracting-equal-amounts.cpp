class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        while(true){
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min && nums[i] != 0){
                min = nums[i];
            }

        }
        if(min == INT_MAX) break;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
            nums[i] -= min; 
        }
        count++;
        }
        return count;
    }
};