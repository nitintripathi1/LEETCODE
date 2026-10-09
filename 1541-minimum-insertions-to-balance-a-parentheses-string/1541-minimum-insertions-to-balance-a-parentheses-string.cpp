
class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push('(');
            }
            else {
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    if (!st.empty()) {
                        st.pop();
                    } else {
                        ans++;
                    }
                    i++;
                }
                else {
                    if (!st.empty()) {
                        st.pop();
                        ans++;
                    } else {
                        ans += 2;
                    }
                }
            }
        }

        return ans + 2 * st.size();
    }
};
