class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long start =0;
        long long end = num;
        long long mid = start + (end - start )/2;
        long long  target = num;
        if( num==0|| num==1 ){
            return true;
        }
        while(start <= end ){
            long long sq = 1 * mid * mid;
            if(sq == target ){
                return true;

            }
            else if (sq > target ){
                end = mid -1;
            }
            else{
               
                start = mid +1;
            }
             mid = start + (end - start )/2;

        }
        return false ;

    }
};