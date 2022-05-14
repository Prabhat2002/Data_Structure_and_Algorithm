class Solution 
{
public:
 int recurse(vector<vector<int>>&matrix,int i,int j,vector<vector<int>>& dp)
 {
    if(j<0||j>=matrix[0].size()||i==matrix.size()) 
       return 0;
    if(dp[i][j]!=-1) 
       return dp[i][j];
    if(matrix[i][j]==-1)
        return 0;
    //finding to other directions of matrix which one is maximum 
    //Directions are (straight down , down left , down right)
    int a=recurse(matrix,i+1,j,dp);
    int b=recurse(matrix,i+1,j-1,dp);
    int c=recurse(matrix,i+1,j+1,dp);
    return dp[i][j]=matrix[i][j]+max({a,b,c});
 }
 int MaxGold(vector<vector<int>>&matrix)
 {
    int m=matrix[0].size(),n=matrix.size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    int ans=INT_MIN;
    for(int j=0;j<m;j++)
        ans=max(ans,recurse(matrix,0,j,dp));
    return ans;
 }
};
