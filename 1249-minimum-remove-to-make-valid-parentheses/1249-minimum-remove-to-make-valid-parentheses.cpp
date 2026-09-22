class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>ans;
        string a = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                ans.push(i);
            }
            else if(s[i] == ')'){
               if(!ans.empty() && s[ans.top()] =='(' ){
                ans.pop();
               }
               else
               ans.push(i);
            }
        }
           for(int i = s.length()-1; i >= 0; i--){
            if(!ans.empty() && i == ans.top()){
                ans.pop();
                continue;
            }
            else {
                a += s[i];
            }
           }
         reverse(a.begin() , a.end());
            return a;
    }
};