class Solution 
{
 public:
    int maxScore(vector<int>& nums, int k) 
    {
         int sum=0,tot=0,n=nums.size();
         for(int i=0;i<n-k;i++)
             sum=sum+nums[i];
         for(int i=0;i<n;i++)
             tot=tot+nums[i];
         int ans=sum;
         int j=n-k,i=0;
         while(j<n)
         {
             sum=sum-nums[i]+nums[j];
             ans=min(ans,sum);
             j++;
             i++;
         }
        return tot-ans;
    }
};
