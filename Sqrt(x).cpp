class Solution 
{
 public:
    int mySqrt(int x) 
    {
        int ans=0;
        int i=0,j=x;
        while(i<=j)
        {
            long long int m=(i+j)/2;
            if((long long)(m*m)<=x)
            {
               ans=m;
               i=m+1;
            } 
            else
                j=m-1;
        }
        return ans;
    }
};
