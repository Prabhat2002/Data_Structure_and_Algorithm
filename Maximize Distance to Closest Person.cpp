class Solution 
{
 public:
    int maxDistToClosest(vector<int>& nums) 
    {
         vector<int>v;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             if(nums[i]==1)
                 v.push_back(i);
         }
         int m=v.size()-1;
         int res1=n-1-v[m];
         int res2=v[0]-0;
         int res=res1>res2?n-1-v[m]:v[0];
         
         for(int i=1;i<=m;i++)
         {
             int x=(v[i]-v[i-1])/2;
             res=max(res,x); 
         }
         return res; 
    }
};
