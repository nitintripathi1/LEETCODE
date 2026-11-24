class Solution {
public:
int dp1[10001];
int dp2[10001];
int left(int i ,vector<int>&arr){
    if(i == 0) return 0;
    if(dp1[i] != -1) return dp1[i];
    if(arr[i] > arr[i-1]){
        return dp1[i] = 1+ left(i-1 , arr);
    }
    return dp1[i] = 0;
}
int right(int i , vector<int>&arr){
    int n = arr.size();
    if(i == n-1) return 0;
    if(dp2[i] != -1) return dp2[i];
    if(arr[i] > arr[i+1]){
        return dp2[i] = 1+ right(i+1 , arr);
    }
    return dp2[i] = 0;
}
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        memset(dp1 , -1 , sizeof(dp1));
        memset(dp2 , -1 , sizeof(dp2));
        int ans = 0;
        for(int i = 1; i < n; i++){
            int l = left(i , arr);
            int r = right(i , arr);
            if(l > 0 && r > 0){
                ans = max(ans , l+r+1);
            }
        }
        return ans;
    }
};