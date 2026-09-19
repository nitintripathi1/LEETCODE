class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x = 0;
        if(xCenter < x1){
            x = x1 - xCenter;
        }
        else if(xCenter > x2){
            x = xCenter - x2;
        }
        int y =0;
        if(yCenter < y1){
            y = y1 - yCenter;
        }
        else if(yCenter > y2){
            y = yCenter - y2;
        }
        if(x*x + y*y <= radius* radius) return true;
         return false;

    }
};