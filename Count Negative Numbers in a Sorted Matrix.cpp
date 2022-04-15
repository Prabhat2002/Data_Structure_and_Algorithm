class Solution 
{
 public:
    int countNegatives(vector<vector<int>>& grid) 
    {
         int ans=0;
         int n=grid.size();
         for(int i=0;i<n;i++)
         {
             vector<int>nums(grid[i].begin(),grid[i].end());
             int k=0,j=grid[i].size()-1;
             int pos=-1;
             while(k<=j)
             {
                 int m=(k+j)/2;
                 if(nums[m]>=0)
                    k=m+1;
                 else
                 {
                     pos=m;
                     j=m-1;
                 }
             }
             if(pos!=-1)
                ans=ans+grid[i].size()-pos;
         }
        return ans;
    }
};
