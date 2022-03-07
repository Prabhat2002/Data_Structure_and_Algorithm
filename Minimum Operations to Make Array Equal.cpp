class Solution 
{
 public:
    int minOperations(int n) 
    {
        long int ans=0;
        for(int i=1;i<=2*n-1;i=i+2)
            ans=ans+abs(n-i);
        return ans/2;
    }
}; 
