class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int mid = n/2;
        int count = 0;
        for(int i = 0; i < n/2; i++){
            count += abs(nums[mid] - nums[i]);
            count += abs(nums[mid] - nums[n-i-1]);
        }
        return count;
    }
};