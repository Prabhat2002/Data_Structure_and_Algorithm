class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
       vector<vector<int>>num(grid.size(),vector<int>(grid[0].size(),0));
       num[0][0]=grid[0][0];
       if(grid.size()==0)
           return 0;
        
        for(int a=1;a<grid[0].size();a++)
            num[0][a]=num[0][a-1]+grid[0][a];
        for(int a=1;a<grid.size();a++)
            num[a][0]=num[a-1][0]+grid[a][0];
        for(int a=1;a<grid.size();a++)
        {
            for(int b=1;b<grid[0].size();b++)
               num[a][b]=grid[a][b]+min(num[a-1][b],num[a][b-1]);
        }
        return num[grid.size()-1][grid[0].size()-1];
        }
    };
