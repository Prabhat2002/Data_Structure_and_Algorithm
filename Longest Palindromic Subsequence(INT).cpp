class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if( s.length() < 1 ) 
            return s.length();
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),0));
        for(int len=1; len<=s.length(); len++)
        {
            for(int i=s.length()-len; i>=0; i--)
            {
            int j = i + len - 1;
            if( i == j ) 
                dp[i][j] = 1;
            else if( s[i] == s[j] ) 
                dp[i][j] = dp[i+1][j-1] + 2;
            else if( s[i] != s[j] ) 
                dp[i][j] = max( dp[i][j-1], dp[i+1][j]);
            }
        } 
        return dp[0][s.length()-1];
    }
};
