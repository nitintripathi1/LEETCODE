class Solution {
public:
    int getLucky(string s, int k) {
        map<char , int>m;
        for(char i = 'a'; i <= 'z'; i++){
            m[i] = i - 'a' + 1;
        }
        
        int num = 0;
        for(int j = 0; j < s.length(); j++){
            int val = m[s[j]];;
           while(val != 0){
            num += val % 10;
            val /= 10;
           }
           
        }
        k--;
        
        while(k != 0){
            int sum = 0;
            while(num != 0){
            int digit = num % 10;
            sum += digit;
            num /= 10;
            }
            num = sum;
            k--;
        }
        return num;
    }
};