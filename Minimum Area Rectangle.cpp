class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) 
    {
        unordered_map<int, unordered_set<int>> s;
        for (const auto& point : points)
            s[point[0]].insert(point[1]);     
        int n = points.size();
        int min_area = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
          for (int j = i + 1; j < n; ++j) 
          {
            int x0=points[i][0];
            int y0=points[i][1];
            int x1=points[j][0];
            int y1=points[j][1];
            if(x0==x1 || y0==y1) 
                continue;
            int area=abs(x0-x1)*abs(y0-y1);
            if(area>min_area) 
                continue;
            if(!s[x1].count(y0)||!s[x0].count(y1))
                continue;
            min_area = area;
          }
        }
    return min_area == INT_MAX ? 0 : min_area;     
    }
};
