class Solution 
{
 public:
    bool valid(int i, int j, vector<vector<int>>& grid)
    {
        if(0<=i && i<grid.size() && 0<=j && j<grid[i].size() && grid[i][j]==1) 
             return 1;
        return 0;
    }
    void check(int i, int j, vector<vector<int>>& grid,int &count) 
    {
            count++;
            grid[i][j] = 0;
            if(valid(i-1,j,grid))
                check(i - 1, j, grid,count);
            if(valid(i,j-1,grid))
                check(i, j - 1, grid,count);
            if(valid(i+1,j,grid))
                check(i + 1, j, grid,count);
            if(valid(i,j+1,grid))
                check(i, j + 1, grid,count);
    } 
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int area=0;
        for(int i = 0; i < grid.size(); i++) 
        {
            for(int j = 0; j < grid[0].size(); j++) 
            {
                if(grid[i][j]==1) 
                {
                    int count=0;
                    check(i, j, grid,count);
                    area=max(area,count);
                }
            }
        }
        return area;
    }
};
