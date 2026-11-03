class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int x = *max_element(nums.begin() , nums.end());
        for(int i : nums){
            count += x - i;
        }
        return count;
    }
};