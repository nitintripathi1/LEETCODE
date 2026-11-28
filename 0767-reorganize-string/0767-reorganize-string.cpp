class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char , int>mp;
        int n = s.size();
        for(char &ch : s){
            mp[ch]++;

            if(mp[ch]  > (n+1)/2){
                return "";
            }
        }
        priority_queue<pair<int , char>>pq;
        for(auto &x : mp){
            if(x.second > 0){
                pq.push({x.second , x.first});
            }

        }
        string ans = "";
        while(pq.size() >= 2){
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();
            ans.push_back(a.second);
            a.first--;
            ans.push_back(b.second);
            b.first--;
            if(a.first > 0) pq.push(a);
            if(b.first > 0) pq.push(b);
        }
        if(!pq.empty()){
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};