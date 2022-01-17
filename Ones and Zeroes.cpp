class Solution {
public:
    int findMaxForm(vector<string>& s, int m, int n) 
    {
        int dp[101][101]{0};
        for (string str : s) 
        {
            int z = 0,o = 0;
            for (char c : str)
                c == '0' ? z++ : o++;
            for (int i=m;i>=z;i--)
            {
                for (int j=n;j>=o;j--)
                {
                    dp[i][j] = max(dp[i][j], dp[i-z][j-o] + 1);
                }
            }
        }
        return dp[m][n];
    }
};
