class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int peak = 0;
        for(int i = 1; i < arr.size()-1; i++){
            int prev = arr[i-1];
            int curr =arr[i];
            int next = arr[i+1];
            if(prev > curr && curr < next){
                return false;
            }
            if(curr > prev && curr > next){
                peak++;
            }
            if(prev == curr || curr == next){
                return false;
            }
        }
    return peak == 1;
    }
};