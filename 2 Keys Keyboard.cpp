class Solution 
{
public:
    int minSteps(int n) 
    {
        if(n==1)
            return 0;
        long int ans=0;  
        for(int i=2;i<=n;)
        {
            if(n%i==0)
            {
                ans=ans+i;
                n=n/i;
            }
            else
                i++;
        }
        if(n!=1)
            ans=ans+n;
        return ans;
    }
};
