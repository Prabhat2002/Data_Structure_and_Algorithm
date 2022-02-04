class Solution {
public:
    int dp[101];
    int recur(int i,vector<int>&v)
    {
        if(i>=v.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans1=v[i]+recur(i+2,v);
        int ans2=recur(i+1,v);
        return dp[i]=max(ans1,ans2);
    }
    int rob(vector<int>& nums) 
    {
        for(int i=0;i<101;i++)
            dp[i]=-1;
        int res=recur(0,nums);
        return res;
    }
};
