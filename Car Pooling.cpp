class Solution 
{
 public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<vector<int>> points;
        for(vector<int>& trip : trips)
        {
            int c = trip[0], s = trip[1], e = trip[2];
            points.push_back({s, 1, c});
            points.push_back({e, 0, c});
        }
        sort(points.begin(), points.end());  
        for(vector<int>& point : points)
        {
            int p = point[0];
            bool isStart = (bool)(point[1]);
            int c = point[2];
            if(isStart)
            {
                if(capacity < c)
                    return false;
                capacity -= c;
            }
            else
                capacity += c;
        }
        return true;
    }
};
