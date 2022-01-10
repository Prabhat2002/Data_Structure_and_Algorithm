class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) 
    {
        long long int x=0;
        long long int y=1;
        // long long int ans=1;
        int n=prices.size();
        vector<long long int>ans(n,1);
        for(y=1;y<prices.size();y++)
         {
             if(prices[y]==prices[y-1]-1)
             {
                 ans[y]=ans[y]+ans[y-1]+y-x;
             }
             else
             {
                 x=y;
                 ans[y]=ans[y]+ans[y-1];
             }
         }
        return ans[n-1];
    }
};
