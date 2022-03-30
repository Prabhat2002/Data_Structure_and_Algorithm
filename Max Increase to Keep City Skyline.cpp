class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int n=grid.size();
         int col[n],row[n];
         for(int i=0;i<n;i++)
         {
             int r=0,c=0;
             for(int j=0;j<n;j++)
             {
                 r=max(r,grid[i][j]);
                 c=max(c,grid[j][i]);
             }
             col[i]=c;
             row[i]=r;
         }
        int ans=0;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 int val=min(row[i],col[j]);
                 ans=ans+val-grid[i][j];
             }
         }
        return ans;
    }
};
