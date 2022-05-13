class Solution 
{
  public:
    int countLatticePoints(vector<vector<int>>& circles) 
    {
        set<pair<int,int>>st;
        for(auto circle:circles)
        {
            int x=circle[0];
            int y=circle[1];
            int r=circle[2];
            for(int i=x-r;i<=r+x;i++)
            {
                for(int j=y-r;j<=r+y;j++)
                {
                    if((i-x)*(i-x)+(j-y)*(j-y)<=r*r)
                        st.insert({i,j});
                }
            }
        }
        return st.size();
    }
};
