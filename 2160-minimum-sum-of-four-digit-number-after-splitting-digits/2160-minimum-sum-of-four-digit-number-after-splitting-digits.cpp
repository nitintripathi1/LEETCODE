class Solution {
public:
vector<int>ans;
    int minimumSum(int num) {
        while(num != 0){
        ans.push_back(num % 10);
        num /= 10;
        }
        sort(ans.begin() , ans.end());
        int num1 = ans[0] * 10 + ans[2];
        int num2 = ans[1] * 10 + ans[3];
        return num1 + num2;

    }
};