class Solution 
{
 public:
    int smallestRepunitDivByK(int k) 
    {
        long long int sum=1;
        for(int i=1;i<=k;i++)
        {
            if(sum%k==0)
                return i;
            sum=( sum* 10 + 1)%k;
        }
        return -1;
    }
};
