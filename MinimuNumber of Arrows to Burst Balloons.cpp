bool comp(vector<int> &v1,vector<int> &v2)
    {
        return v1[1]<v2[1];
    }
class Solution 
{
    
  public:  
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        if(points.size()<=0)
            return points.size();
        
        int n=points.size();
        int ans=1;
        sort(points.begin(),points.end(),comp);
        int prev = points[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(prev>=points[i][0])
               continue;
            ans++;
            prev = points[i][1];
        }
        return ans;      
    }
};
