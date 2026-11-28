class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char , int> mp;
        priority_queue<int>pq;
        for(char x : tasks){
            mp[x]++;
        }
        for(auto x : mp){
            pq.push(x.second);
        }
        int ans = 0;
        while(!pq.empty()){
            vector<int>temp;
            for(int i = 1; i <= n+1; i++){
                if(!pq.empty()){
                temp.push_back(pq.top() -1);
                pq.pop();
                }
            }
            for(auto freq : temp){
                if(freq > 0){
                    pq.push(freq);
                }
            }
            if(pq.empty()){
                ans += temp.size();
            }
            else {
                ans += n+1;
            }
        }
        return ans;
    }
};