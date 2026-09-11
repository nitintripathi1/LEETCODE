class Solution {
    public int totalNumbers(int[] digits) {
        Set<Integer> ans = new HashSet<>();
        for(int i = 0; i < digits.length; i++){
            for(int j = 0; j < digits.length; j++){
                for(int k = 0; k < digits.length; k++){
                    if(i == j || j == k || k == i) 
                    continue;
                    if(digits[i] == 0)
                    continue;
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    if(num % 2 == 0) ans.add(num);
                }
            }
        }
        return ans.size();
    }
}