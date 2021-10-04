class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        int sum= 0 , side=0;
        for(int i = 0 ; i < n ; i++)
        {
           for(int j = 0 ; j < m;  j++) 
           {
            if(grid[i][j] == 1) 
            {
                side = 0;
                if(i == 0)
                    side++;
                else
                    side+=(grid[i - 1][j] == 0);
                if(j == 0)
                    side++;
                else
                    side+=(grid[i][j - 1] == 0);
                if(i==n-1)
                    side++;
                else
                    side+=(grid[i + 1][j] == 0);
                if(j==m-1)
                    side++;
                else
                    side+=(grid[i][j + 1] == 0);
                sum+=side;
            }
         }
       }
    return sum;
   }
};
