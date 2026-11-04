class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minK_idx = -1;
        int maxK_idx = -1;
        int mG_idx = -1;
        int i = 0;
        int n = nums.size();
        long long ans = 0;
        while(i < n){
            if(nums[i] == minK){
                minK_idx = i;
            }
            if(nums[i] == maxK){
                maxK_idx = i;
            }
            if(nums[i] > maxK ||  nums[i] < minK){
                mG_idx = i;
            }
            int smaller = min(minK_idx , maxK_idx);
            int temp = smaller - mG_idx;
            ans += temp <= 0 ? 0 : temp;
            i++;
        }
        return ans;
    }
};