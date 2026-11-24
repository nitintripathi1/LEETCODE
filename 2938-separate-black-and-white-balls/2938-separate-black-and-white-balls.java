class Solution {
    public long minimumSteps(String s) {
        long n = s.length();
        long white = 0;
        long ans = 0;
        for(int i = 0; i < n; i++){
            if(s.charAt(i) == '0'){
                ans += white;
            }
            else {
                white++;
            }
        }
        return ans;
    }
}