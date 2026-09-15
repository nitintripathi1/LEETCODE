class Solution {
public:
int add(int x){
    int sum = 0;
    while(x != 0) {
        int digit = x % 10;
        sum += digit;
        x /= 10;
    }
  
    if(sum >= 10) return add(sum);
    return sum;

}
    int addDigits(int num) {
        return add(num);
    }
};