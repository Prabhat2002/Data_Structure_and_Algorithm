class Solution {
public:
    int flipLights(int n, int p) 
    {
       if(p==0)
           return 1;
       if(n==1)
           return 2;
       else if(n==2 && p==1)
           return 3;
       else if(n==2 && p!=1)
           return 4;
       else if(n>=3 && p==1)
           return 4;
       else if(n>=3 && p==2)
           return 7;
       return 8;
    }
};
