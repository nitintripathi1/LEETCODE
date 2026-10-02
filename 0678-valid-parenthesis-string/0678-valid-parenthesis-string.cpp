class Solution {
public:
    bool checkValidString(string s) {
        int count = 0;
        for(int i  = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '*'){
                count++;
            }
            else {
                count--;
            }
            if(count < 0) return false;
        }
        count = 0;
        for(int i = s.length()-1 ; i>= 0; i--){
            if(s[i] == ')' || s[i] == '*'){
                count++;
            }
            else {
                count--;
            }
            if(count < 0) return false;
        }
        return true;
    }
};