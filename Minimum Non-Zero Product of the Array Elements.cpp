class Solution 
{
public:
   int mod=1000000007; 
   int power(long long x,long long times)
   {
        if(times==0)
            return 1;
        long long temp=power(x,times/2);
        temp = (temp*temp)%mod;
        if(times%2)
            temp=(temp*(x %mod))%mod;
        return temp%mod;
    }
    int minNonZeroProduct(int p) {
        
        long long x=(1ll << p) -1;
        return  x%mod * power(x-1, x/2) %mod;  
    }
};
