class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int max=0;
        for(int a=1;a<=n;a++)
        {
            for(int b=1;b<=m;b++)
            {
                if(matrix[a-1][b-1]=='1')
                {
                    dp[a][b]=1+min(dp[a-1][b],min(dp[a][b-1],dp[a-1][b-1]));
                    if(max<dp[a][b])
                       max=dp[a][b];
                }
            }
        }
        return max*max;
    }
};
