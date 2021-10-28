class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& pt) \
    {
       int sum=0; 
       for(int a=1;a<pt.size();a++)
       {
           sum=sum+max(abs(pt[a-1][0]-pt[a][0]),abs(pt[a-1][1]-pt[a][1]));
       }
       return sum; 
    }
};
