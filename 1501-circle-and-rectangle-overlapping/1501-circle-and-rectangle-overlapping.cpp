class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
     int xClamp,yClamp;
     if (xCenter <= x1) xClamp = x1;
     else if (x1 < xCenter && xCenter < x2) xClamp = xCenter;
     else xClamp = x2;


      if (yCenter <= y1) yClamp = y1;
     else if (y1 < yCenter && yCenter < y2) yClamp = yCenter;
     else yClamp = y2;

     if ((pow(abs(xClamp - xCenter),2) + pow(abs(yClamp - yCenter),2)) <= pow(radius,2)) return true;

return false;
    }
};