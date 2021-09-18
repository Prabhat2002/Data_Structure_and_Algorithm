class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        if(x==0)
          return 0;
        if(x<4)
          return 1;
        long long int a;  
        for(a=2;a<x;a++)
        {
            if(a*a>x)
            {
                break;
            }
        }
        return a-1;
    }
};
