class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> res(n+1, INT_MAX);
        res[0] = 0;
        for (int i=0;i<=n; i++)
        {
            for (int j=1; j<=sqrt(i); j++)
            {
                res[i] = min(res[i-j*j]+1, res[i]);
                // cout<<res[i]<<" ";  
            }
        }
        return res[n];
    }
};
