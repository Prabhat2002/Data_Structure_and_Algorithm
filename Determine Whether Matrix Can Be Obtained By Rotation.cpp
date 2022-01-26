class Solution 
{
 public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)   
    {
        int n=mat.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        int k=4;
        
        while(k)
        {
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=n;j++)
                {
                    dp[j][i]=mat[n-i][j];
                }
            }
            if(dp==target)
                return 1;
            else
            {
                mat=dp;
                k--;
            }
        }
        return 0;
    }
};
