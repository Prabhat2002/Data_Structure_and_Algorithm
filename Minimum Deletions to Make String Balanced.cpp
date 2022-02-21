class Solution 
{
 public:
    int minimumDeletions(string s) 
    {
        int n = s.length();
        vector<int> bvec(n);
        vector<int> avec(n);
        int cnt = 0;
        // generate array for every index number of b's to there left
        for(int i = 0; i < n; i++)
        {
            bvec[i] = cnt;
            if(s[i] == 'b')
                cnt++;
        }
        cnt = 0;
        // generate array for every index number of a's to there right
        for(int i = n - 1; i >= 0; i--)
        {
            avec[i] = cnt;
            if(s[i] == 'a')
                cnt++;
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
            mini = min(mini, bvec[i] + avec[i]);
        return mini;
    }
};
