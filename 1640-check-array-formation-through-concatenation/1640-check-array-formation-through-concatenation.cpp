class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i =0;
        while(i < arr.size()){
            bool found = false;
            for(auto x : pieces){
                if(x[0] == arr[i]){
                    found = true;

                    for(int y : x){
                        if(i >= arr.size() || y != arr[i]){
                            return false;
                        }
                        i++;
                    }
                    break;
                }
                
            }
            if(!found) return false;
        }
        return true;
    }
};