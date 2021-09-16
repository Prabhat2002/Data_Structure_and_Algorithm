class Solution {
public:
    int climbStairs(int n) 
    {
       if (n<3)
       {
           return n;
       }
        int a=1;
        int b=2;
        for (int i=3;i<=n;i++){
            int c=b;
            b=a+b;
            a=c;
        }
        return b;
    }
};
