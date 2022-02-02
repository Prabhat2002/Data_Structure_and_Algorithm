class Solution {
public:
     long long power(long long int n,long int r)
    {
        if(r==1)
          return n%1000000007; 
        long long int res=1;
        long long int know=power(n,r/2)%1000000007;
        if(r%2)
           res=(res*n)%1000000007;
        return (res*((know*know)%1000000007))%1000000007;  
    }
    int countGoodNumbers(long long n) 
    {
        if(n==1)
            return 5;
        long long int res=power(20,n/2);
        if(n%2==1)
          res=(((res)%1000000007)*5)%1000000007;
        return res;
    }
};
