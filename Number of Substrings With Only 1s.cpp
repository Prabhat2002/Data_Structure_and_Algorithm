class Solution {
public:
    int numSub(string s) 
    {
         int n=s.length();
         vector<int>dp(n+1,0);
         for(int i=0;i<n;i++)
         {
             if(s[i]=='1')
                 dp[i+1]=dp[i]+1;
         }
         long long int res=0;
         for(int i=0;i<=n;i++)
            res=(res+dp[i])%1000000007;
        return res;
    }
};
