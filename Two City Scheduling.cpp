bool comp(vector<int>& a,vector<int>& b)
{
        return abs(a[0]-a[1])>abs(b[0]-b[1]);
}
class Solution 
{
 public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int n=costs.size();
        int acount=0,bcount=0,ans=0;
        sort(costs.begin(),costs.end(),comp);
        for(int i=0;i<n;i++)
        {
            if(costs[i][0]>costs[i][1])
            {
                if(bcount<n/2)
                {
                    bcount++;
                    ans+=costs[i][1];
                }
                else
                {
                    acount++;
                    ans+=costs[i][0];
                }
            }
            else if(costs[i][0]<=costs[i][1])
            {
                if(acount<n/2)
                {
                    acount++;
                    ans+=costs[i][0];
                }
                else
                {
                    bcount++;
                    ans+=costs[i][1];
                }
            }
        }
        return ans;
    }
};
