class Solution {
public:
    int minAddToMakeValid(string s) {
     stack<int>st;
     int count = 0;
     for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
            count++;
        }
        else if(s[i] == ')'){
            if(st.empty()){
                count++;
            }
            else{
                count--;
                st.pop();
            }
            
        }
     } 
     return abs(count);  
    }
};