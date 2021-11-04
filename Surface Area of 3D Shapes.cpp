class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) 
    {
        int m = grid.size(), n = grid[0].size();
        int ud = 0, lat = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]) 
                    ud += 2;
                if(i==0) 
                    lat+=grid[i][j];
                else 
                    lat+=max(grid[i][j]-grid[i-1][j],0);
                if(i==m-1) 
                    lat+=grid[i][j];
                else 
                    lat+=max(grid[i][j]-grid[i+1][j], 0);
                if(j==0) 
                    lat += grid[i][j];
                else 
                    lat+=max(grid[i][j]-grid[i][j-1],0);
                if(j==n-1) 
                    lat += grid[i][j];
                else 
                    lat += max(grid[i][j] - grid[i][j+1], 0);
            }
        }
        return ud + lat;
    }
};
