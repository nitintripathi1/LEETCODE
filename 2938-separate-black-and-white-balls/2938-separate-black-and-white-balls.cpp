class Solution {
public:
    long long minimumSteps(string s) {
        long long n = s.size();
        long long ans = 0;
        long long white = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                ans += white;
            }
            else if(s[i] == '1'){
                white++;
            }
        }
        return ans;
    }
};