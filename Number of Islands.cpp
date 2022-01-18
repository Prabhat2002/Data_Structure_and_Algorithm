class Solution {
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) 
        {
            for (int j = 0; j < grid[0].size(); j++) 
            {
                if (grid[i][j] == '1') 
                {
                    Island(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
    void Island(int i, int j, vector<vector<char>>& grid) 
    {
        if(0<=i && i<grid.size() && 0<=j && j<grid[i].size() && grid[i][j]=='1') 
        {
            grid[i][j] = '0';
            Island(i - 1, j, grid);
            Island(i, j - 1, grid);
            Island(i + 1, j, grid);
            Island(i, j + 1, grid);
        }
    }
};
