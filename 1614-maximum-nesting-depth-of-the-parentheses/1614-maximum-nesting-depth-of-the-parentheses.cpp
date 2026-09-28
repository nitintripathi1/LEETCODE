class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int count = 0;
        int ans = 0;
        for(int i =0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                count++;
                ans = max(ans , count);
            }
            else if(s[i] == ')'){
                if(!st.empty()){
                st.pop();
                count--;
            }
            else {
                continue;
            }
            }
        }
        return ans;
    }
};