class Solution {
public:
   vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> temp(arr.begin(), arr.end());
    
    while(temp.size() > k) {
       
        if(abs(temp.front() - x) > abs(temp.back() - x))
            temp.erase(temp.begin());
        else
            temp.erase(temp.end() - 1);
    }
    return temp;
}
};