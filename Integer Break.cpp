class Solution 
{
 public:
    int integerBreak(int n)
    {
       if(n<4)
           return n-1;
        vector<int> v{0, 1, 2, 3};
        for (int i = 4; i <= n; ++i) 
            v[i % 4] = max(v[(i - 2)%4]*2, v[(i - 3)% 4]*3);
        return v[n % 4];
    }
};
