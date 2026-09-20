class Solution {
public:
    int reverseDegree(string s) {
        map<char , int>mp;
        int sum = 0;
        for(char i = 'a'; i <= 'z'; i++){
            int val = 'z' - i + 1;
            mp[i] = val;
        }
        for(int i = 1; i <= s.size(); i++){
            sum += i * mp[s[i-1]];
        }
        return sum;
    }
};