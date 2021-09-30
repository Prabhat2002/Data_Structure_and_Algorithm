class Solution {
public:
    int numTrees(int n) 
    {
        vector<int> dp(n + 1);
        dp[0] = dp[1] = 1;
        for(int len = 2; len <= n; ++len)
        {
            for(int i = 0; i < len; ++i)
                dp[len]=dp[len]+(dp[i] * dp[len - 1 - i]);
        }
        return dp[n];
    }
};
/*
 3-5
 {
 2
   ->0-1
    dp[2]=dp[2]+(dp[0]*dp[1]) => 1+0=1
    dp[2]=1+(dp[1]*dp[0]) => 1+1*1=2
 3  
   ->0-1-2
   dp[3]=dp[3]+dp[0]*dp[2] => 
   dp[3]=dp[3]+dp[1]*dp[1] => 
   dp[3]=dp[3]+dp[2]*dp[0] => 
 }
*/
