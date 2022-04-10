class Solution 
{
 public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
          int n=grid.size();
          int m=grid[0].size();
          vector<int>nums;
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<m;j++)
                  nums.push_back(grid[i][j]);
          }
          sort(nums.begin(),nums.end());
          int ans=0,i=0,j=nums.size()-1;
          int mid=nums[(j+i)/2];
          for(int i=0;i<nums.size();i++)
          {
              int diff=abs(mid-nums[i]);
              if(diff%x==0)
                 ans=ans+diff/x;
              else
                 return -1;
          }
          return ans;
    }
};
