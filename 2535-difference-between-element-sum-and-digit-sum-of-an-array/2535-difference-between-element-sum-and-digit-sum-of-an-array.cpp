class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for (int i = 0; i < nums.size(); i++) {
            a += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            while (x != 0) {
                b += x % 10;
                x /= 10;
            }
        }
        return abs(a - b);
    }
};