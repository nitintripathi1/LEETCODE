class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;
        nth_element(nums.begin(), nums.begin() + n / 2, nums.end());

        int count = 0;
        for (int i = 0; i < n / 2; i++) {
            count += abs(nums[mid] - nums[i]);
            count += abs(nums[mid] - nums[n - i - 1]);
        }
        return count;
    }
};