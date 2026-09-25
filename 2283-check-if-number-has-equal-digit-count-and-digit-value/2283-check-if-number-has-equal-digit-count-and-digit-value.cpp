class Solution {
public:
    bool digitCount(string num) {
        vector<int>f(10 , 0);
        for(auto x : num){
            f[x - '0']++;
        }
        for(int i = 0; i < num.size(); i++){
            if(f[i] != num[i] - '0') return false;
        }
        return true;
    }
};