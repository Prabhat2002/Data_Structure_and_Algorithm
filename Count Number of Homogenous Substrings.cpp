class Solution {
public:
    int countHomogenous(string s) 
    {
        int n=s.length();
        vector<int>dp(n+1,0);
        dp[1]=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                dp[i+1]=dp[i]+1;
            else
                dp[i+1]=1;
        }
        long long int mod=1000000007;
        long long int sum=0;
        for(int i=1;i<=n;i++)
            sum=(sum+dp[i])%mod;
        return sum;
    }
};
