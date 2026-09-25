class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left; i <= right; i++){
            int x = i;
            int y = i;
            bool valid = true;
            while(x != 0){
                int digit = x % 10;
                if(digit == 0 || y % digit != 0){
                    
                    valid = false;
                    break;
                }
                x /= 10;
            }
            if(valid)
            ans.push_back(y);
        }
        return ans;
    }
};