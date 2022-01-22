class Solution {
public:
    bool winnerSquareGame(int n) 
    {
        vector<int>dp(n+1,0); 
        for(int i=1;i<=n;++i)
        {
            for(int k=1;k*k<=i;k++)
            {
                if(!dp[i-k*k])
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        // dp[1]=1; dp[2]=0; dp[3]=1 dp[4]=1  dp[5]=0;
       return dp[n];
    }
};
