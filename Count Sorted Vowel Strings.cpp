class Solution 
{
 public:
    int countVowelStrings(int n) 
    {
       vector<int>v(5,1);
       if(n==1)
         return 5;
       int ans=0;
       for(int i=2;i<=n;i++)
       {
           int sum=v[4];
           for(int i=3;i>=0;i--)
           {
               v[i]=v[i]+v[i+1];
               sum=sum+v[i];
           }
           ans=sum;
       }
       return ans;
    }
};
