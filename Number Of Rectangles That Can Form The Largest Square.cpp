class Solution 
{
 public:
    int countGoodRectangles(vector<vector<int>>& rectangles) 
    {
        int res=0,mx=0;
        for (auto rec:rectangles) 
        {
            int side=min(rec[0],rec[1]);
            if(side>mx) 
            {
                mx=side;
                res=1;
            } 
            else if(side==mx) 
                ++res;
        }
        return res;
    }
};
