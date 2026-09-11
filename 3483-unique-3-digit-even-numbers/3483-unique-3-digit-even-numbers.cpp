class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        for(int i  = 0; i < digits.size(); i++){
            for(int j = 0; j < digits.size(); j++){
                for(int k = 0; k < digits.size(); k++){
                    if(i == j || j == k || k == i)
                    continue;
                    if(digits[i] == 0)
                    continue;
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    if(num % 2 == 0) ans.insert(num);
                }
            }
        }
        return ans.size();
    }
};