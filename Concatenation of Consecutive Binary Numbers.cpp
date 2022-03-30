class Solution 
{
 public:
    int concatenatedBinary(int n) 
    {
        long long int mod=1000000007; 
        long long int x=1;
        for(int i=2;i<=n;i++)
        {
            int y=1+log2(i);
            int val=pow(2,y);
            x=((x*val)%mod+i)%mod;
        }
       return x;
    }
};
