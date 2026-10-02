class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        int count = 0;
        if (n % 2 == 1)
            return false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '(' || locked[i] == '0') {
                count++;
            } else {
                count--;
            }
            if (count < 0)
                return false;
        }
        count =0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')' || locked[i] == '0') {
                count++;
            } else {
                count--;
            }
            if (count < 0)
                return false;
        }
        return true;
    }
};