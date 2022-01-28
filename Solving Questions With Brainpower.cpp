class Solution {
public:
    long long mostPoints(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        vector<long long int>dp(n+1,0);
        long long int res=0;
        for(int i=n-1;i>=0;i--)
        {
            int ind=i+nums[i][1]+1;
            if(ind>=n)
                dp[i]=nums[i][0];
            else
                dp[i]=nums[i][0]+dp[ind];
            res=max(res,dp[i]);
            dp[i]=max(dp[i],dp[i+1]);
        }
        return res;
    }
};
