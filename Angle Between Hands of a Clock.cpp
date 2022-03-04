class Solution 
{
 public:
    double angleClock(int h, int m) 
    {
        double a;
        a=abs((m*6)-(h*30)-(m*6)/(double)12);
        return min(a,360-a);
    }
};
