class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l = ax2 -ax1;
        int b = ay2 - ay1;
        int l2 = bx2 - bx1;
        int b2 = by2 - by1;
        int a1 = l * b;
        int a2 = l2 * b2;
        int lc = min(ax2 , bx2) - max(ax1 , bx1) ;
        int bc = min(ay2 , by2) - max(ay1 , by1);
        int ac = max
        (0 ,lc) * max(0 ,bc);
        int ans = a1 + a2 - ac;
        return ans;
    }
};