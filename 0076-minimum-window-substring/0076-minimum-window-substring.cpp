class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int  mini_window = INT_MAX;
        if(t.size() > n) return "";
        unordered_map<char , int>mp;
        for(char ch : t){
            mp[ch]++;
        }
        int count = t.length();
        int i = 0 , j = 0;
        int start_i = 0;
        while(j < n){
            char ch = s[j];
            if(mp[ch] > 0){
                count--;
            }
            mp[s[j]]--;
            while(count == 0){
                int currWindow_size = j -i + 1;
                if(currWindow_size < mini_window){
                    mini_window = currWindow_size;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0){
                    count++;
                }
                i++;
            }
            j++;
        }
        return mini_window == INT_MAX ? "" : s.substr(start_i,mini_window);
    }
};