class Solution {
public:
    int dp[101][101];
    int recur(int i,int j,int m,int n)
    {
        if(i==m-1 && j==n-1)
            return 1;
        if(i==m && j==n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int choice=0;
        choice+=recur(i+1,j,m,n);
        choice+=recur(i,j+1,m,n);
        return dp[i][j]=choice;
    }
    int uniquePaths(int m, int n) 
    {
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                 dp[i][j]=-1;
         int res=recur(0,0,m,n);
         return res;
    }
};
