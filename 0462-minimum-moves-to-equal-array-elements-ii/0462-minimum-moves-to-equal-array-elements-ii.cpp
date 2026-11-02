class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        long long ans = LLONG_MAX;
        while (i < n) {
            long long count = 0;
            for (int j = 0; j < n; j++) {
                count += abs((long long)nums[i] - nums[j]);
            }
            ans = min(ans, count);
            i++;
        }
        return ans;
    }
};