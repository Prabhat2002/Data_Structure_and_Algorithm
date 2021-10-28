class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) 
    {
        if(co.size() == 2)
            return true;
        int x0=co[0][0],x1=co[1][0];
        int y0=co[0][1],y1=co[1][1];
        int dx=x1-x0,dy=y1-y0;
        for(int i=2;i<co.size();i++)
        {
          int x=co[i][0],y=co[i][1];
          if(dy*(x-x0)!=dx*(y-y0))
             return false;
        }
      return true;
    }
};
