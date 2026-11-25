class Solution {
public:
    int calculate(string s) {
       stack<int>st;
       int n = s.size();
       long long number = 0;
       int sign = 1;
       int result = 0;
       for(int i = 0; i < n; i++){
        if(isdigit(s[i])){
            number = number * 10 + (s[i] - '0');
        }
        else if(s[i] == '+'){
            result += (number*sign);
            number = 0;
            sign = 1;
        }
        else if(s[i] == '-'){
            result += (number*sign);
            number = 0;
            sign = -1;
        }
        else if(s[i] == '('){
            st.push(result);
            st.push(sign);
            result = 0;
            number = 0;
            sign = 1;

        }
        else if(s[i] == ')'){
            result += (number*sign);
            number = 0;
            int last_sign = st.top();
            st.pop();
            int last_result = st.top();
            st.pop();
            result = last_result + (result*last_sign);
        }
       } 
       result += (number*sign);
       return result;
    }
};