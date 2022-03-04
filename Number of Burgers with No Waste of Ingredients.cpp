class Solution 
{
 public:
    vector<int> numOfBurgers(int t, int c) 
    {
        int x=(t-2*c)/2;
        int y=c-x;
        if(x>=0 && y>=0 && 4*x+2*y==t)
            return {x,y};
        return {};
    }
};
