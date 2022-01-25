class Solution 
{
 public:
    int countLargestGroup(int n) 
    {
        int count=0;
        int val=0;
         vector<int>v(37);
         for(int i=1;i<=n;i++)
         {
             val=max(val,++v[digitsum(i)]);
         }
         for(int i=0;i<v.size();i++)
         {
             if(val==v[i])
                 count++;
         }
        return count;
    }
    int digitsum(int n)
    {
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n=n/10;
     
        }
        return sum;
    }
};
