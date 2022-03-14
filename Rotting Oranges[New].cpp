class Solution 
{
 public:
    //validation of string which we are going to visit.
    bool valid(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1)
            return 1;
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>>q;
        int fresh=0;
        //checking all the rotten oranges
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)     
                    q.push({i,j});
                if(grid[i][j]==1) 
                    fresh++;      
            }
        }
        //condition if all are rotten then no need to traverse more
        if(fresh==0)
            return 0;
        int time=0;
        while(!q.empty())
        {
            int temp=0;
            int size=q.size();
            //another loop because we want to traverse all connected fresh oranges 
            while(size--)
            {
              pair<int,int>p=q.front();
              q.pop();
              int x=p.first;
              int y=p.second;
              int a[4]={1,-1,0,0};
              int b[4]={0,0,1,-1};
              for(int i=0;i<4;i++) 
              {
                  int x1=a[i]+x;
                  int y1=b[i]+y;
                  if(valid(x1,y1,grid))
                  {
                      //after getting the valid case we are converting all the connected node
                      grid[x1][y1]=2;
                      temp++;
                      q.push({x1,y1});
                  }
              }
            }
            if(temp)
                time++;
        }
        //at the end if grid[i][j]==1 return -1
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1) 
                    return -1;      
            }
        }
        return time;
    }
};
