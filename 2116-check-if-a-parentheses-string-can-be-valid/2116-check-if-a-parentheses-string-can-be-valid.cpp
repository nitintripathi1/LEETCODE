class Solution {
public:
    bool canBeValid(string s, string locked) {
        stack<int> open;
        stack<int> openclose;
        int n = s.length();
        if (n % 2 == 1)
            return false;
        for (int i = 0; i < s.length(); i++) {
            if (locked[i] == '0') {
                openclose.push(i);
            } else if (s[i] == '(') {
                open.push(i);
            } else {
                if (!open.empty()) {
                    open.pop();
                } else if (!openclose.empty()) {
                    openclose.pop();
                } else {
                    return false;
                }
            }
        }
        while (!open.empty() && !openclose.empty() &&
               open.top() < openclose.top()) {
            open.pop();
            openclose.pop();
        }
        return open.empty() && openclose.size() % 2 == 0;
    }
};