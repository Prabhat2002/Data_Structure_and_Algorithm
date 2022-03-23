class Solution 
{
 public:
    bool valid(int i,int j,int n,vector<vector<bool>>&vec)
    {
        if(i>=0 && j>=0 && i<n && j<n  && vec[i][j]==false)
           return 1;
        return 0;
    }
	int minStepToReachTarget(vector<int>&c, vector<int>&t, int N)
	{
          if(c[0]==t[0] && c[1]==t[1])
             return 0;
          vector<vector<bool>>vec(N+1,vector<bool>(N+1,false));
          vec[c[0]][c[1]]=true;
          queue<pair<int,int>>q;
          q.push({c[0],c[1]});
          int ans=0;
          while(!q.empty())
          {
              int size=q.size();
              ans++;
              while(size-->0)
              {
                  pair<int,int>p=q.front();
                  q.pop();
                  int x=p.first;
                  int y=p.second;
                  int ax[8]={2,2,-2,-2,1,1,-1,-1};
                  int ay[8]={1,-1,1,-1,2,-2,2,-2};
                  for(int i=0;i<8;i++)
                  {
                      int x1=x+ax[i];
                      int y1=y+ay[i];
                      if(x1==t[0] && y1==t[1])
                        return ans;
                      if(valid(x1,y1,N,vec))
                      {
                          vec[x1][y1]=true;
                          q.push({x1,y1});
                      }
                  }
              }
          }
          return ans;
	}
};
