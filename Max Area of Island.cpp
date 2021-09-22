class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
    int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n));
        int area = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                area = max(area, dfs(grid, visited, i, j));
            }
        }
        return area;
    }
    
    int dfs(vector<vector<int>> &grid, vector<vector<int>> &visited, int i, int j){
        // if this is not an island or the island has been explored.
        if(grid[i][j] == 0 || visited[i][j] == 1) return 0;
        int area = 1;
        visited[i][j] = 1;
        if(i > 0)
            area += dfs(grid, visited, i - 1, j);
        if(i + 1 < grid.size())
            area += dfs(grid, visited, i + 1, j);
        if(j > 0)
            area += dfs(grid, visited, i, j - 1);
        if(j + 1 < grid[0].size())
            area += dfs(grid, visited, i, j + 1);
        return area;
    }
};
